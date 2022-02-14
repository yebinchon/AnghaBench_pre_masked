
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct cxl {int adapter_num; TYPE_2__* native; struct dentry* debugfs; } ;
struct TYPE_4__ {TYPE_1__* sl_ops; } ;
struct TYPE_3__ {int (* debugfs_add_adapter_regs ) (struct cxl*,struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxl*,int ) ;
 int VAR_2 ;
 struct dentry* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,struct dentry*,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (struct cxl*,struct dentry*) ;

void FUNC_5(struct cxl *VAR_3)
{
 struct dentry *VAR_4;
 char VAR_5[32];

 if (!VAR_2)
  return;

 FUNC_3(VAR_5, 32, "card%i", VAR_3->adapter_num);
 VAR_4 = FUNC_1(VAR_5, VAR_2);
 VAR_3->debugfs = VAR_4;

 FUNC_2("err_ivte", VAR_1, VAR_4, FUNC_0(VAR_3, VAR_0));

 if (VAR_3->native->sl_ops->debugfs_add_adapter_regs)
  VAR_3->native->sl_ops->debugfs_add_adapter_regs(VAR_3, VAR_4);
}
