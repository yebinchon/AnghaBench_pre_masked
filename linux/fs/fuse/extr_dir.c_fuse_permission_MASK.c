
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int i_mode; } ;
struct fuse_inode {int i_time; int inval_mask; } ;
struct fuse_conn {scalar_t__ default_permissions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct fuse_conn*) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct inode*,int) ;
 struct fuse_conn* FUNC_6 (struct inode*) ;
 struct fuse_inode* FUNC_7 (struct inode*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_8, int VAR_9)
{
 struct fuse_conn *VAR_10 = FUNC_6(VAR_8);
 bool VAR_11 = 0;
 int VAR_12 = 0;

 if (!FUNC_3(VAR_10))
  return -VAR_0;




 if (VAR_10->default_permissions ||
     ((VAR_9 & VAR_3) && FUNC_1(VAR_8->i_mode))) {
  struct fuse_inode *VAR_13 = FUNC_7(VAR_8);
  u32 VAR_14 = VAR_5 | VAR_6 | VAR_4;

  if (VAR_14 & FUNC_0(VAR_13->inval_mask) ||
      FUNC_9(VAR_13->i_time, FUNC_8())) {
   VAR_11 = 1;

   VAR_12 = FUNC_4(VAR_8, VAR_9);
   if (VAR_12)
    return VAR_12;
  }
 }

 if (VAR_10->default_permissions) {
  VAR_12 = FUNC_5(VAR_8, VAR_9);




  if (VAR_12 == -VAR_0 && !VAR_11) {
   VAR_12 = FUNC_4(VAR_8, VAR_9);
   if (!VAR_12)
    VAR_12 = FUNC_5(VAR_8, VAR_9);
  }





 } else if (VAR_9 & (VAR_1 | VAR_2)) {
  VAR_12 = FUNC_2(VAR_8, VAR_9);
 } else if ((VAR_9 & VAR_3) && FUNC_1(VAR_8->i_mode)) {
  if (!(VAR_8->i_mode & VAR_7)) {
   if (VAR_11)
    return -VAR_0;

   VAR_12 = FUNC_4(VAR_8, VAR_9);
   if (!VAR_12 && !(VAR_8->i_mode & VAR_7))
    return -VAR_0;
  }
 }
 return VAR_12;
}
