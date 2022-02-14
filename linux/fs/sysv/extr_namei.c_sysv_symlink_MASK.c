
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,char const*,int) ;
 int FUNC_7 (char const*) ;
 struct inode* FUNC_8 (struct inode*,int) ;
 int FUNC_9 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_10(struct inode * VAR_2, struct dentry * VAR_3,
 const char * VAR_4)
{
 int VAR_5 = -VAR_0;
 int VAR_6 = FUNC_7(VAR_4)+1;
 struct inode * VAR_7;

 if (VAR_6 > VAR_2->i_sb->s_blocksize)
  goto out;

 VAR_7 = FUNC_8(VAR_2, VAR_1|0777);
 VAR_5 = FUNC_1(VAR_7);
 if (FUNC_0(VAR_7))
  goto out;

 FUNC_9(VAR_7, 0);
 VAR_5 = FUNC_6(VAR_7, VAR_4, VAR_6);
 if (VAR_5)
  goto out_fail;

 FUNC_5(VAR_7);
 VAR_5 = FUNC_2(VAR_3, VAR_7);
out:
 return VAR_5;

out_fail:
 FUNC_3(VAR_7);
 FUNC_4(VAR_7);
 goto out;
}
