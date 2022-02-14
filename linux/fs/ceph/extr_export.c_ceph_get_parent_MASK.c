
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_nlink; int i_sb; } ;
struct dentry {int d_sb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (int ,struct dentry*,int ) ;
 struct inode* FUNC_5 (int ,int ) ;
 struct inode* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 struct inode* FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 struct dentry* FUNC_12 (struct inode*) ;
 struct dentry* FUNC_13 (struct inode*) ;
 int FUNC_14 (char*,struct dentry*,int ,long) ;
 int FUNC_15 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_16(struct dentry *VAR_3)
{
 struct inode *VAR_4 = FUNC_10(VAR_3);
 struct dentry *VAR_5;

 if (FUNC_8(VAR_4) != VAR_0) {
  struct inode* VAR_6;
  bool VAR_7 = 0;

  if (!FUNC_11(VAR_3)) {
   VAR_5 = FUNC_1(-VAR_2);
   goto out;
  }
  VAR_6 = FUNC_5(VAR_4->i_sb, FUNC_7(VAR_4));
  if (FUNC_2(VAR_6)) {
   VAR_5 = FUNC_0(VAR_6);
   goto out;
  }


  if (FUNC_8(VAR_4) != VAR_1) {
   struct inode *VAR_8 = FUNC_6(VAR_6);
   if (VAR_6->i_nlink == 0)
    VAR_7 = 1;
   FUNC_15(VAR_6);
   if (FUNC_2(VAR_8)) {
    VAR_5 = FUNC_0(VAR_8);
    goto out;
   }
   VAR_6 = VAR_8;
  }



  if (VAR_7)
   VAR_5 = FUNC_13(VAR_6);
  else
   VAR_5 = FUNC_12(VAR_6);
 } else {
  VAR_5 = FUNC_4(VAR_3->d_sb, VAR_3, 0);
 }
out:
 FUNC_14("get_parent %p ino %llx.%llx err=%ld\n",
      VAR_3, FUNC_9(VAR_4), (long)FUNC_3(VAR_5));
 return VAR_5;
}
