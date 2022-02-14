
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_sb; int i_gid; int i_uid; int i_mode; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct dentry*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,struct dentry*) ;
 int FUNC_13 (struct dentry*,struct inode*,struct dentry*,int) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(struct dentry *VAR_5, struct inode *VAR_6,
        struct dentry *VAR_7, bool VAR_8)
{
 struct inode *VAR_9 = FUNC_5(VAR_5);
 int VAR_10;

 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_12(VAR_6, VAR_7);
 if (VAR_10)
  return VAR_10;

 if (VAR_6->i_sb != VAR_9->i_sb)
  return -VAR_3;




 if (FUNC_0(VAR_9) || FUNC_1(VAR_9))
  return -VAR_2;


 if (!FUNC_2(VAR_9->i_mode))
  return -VAR_2;





 if (VAR_8) {
  if (!FUNC_14(FUNC_4(), VAR_9->i_uid) && !FUNC_3(VAR_0))
   return -VAR_2;
  if (!FUNC_8(VAR_9->i_gid) && !FUNC_3(VAR_0))
   return -VAR_2;
 }






 if (!VAR_8) {
  VAR_10 = FUNC_10(VAR_9, VAR_4);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_9(VAR_9);
 VAR_10 = FUNC_6(VAR_6);
 if (!VAR_10)
  VAR_10 = FUNC_13(VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_11(VAR_9);
 if (!VAR_10)
  FUNC_7(VAR_6, VAR_7);
 return VAR_10;
}
