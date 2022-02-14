
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct kernel_lb_addr {int dummy; } ;
struct TYPE_3__ {int extLocation; } ;
struct inode {int i_sb; TYPE_1__ icb; } ;
struct fileIdentDesc {int i_sb; TYPE_1__ icb; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct dentry {TYPE_2__ d_name; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 struct dentry* FUNC_4 (struct inode*,struct dentry*) ;
 struct kernel_lb_addr FUNC_5 (int ) ;
 struct inode* FUNC_6 (struct inode*,TYPE_2__*,struct udf_fileident_bh*,struct inode*) ;
 struct inode* FUNC_7 (int ,struct kernel_lb_addr*) ;

__attribute__((used)) static struct dentry *FUNC_8(struct inode *VAR_2, struct dentry *VAR_3,
     unsigned int VAR_4)
{
 struct inode *VAR_5 = ((void*)0);
 struct fileIdentDesc VAR_6;
 struct udf_fileident_bh VAR_7;
 struct fileIdentDesc *VAR_8;

 if (VAR_3->d_name.len > VAR_1)
  return FUNC_1(-VAR_0);

 VAR_8 = FUNC_6(VAR_2, &VAR_3->d_name, &VAR_7, &VAR_6);
 if (FUNC_2(VAR_8))
  return FUNC_0(VAR_8);

 if (VAR_8) {
  struct kernel_lb_addr VAR_9;

  if (VAR_7.sbh != VAR_7.ebh)
   FUNC_3(VAR_7.ebh);
  FUNC_3(VAR_7.sbh);

  VAR_9 = FUNC_5(VAR_6.icb.extLocation);
  VAR_5 = FUNC_7(VAR_2->i_sb, &VAR_9);
  if (FUNC_2(VAR_5))
   return FUNC_0(VAR_5);
 }

 return FUNC_4(VAR_5, VAR_3);
}
