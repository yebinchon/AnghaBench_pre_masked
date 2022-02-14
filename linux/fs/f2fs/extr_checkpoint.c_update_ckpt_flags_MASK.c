
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {scalar_t__ blocks_per_seg; int cp_lock; TYPE_1__* im; } ;
struct f2fs_checkpoint {int cp_pack_total_block_count; } ;
struct cp_control {int reason; } ;
struct TYPE_4__ {scalar_t__ nat_bits_blocks; } ;
struct TYPE_3__ {unsigned long ino_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct f2fs_checkpoint* FUNC_0 (struct f2fs_sb_info*) ;
 TYPE_2__* FUNC_1 (struct f2fs_sb_info*) ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct f2fs_checkpoint*,int ) ;
 int FUNC_3 (struct f2fs_checkpoint*,int ) ;
 int FUNC_4 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct f2fs_sb_info *VAR_20, struct cp_control *VAR_21)
{
 unsigned long VAR_22 = VAR_20->im[VAR_13].ino_num;
 struct f2fs_checkpoint *VAR_23 = FUNC_0(VAR_20);
 unsigned long VAR_24;

 FUNC_7(&VAR_20->cp_lock, VAR_24);

 if ((VAR_21->reason & VAR_11) &&
   FUNC_6(VAR_23->cp_pack_total_block_count) >
   VAR_20->blocks_per_seg - FUNC_1(VAR_20)->nat_bits_blocks)
  FUNC_4(VAR_20, 0);

 if (VAR_21->reason & VAR_9)
  FUNC_3(VAR_23, VAR_10);
 else
  FUNC_2(VAR_23, VAR_10);

 if (VAR_21->reason & VAR_11)
  FUNC_3(VAR_23, VAR_12);
 else
  FUNC_2(VAR_23, VAR_12);

 if (VAR_21->reason & VAR_3)
  FUNC_3(VAR_23, VAR_4);
 else
  FUNC_2(VAR_23, VAR_4);

 if (VAR_22)
  FUNC_3(VAR_23, VAR_7);
 else
  FUNC_2(VAR_23, VAR_7);

 if (FUNC_5(VAR_20, VAR_17) ||
  FUNC_5(VAR_20, VAR_16))
  FUNC_3(VAR_23, VAR_5);

 if (FUNC_5(VAR_20, VAR_14))
  FUNC_3(VAR_23, VAR_1);
 else
  FUNC_2(VAR_23, VAR_1);

 if (FUNC_5(VAR_20, VAR_15))
  FUNC_3(VAR_23, VAR_2);
 else
  FUNC_2(VAR_23, VAR_2);

 if (FUNC_5(VAR_20, VAR_19))
  FUNC_3(VAR_23, VAR_8);
 else
  FUNC_2(VAR_23, VAR_8);

 if (FUNC_5(VAR_20, VAR_18))
  FUNC_3(VAR_23, VAR_8);


 FUNC_3(VAR_23, VAR_0);
 FUNC_2(VAR_23, VAR_6);

 FUNC_8(&VAR_20->cp_lock, VAR_24);
}
