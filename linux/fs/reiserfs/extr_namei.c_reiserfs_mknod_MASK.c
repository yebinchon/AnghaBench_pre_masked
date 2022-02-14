
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_security_handle {int dummy; } ;
struct inode {int i_sb; int i_mode; int * i_op; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_9 (struct reiserfs_transaction_handle*) ;
 struct inode* FUNC_10 (int ) ;
 int FUNC_11 (struct inode*,struct inode*,int ) ;
 int FUNC_12 (struct reiserfs_transaction_handle*,struct inode*,int ,int ,struct inode*,int) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int FUNC_14 (struct reiserfs_transaction_handle*,struct inode*,int ,int *,int ,struct dentry*,struct inode*,struct reiserfs_security_handle*) ;
 int FUNC_15 (struct inode*,struct inode*,TYPE_1__*,struct reiserfs_security_handle*) ;
 int VAR_2 ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct inode*) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_3, struct dentry *VAR_4, umode_t VAR_5,
     dev_t VAR_6)
{
 int VAR_7;
 struct inode *VAR_8;
 struct reiserfs_transaction_handle VAR_9;
 struct reiserfs_security_handle VAR_10;




 int VAR_11 =
     VAR_1 * 3 +
     2 * (FUNC_0(VAR_3->i_sb) +
   FUNC_1(VAR_3->i_sb));

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7)
  return VAR_7;

 if (!(VAR_8 = FUNC_10(VAR_3->i_sb))) {
  return -VAR_0;
 }
 VAR_7 = FUNC_11(VAR_8, VAR_3, VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_8);
  return VAR_7;
 }

 VAR_11 += FUNC_13(VAR_3);
 VAR_7 = FUNC_15(VAR_3, VAR_8, &VAR_4->d_name, &VAR_10);
 if (VAR_7 < 0) {
  FUNC_4(VAR_8);
  return VAR_7;
 }
 VAR_11 += VAR_7;
 FUNC_18(VAR_3->i_sb);

 VAR_7 = FUNC_8(&VAR_9, VAR_3->i_sb, VAR_11);
 if (VAR_7) {
  FUNC_4(VAR_8);
  goto out_failed;
 }

 VAR_7 =
     FUNC_14(&VAR_9, VAR_3, VAR_5, ((void*)0), 0 , VAR_4,
          VAR_8, &VAR_10);
 if (VAR_7) {
  goto out_failed;
 }

 VAR_8->i_op = &VAR_2;
 FUNC_6(VAR_8, VAR_8->i_mode, VAR_6);


 FUNC_17(&VAR_9, VAR_8);

 FUNC_16(VAR_8);
 FUNC_16(VAR_3);

 VAR_7 =
     FUNC_12(&VAR_9, VAR_3, VAR_4->d_name.name,
          VAR_4->d_name.len, VAR_8, 1 );
 if (VAR_7) {
  int VAR_12;
  FUNC_5(VAR_8);
  FUNC_17(&VAR_9, VAR_8);
  VAR_12 = FUNC_9(&VAR_9);
  if (VAR_12)
   VAR_7 = VAR_12;
  FUNC_20(VAR_8);
  FUNC_7(VAR_8);
  goto out_failed;
 }

 FUNC_2(VAR_4, VAR_8);
 VAR_7 = FUNC_9(&VAR_9);

out_failed:
 FUNC_19(VAR_3->i_sb);
 return VAR_7;
}
