
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct cxl_afu {int slice; TYPE_3__* adapter; struct dentry* debugfs; } ;
struct TYPE_6__ {int adapter_num; TYPE_2__* native; int debugfs; } ;
struct TYPE_5__ {TYPE_1__* sl_ops; } ;
struct TYPE_4__ {int (* debugfs_add_afu_regs ) (struct cxl_afu*,struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxl_afu*,int ) ;
 int FUNC_1 (struct cxl_afu*,int ) ;
 struct dentry* FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,struct dentry*,int ) ;
 int FUNC_4 (char*,int,char*,int,int) ;
 int FUNC_5 (struct cxl_afu*,struct dentry*) ;

void FUNC_6(struct cxl_afu *VAR_5)
{
 struct dentry *VAR_6;
 char VAR_7[32];

 if (!VAR_5->adapter->debugfs)
  return;

 FUNC_4(VAR_7, 32, "psl%i.%i", VAR_5->adapter->adapter_num, VAR_5->slice);
 VAR_6 = FUNC_2(VAR_7, VAR_5->adapter->debugfs);
 VAR_5->debugfs = VAR_6;

 FUNC_3("sr", VAR_4, VAR_6, FUNC_0(VAR_5, VAR_3));
 FUNC_3("dsisr", VAR_4, VAR_6, FUNC_1(VAR_5, VAR_1));
 FUNC_3("dar", VAR_4, VAR_6, FUNC_1(VAR_5, VAR_0));

 FUNC_3("err_status", VAR_4, VAR_6, FUNC_1(VAR_5, VAR_2));

 if (VAR_5->adapter->native->sl_ops->debugfs_add_afu_regs)
  VAR_5->adapter->native->sl_ops->debugfs_add_afu_regs(VAR_5, VAR_6);
}
