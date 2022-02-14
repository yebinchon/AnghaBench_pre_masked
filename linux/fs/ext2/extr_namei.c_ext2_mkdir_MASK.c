
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {TYPE_1__* i_mapping; int i_sb; int * i_fop; int * i_op; } ;
struct dentry {int d_name; } ;
struct TYPE_2__ {int * a_ops; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct inode*,struct inode*) ;
 struct inode* FUNC_7 (struct inode*,int,int *) ;
 int VAR_5 ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct inode * VAR_6, struct dentry * VAR_7, umode_t VAR_8)
{
 struct inode * VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_6);
 if (VAR_10)
  return VAR_10;

 FUNC_9(VAR_6);

 VAR_9 = FUNC_7(VAR_6, VAR_1 | VAR_8, &VAR_7->d_name);
 VAR_10 = FUNC_1(VAR_9);
 if (FUNC_0(VAR_9))
  goto out_dir;

 VAR_9->i_op = &VAR_3;
 VAR_9->i_fop = &VAR_4;
 if (FUNC_10(VAR_9->i_sb, VAR_0))
  VAR_9->i_mapping->a_ops = &VAR_5;
 else
  VAR_9->i_mapping->a_ops = &VAR_2;

 FUNC_9(VAR_9);

 VAR_10 = FUNC_6(VAR_9, VAR_6);
 if (VAR_10)
  goto out_fail;

 VAR_10 = FUNC_5(VAR_7, VAR_9);
 if (VAR_10)
  goto out_fail;

 FUNC_2(VAR_7, VAR_9);
out:
 return VAR_10;

out_fail:
 FUNC_8(VAR_9);
 FUNC_8(VAR_9);
 FUNC_3(VAR_9);
out_dir:
 FUNC_8(VAR_6);
 goto out;
}
