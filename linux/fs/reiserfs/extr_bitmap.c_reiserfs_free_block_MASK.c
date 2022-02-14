
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {struct super_block* t_super; int t_trans_id; } ;
struct inode {int dummy; } ;
typedef scalar_t__ b_blocknr_t ;
struct TYPE_2__ {int s_rs; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct reiserfs_transaction_handle*,struct inode*,scalar_t__,int) ;
 int FUNC_4 (struct super_block*,scalar_t__,int) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,struct super_block*,scalar_t__) ;
 int FUNC_6 (struct super_block*,char*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(struct reiserfs_transaction_handle *VAR_0,
    struct inode *VAR_1, b_blocknr_t VAR_2,
    int VAR_3)
{
 struct super_block *VAR_4 = VAR_0->t_super;

 FUNC_0(!VAR_0->t_trans_id);
 FUNC_2(!VAR_4, "vs-4061: trying to free block on nonexistent device");
 if (!FUNC_4(VAR_4, VAR_2, 1))
  return;

 if (VAR_2 > FUNC_7(FUNC_1(VAR_4)->s_rs)) {
  FUNC_6(VAR_0->t_super, "bitmap-4072",
          "Trying to free block outside file system "
          "boundaries (%lu > %lu)",
          VAR_2, FUNC_7(FUNC_1(VAR_4)->s_rs));
  return;
 }

 FUNC_5(VAR_0, VAR_4, VAR_2);
 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
}
