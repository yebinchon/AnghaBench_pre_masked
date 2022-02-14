
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; scalar_t__ for_sync; } ;
struct inode {int i_sb; } ;
struct ext4_iloc {TYPE_1__* bh; } ;
struct TYPE_12__ {int i_sync_tid; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {scalar_t__ s_journal; } ;
struct TYPE_9__ {int b_blocknr; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,char*) ;
 TYPE_8__* FUNC_1 (struct inode*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct inode*,struct ext4_iloc*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int,char*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (int ) ;

int FUNC_16(struct inode *VAR_4, struct writeback_control *VAR_5)
{
 int VAR_6;

 if (FUNC_3(VAR_3->flags & VAR_1) ||
     FUNC_13(VAR_4->i_sb))
  return 0;

 if (FUNC_15(FUNC_9(FUNC_2(VAR_4->i_sb))))
  return -VAR_0;

 if (FUNC_2(VAR_4->i_sb)->s_journal) {
  if (FUNC_10()) {
   FUNC_12(1, "called recursively, non-PF_MEMALLOC!\n");
   FUNC_8();
   return -VAR_0;
  }






  if (VAR_5->sync_mode != VAR_2 || VAR_5->for_sync)
   return 0;

  VAR_6 = FUNC_11(FUNC_2(VAR_4->i_sb)->s_journal,
      FUNC_1(VAR_4)->i_sync_tid);
 } else {
  struct ext4_iloc VAR_7;

  VAR_6 = FUNC_4(VAR_4, &VAR_7, 0);
  if (VAR_6)
   return VAR_6;




  if (VAR_5->sync_mode == VAR_2 && !VAR_5->for_sync)
   FUNC_14(VAR_7.bh);
  if (FUNC_6(VAR_7.bh) && !FUNC_7(VAR_7.bh)) {
   FUNC_0(VAR_4, VAR_7.bh->b_blocknr,
      "IO error syncing inode");
   VAR_6 = -VAR_0;
  }
  FUNC_5(VAR_7.bh);
 }
 return VAR_6;
}
