
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {int tv_sec; } ;
struct inode {int i_mode; int i_ctime; int i_atime; TYPE_1__ i_mtime; struct super_block* i_sb; } ;
struct iattr {unsigned int ia_valid; int ia_ctime; int ia_atime; TYPE_1__ ia_mtime; int ia_size; int ia_gid; int ia_uid; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {int attr; } ;
struct TYPE_5__ {int s_gid; int s_uid; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct super_block*,struct inode*) ;
 int FUNC_3 (struct super_block*,struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*,struct iattr*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (int ,int ) ;

int
FUNC_11(struct dentry *VAR_8, struct iattr *VAR_9)
{
 struct inode *VAR_10 = FUNC_5(VAR_8);
 struct super_block *VAR_11 = VAR_10->i_sb;
 unsigned int VAR_12 = VAR_9->ia_valid;
 int VAR_13;

 VAR_13 = FUNC_8(VAR_8, VAR_9);





 if ((VAR_12 & VAR_6 && !FUNC_10(VAR_9->ia_uid, FUNC_1(VAR_11)->s_uid)) ||
     (VAR_12 & VAR_2 && !FUNC_6(VAR_9->ia_gid, FUNC_1(VAR_11)->s_gid)))
  VAR_13 = -VAR_7;

 if (VAR_13)
  goto out;


 if (VAR_12 & VAR_5)
  FUNC_9(VAR_10, VAR_9->ia_size);

 if (VAR_12 & VAR_4) {
  VAR_10->i_mtime = VAR_9->ia_mtime;
  FUNC_4(VAR_10, VAR_9->ia_mtime.tv_sec);
 }




 if (VAR_12 & VAR_0)
  VAR_10->i_atime = VAR_9->ia_atime;
 if (VAR_12 & VAR_1)
  VAR_10->i_ctime = VAR_9->ia_ctime;
 if (VAR_12 & VAR_3) {
  FUNC_0(VAR_10)->attr = FUNC_3(VAR_11, VAR_10);
  VAR_10->i_mode = FUNC_2(VAR_11, VAR_10);
 }





 if (VAR_12 & (VAR_5 | VAR_4 | VAR_3))
  FUNC_7(VAR_10);
out:
 return VAR_13;
}
