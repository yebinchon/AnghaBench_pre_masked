
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct inode*,struct inode*) ;
 struct inode* FUNC_8 (struct inode*,int) ;

__attribute__((used)) static int FUNC_9(struct inode * VAR_4, struct dentry * VAR_5, umode_t VAR_6)
{
 struct inode * VAR_7;
 int VAR_8;

 FUNC_5(VAR_4);

 VAR_7 = FUNC_8(VAR_4, VAR_0|VAR_6);
 VAR_8 = FUNC_1(VAR_7);
 if (FUNC_0(VAR_7))
  goto out_dir;

 VAR_7->i_op = &VAR_2;
 VAR_7->i_fop = &VAR_3;
 VAR_7->i_mapping->a_ops = &VAR_1;

 FUNC_5(VAR_7);

 VAR_8 = FUNC_7(VAR_7, VAR_4);
 if (VAR_8)
  goto out_fail;

 VAR_8 = FUNC_6(VAR_5, VAR_7);
 if (VAR_8)
  goto out_fail;

 FUNC_2(VAR_5, VAR_7);
 return 0;

out_fail:
 FUNC_4(VAR_7);
 FUNC_4(VAR_7);
 FUNC_3(VAR_7);
out_dir:
 FUNC_4(VAR_4);
 return VAR_8;
}
