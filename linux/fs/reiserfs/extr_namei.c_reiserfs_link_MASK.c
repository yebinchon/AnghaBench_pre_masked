
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_sb; int i_ctime; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_9 (struct reiserfs_transaction_handle*) ;
 int FUNC_10 (struct reiserfs_transaction_handle*,struct inode*,int ,int ,struct inode*,int) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct dentry *VAR_3, struct inode *VAR_4,
    struct dentry *VAR_5)
{
 int VAR_6;
 struct inode *VAR_7 = FUNC_2(VAR_3);
 struct reiserfs_transaction_handle VAR_8;




 int VAR_9 =
     VAR_1 * 3 +
     2 * FUNC_0(VAR_4->i_sb);

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_13(VAR_4->i_sb);
 if (VAR_7->i_nlink >= VAR_2) {

  FUNC_14(VAR_4->i_sb);
  return -VAR_0;
 }


 FUNC_7(VAR_7);

 VAR_6 = FUNC_8(&VAR_8, VAR_4->i_sb, VAR_9);
 if (VAR_6) {
  FUNC_5(VAR_7);
  FUNC_14(VAR_4->i_sb);
  return VAR_6;
 }


 VAR_6 =
     FUNC_10(&VAR_8, VAR_4, VAR_5->d_name.name,
          VAR_5->d_name.len, VAR_7, 1 );

 FUNC_11(VAR_7);
 FUNC_11(VAR_4);

 if (VAR_6) {
  int VAR_10;
  FUNC_5(VAR_7);
  VAR_10 = FUNC_9(&VAR_8);
  FUNC_14(VAR_4->i_sb);
  return VAR_10 ? VAR_10 : VAR_6;
 }

 VAR_7->i_ctime = FUNC_1(VAR_7);
 FUNC_12(&VAR_8, VAR_7);

 FUNC_6(VAR_7);
 FUNC_3(VAR_5, VAR_7);
 VAR_6 = FUNC_9(&VAR_8);
 FUNC_14(VAR_4->i_sb);
 return VAR_6;
}
