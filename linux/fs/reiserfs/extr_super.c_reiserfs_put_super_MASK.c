
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int * s_fs_info; } ;
struct reiserfs_transaction_handle {scalar_t__ t_trans_id; } ;
struct TYPE_2__ {scalar_t__ reserved_blocks; int commit_wq; int lock; int s_mount_state; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,int ) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,struct super_block*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct super_block*) ;
 int FUNC_12 (struct super_block*,int ,int) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (struct super_block*,char*,char*,scalar_t__) ;
 int FUNC_15 (struct super_block*) ;
 int FUNC_16 (struct super_block*) ;
 int FUNC_17 (struct super_block*) ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static void FUNC_19(struct super_block *VAR_0)
{
 struct reiserfs_transaction_handle VAR_1;
 VAR_1.t_trans_id = 0;

 FUNC_13(VAR_0);

 FUNC_15(VAR_0);





 if (!FUNC_17(VAR_0)) {
  if (!FUNC_5(&VAR_1, VAR_0, 10)) {
   FUNC_12(VAR_0, FUNC_1(VAR_0),
           1);
   FUNC_18(FUNC_2(VAR_0),
         FUNC_0(VAR_0)->s_mount_state);
   FUNC_6(&VAR_1, FUNC_1(VAR_0));
  }
 }





 FUNC_7(&VAR_1, VAR_0);

 FUNC_11(VAR_0);

 FUNC_3(FUNC_1(VAR_0));

 FUNC_10(VAR_0);

 if (FUNC_0(VAR_0)->reserved_blocks != 0) {
  FUNC_14(VAR_0, "green-2005", "reserved blocks left %d",
     FUNC_0(VAR_0)->reserved_blocks);
 }

 FUNC_16(VAR_0);
 FUNC_9(&FUNC_0(VAR_0)->lock);
 FUNC_4(FUNC_0(VAR_0)->commit_wq);
 FUNC_8(VAR_0->s_fs_info);
 VAR_0->s_fs_info = ((void*)0);
}
