
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_flags; TYPE_1__* s_bdev; } ;
struct ext4_super_block {int s_free_inodes_count; void* s_kbytes_written; } ;
struct buffer_head {int dummy; } ;
struct TYPE_5__ {int s_sectors_written_start; int s_freeinodes_counter; int s_freeclusters_counter; scalar_t__ s_kbytes_written; struct buffer_head* s_sbh; struct ext4_super_block* s_es; } ;
struct TYPE_4__ {scalar_t__ bd_part; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (struct buffer_head*,int) ;
 scalar_t__ FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct ext4_super_block*,int ) ;
 int FUNC_12 (struct super_block*,int ,char*) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (struct ext4_super_block*,int ) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (scalar_t__,int ) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_20 (struct buffer_head*) ;
 scalar_t__ FUNC_21 (struct super_block*,int ) ;
 int FUNC_22 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_23(struct super_block *VAR_8, int VAR_9)
{
 struct ext4_super_block *VAR_10 = FUNC_2(VAR_8)->s_es;
 struct buffer_head *VAR_11 = FUNC_2(VAR_8)->s_sbh;
 int VAR_12 = 0;

 if (!VAR_11 || FUNC_4(VAR_8))
  return VAR_12;





 if (!FUNC_5(VAR_11))
  return VAR_12;
 if (!(VAR_8->s_flags & VAR_4))
  FUNC_14(VAR_10, VAR_6);
 if (VAR_8->s_bdev->bd_part)
  VAR_10->s_kbytes_written =
   FUNC_10(FUNC_2(VAR_8)->s_kbytes_written +
       ((FUNC_17(VAR_8->s_bdev->bd_part,
          VAR_7[VAR_5]) -
         FUNC_2(VAR_8)->s_sectors_written_start) >> 1));
 else
  VAR_10->s_kbytes_written =
   FUNC_10(FUNC_2(VAR_8)->s_kbytes_written);
 if (FUNC_18(&FUNC_2(VAR_8)->s_freeclusters_counter))
  FUNC_11(VAR_10,
   FUNC_1(FUNC_2(VAR_8), FUNC_19(
    &FUNC_2(VAR_8)->s_freeclusters_counter)));
 if (FUNC_18(&FUNC_2(VAR_8)->s_freeinodes_counter))
  VAR_10->s_free_inodes_count =
   FUNC_9(FUNC_19(
    &FUNC_2(VAR_8)->s_freeinodes_counter));
 FUNC_0(VAR_11, "marking dirty");
 FUNC_13(VAR_8);
 if (VAR_9)
  FUNC_15(VAR_11);
 if (FUNC_7(VAR_11) || !FUNC_6(VAR_11)) {
  FUNC_12(VAR_8, VAR_1, "previous I/O error to "
         "superblock detected");
  FUNC_8(VAR_11);
  FUNC_20(VAR_11);
 }
 FUNC_16(VAR_11);
 if (VAR_9) {
  FUNC_22(VAR_11);
  VAR_12 = FUNC_3(VAR_11,
   VAR_3 | (FUNC_21(VAR_8, VAR_0) ? VAR_2 : 0));
  if (FUNC_7(VAR_11)) {
   FUNC_12(VAR_8, VAR_1, "I/O error while writing "
          "superblock");
   FUNC_8(VAR_11);
   FUNC_20(VAR_11);
  }
 }
 return VAR_12;
}
