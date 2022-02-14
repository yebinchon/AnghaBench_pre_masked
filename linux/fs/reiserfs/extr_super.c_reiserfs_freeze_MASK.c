
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int dummy; } ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_2 (struct reiserfs_transaction_handle*) ;
 int FUNC_3 (struct reiserfs_transaction_handle*,int ) ;
 int FUNC_4 (struct reiserfs_transaction_handle*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*,int ,int) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_0)
{
 struct reiserfs_transaction_handle VAR_1;

 FUNC_5(VAR_0);

 FUNC_7(VAR_0);
 if (!FUNC_9(VAR_0)) {
  int VAR_2 = FUNC_1(&VAR_1, VAR_0, 1);
  if (VAR_2) {
   FUNC_4(&VAR_1);
  } else {
   FUNC_6(VAR_0, FUNC_0(VAR_0),
           1);
   FUNC_3(&VAR_1, FUNC_0(VAR_0));
   FUNC_4(&VAR_1);
   FUNC_2(&VAR_1);
  }
 }
 FUNC_8(VAR_0);
 return 0;
}
