
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int t_trans_id; } ;
struct item_head {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_sb; } ;
struct cpu_key {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct item_head*,struct item_head*) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 struct buffer_head* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct item_head*,int *) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,struct buffer_head*) ;
 int FUNC_10 (struct cpu_key*,struct inode*,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,char*,struct cpu_key*) ;
 int FUNC_14 (int ,struct buffer_head*,int) ;
 int FUNC_15 (int ,struct buffer_head*) ;
 int FUNC_16 (int ,char*,char*,int ,scalar_t__,int) ;
 int FUNC_17 (int ,struct cpu_key*,int *) ;
 struct item_head* FUNC_18 (int *) ;
 int FUNC_19 (int *,struct inode*,int ) ;

void FUNC_20(struct reiserfs_transaction_handle *VAR_5,
        struct inode *VAR_6, loff_t VAR_7)
{
 struct cpu_key VAR_8;
 FUNC_1(VAR_4);
 struct buffer_head *VAR_9;
 int VAR_10;
 struct item_head *VAR_11, VAR_12;
 int VAR_13;

 FUNC_0(!VAR_5->t_trans_id);


 FUNC_10(&VAR_8, VAR_6, VAR_2, VAR_3, 3);

 for (;;) {
  int VAR_14;

  VAR_13 = FUNC_17(VAR_6->i_sb, &VAR_8, &VAR_4);
  if (VAR_13 == VAR_0) {
   FUNC_13(VAR_6->i_sb, "vs-13050",
           "i/o failure occurred trying to "
           "update %K stat data", &VAR_8);
   return;
  }
  if (VAR_13 == VAR_1) {
   VAR_14 = FUNC_3(&VAR_4);
   FUNC_11(&VAR_4);
   if (VAR_6->i_nlink == 0) {

    return;
   }
   FUNC_16(VAR_6->i_sb, "vs-13060",
      "stat data of object %k (nlink == %d) "
      "not found (pos %d)",
      FUNC_2(VAR_6), VAR_6->i_nlink,
      VAR_14);
   FUNC_12(&VAR_4);
   return;
  }






  VAR_9 = FUNC_7(&VAR_4);
  VAR_11 = FUNC_18(&VAR_4);
  FUNC_4(&VAR_12, VAR_11);
  VAR_10 = FUNC_6(VAR_6->i_sb);
  FUNC_14(VAR_6->i_sb, VAR_9, 1);


  if (FUNC_5(VAR_10, VAR_6->i_sb)
      && FUNC_8(&VAR_12, &VAR_4)) {
   FUNC_15(VAR_6->i_sb, VAR_9);
   continue;
  }
  break;
 }
 FUNC_19(&VAR_4, VAR_6, VAR_7);
 FUNC_9(VAR_5, VAR_9);
 FUNC_11(&VAR_4);
 return;
}
