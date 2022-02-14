
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int for_reclaim; int nr_to_write; int sync_mode; } ;
struct f2fs_sb_info {int node_change; int * wb_sync_req; int node_write; TYPE_1__* sb; } ;
struct blk_plug {int dummy; } ;
struct TYPE_2__ {int s_umount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct blk_plug*) ;
 int FUNC_5 (struct blk_plug*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (struct f2fs_sb_info*,int ) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 int FUNC_13 (struct f2fs_sb_info*,struct writeback_control*,int,int ) ;
 int FUNC_14 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_15 (struct f2fs_sb_info*,int ) ;
 int FUNC_16 (struct f2fs_sb_info*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct f2fs_sb_info *VAR_11)
{
 struct writeback_control VAR_12 = {
  .sync_mode = VAR_10,
  .nr_to_write = VAR_6,
  .for_reclaim = 0,
 };
 struct blk_plug VAR_13;
 int VAR_14 = 0, VAR_15 = 0;

 FUNC_5(&VAR_13);

retry_flush_quotas:
 FUNC_9(VAR_11);
 if (FUNC_0(VAR_11)) {
  int VAR_16;

  if (++VAR_15 > VAR_0) {
   FUNC_16(VAR_11, VAR_9);
   FUNC_16(VAR_11, VAR_8);
   goto retry_flush_dents;
  }
  FUNC_14(VAR_11);


  VAR_16 = FUNC_7(&VAR_11->sb->s_umount);
  FUNC_10(VAR_11->sb, -1);
  if (VAR_16)
   FUNC_17(&VAR_11->sb->s_umount);
  FUNC_6();
  goto retry_flush_quotas;
 }

retry_flush_dents:

 if (FUNC_15(VAR_11, VAR_2)) {
  FUNC_14(VAR_11);
  VAR_14 = FUNC_11(VAR_11, VAR_1);
  if (VAR_14)
   goto out;
  FUNC_6();
  goto retry_flush_quotas;
 }





 FUNC_8(&VAR_11->node_change);

 if (FUNC_15(VAR_11, VAR_3)) {
  FUNC_18(&VAR_11->node_change);
  FUNC_14(VAR_11);
  VAR_14 = FUNC_12(VAR_11);
  if (VAR_14)
   goto out;
  FUNC_6();
  goto retry_flush_quotas;
 }

retry_flush_nodes:
 FUNC_8(&VAR_11->node_write);

 if (FUNC_15(VAR_11, VAR_4)) {
  FUNC_18(&VAR_11->node_write);
  FUNC_3(&VAR_11->wb_sync_req[VAR_7]);
  VAR_14 = FUNC_13(VAR_11, &VAR_12, 0, VAR_5);
  FUNC_2(&VAR_11->wb_sync_req[VAR_7]);
  if (VAR_14) {
   FUNC_18(&VAR_11->node_change);
   FUNC_14(VAR_11);
   goto out;
  }
  FUNC_6();
  goto retry_flush_nodes;
 }





 FUNC_1(VAR_11);
 FUNC_18(&VAR_11->node_change);
out:
 FUNC_4(&VAR_13);
 return VAR_14;
}
