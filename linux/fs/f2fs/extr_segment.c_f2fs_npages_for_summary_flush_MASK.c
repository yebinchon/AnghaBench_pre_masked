
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {scalar_t__ blocks_per_seg; TYPE_1__* ckpt; } ;
struct TYPE_4__ {int * cur_data_blkoff; } ;
struct TYPE_3__ {scalar_t__* alloc_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct f2fs_sb_info *VAR_7, bool VAR_8)
{
 int VAR_9 = 0;
 int VAR_10, VAR_11;

 for (VAR_10 = VAR_1; VAR_10 <= VAR_0; VAR_10++) {
  if (VAR_7->ckpt->alloc_type[VAR_10] == VAR_3)
   VAR_9 += VAR_7->blocks_per_seg;
  else {
   if (VAR_8)
    VAR_9 += FUNC_2(
     FUNC_0(VAR_7)->cur_data_blkoff[VAR_10]);
   else
    VAR_9 += FUNC_1(VAR_7, VAR_10);
  }
 }

 VAR_11 = (VAR_2 - 2 * VAR_6 -
   VAR_5) / VAR_4;
 if (VAR_9 <= VAR_11)
  return 1;
 else if ((VAR_9 - VAR_11) <=
  (VAR_2 - VAR_5) / VAR_4)
  return 2;
 return 3;
}
