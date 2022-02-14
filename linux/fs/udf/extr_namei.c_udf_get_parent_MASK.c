
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct qstr {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int extLocation; } ;
struct fileIdentDesc {TYPE_1__ icb; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct qstr FUNC_3 (char*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct dentry*) ;
 struct dentry* FUNC_6 (struct inode*) ;
 struct kernel_lb_addr FUNC_7 (int ) ;
 int FUNC_8 (int ,struct qstr*,struct udf_fileident_bh*,struct fileIdentDesc*) ;
 struct inode* FUNC_9 (int ,struct kernel_lb_addr*) ;

__attribute__((used)) static struct dentry *FUNC_10(struct dentry *VAR_1)
{
 struct kernel_lb_addr VAR_2;
 struct inode *VAR_3 = ((void*)0);
 struct qstr VAR_4 = FUNC_3("..", 2);
 struct fileIdentDesc VAR_5;
 struct udf_fileident_bh VAR_6;

 if (!FUNC_8(FUNC_5(VAR_1), &VAR_4, &VAR_6, &VAR_5))
  return FUNC_1(-VAR_0);

 if (VAR_6.sbh != VAR_6.ebh)
  FUNC_4(VAR_6.ebh);
 FUNC_4(VAR_6.sbh);

 VAR_2 = FUNC_7(VAR_5.icb.extLocation);
 VAR_3 = FUNC_9(VAR_1->d_sb, &VAR_2);
 if (FUNC_2(VAR_3))
  return FUNC_0(VAR_3);

 return FUNC_6(VAR_3);
}
