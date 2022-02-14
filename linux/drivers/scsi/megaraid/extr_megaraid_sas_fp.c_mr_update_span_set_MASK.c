
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct MR_QUAD_ELEMENT {int diff; int logStart; int logEnd; } ;
struct MR_LD_RAID {size_t spanDepth; int stripeShift; } ;
struct TYPE_12__ {TYPE_3__* ldSpanMap; } ;
struct MR_DRV_RAID_MAP_ALL {TYPE_4__ raidMap; } ;
struct TYPE_15__ {scalar_t__ spanRowDataSize; } ;
struct TYPE_14__ {int diff; int* strip_offset; int span_row_data_width; int log_start_lba; int log_end_lba; int span_row_start; int span_row_end; int data_strip_start; int data_strip_end; int data_row_start; int data_row_end; } ;
struct TYPE_13__ {TYPE_6__* span_set; } ;
struct TYPE_11__ {TYPE_2__* spanBlock; } ;
struct TYPE_9__ {int noElements; struct MR_QUAD_ELEMENT* quad; } ;
struct TYPE_10__ {TYPE_1__ block_span_info; } ;
typedef TYPE_5__* PLD_SPAN_INFO ;
typedef TYPE_6__ LD_SPAN_SET ;


 int VAR_0 ;
 int VAR_1 ;
 struct MR_LD_RAID* FUNC_0 (int,struct MR_DRV_RAID_MAP_ALL*) ;
 TYPE_8__* FUNC_1 (int,size_t,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_2 (int,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int) ;

void FUNC_6(struct MR_DRV_RAID_MAP_ALL *VAR_2,
 PLD_SPAN_INFO VAR_3)
{
 u8 VAR_4, VAR_5;
 u32 VAR_6, VAR_7;
 u64 VAR_8;
 struct MR_LD_RAID *VAR_9;
 LD_SPAN_SET *VAR_10, *VAR_11;
 struct MR_QUAD_ELEMENT *VAR_12;
 int VAR_13;
 u16 VAR_14;


 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_14 = FUNC_2(VAR_13, VAR_2);
  if (VAR_14 >= (VAR_0 - 1))
   continue;
  VAR_9 = FUNC_0(VAR_14, VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   for (VAR_4 = 0; VAR_4 < VAR_9->spanDepth; VAR_4++) {
    if (FUNC_3(VAR_2->raidMap.ldSpanMap[VAR_14].spanBlock[VAR_4].
     block_span_info.noElements) <
     VAR_6 + 1)
     continue;
    VAR_10 = &(VAR_3[VAR_14].span_set[VAR_6]);
    VAR_12 = &VAR_2->raidMap.ldSpanMap[VAR_14].
     spanBlock[VAR_4].block_span_info.
     quad[VAR_6];

    VAR_10->diff = FUNC_3(VAR_12->diff);

    for (VAR_5 = 0, VAR_7 = 0;
     VAR_5 < VAR_9->spanDepth; VAR_5++) {
     if (FUNC_3(VAR_2->raidMap.ldSpanMap[VAR_14].
      spanBlock[VAR_5].
      block_span_info.
      noElements) >= VAR_6 + 1) {
      VAR_10->strip_offset[VAR_5] =
       VAR_7;
      VAR_7 +=
       FUNC_1
       (VAR_14, VAR_5, VAR_2)->spanRowDataSize;
     }
    }

    VAR_10->span_row_data_width = VAR_7;
    VAR_8 = FUNC_5(((FUNC_4(VAR_12->logEnd) -
     FUNC_4(VAR_12->logStart)) + FUNC_3(VAR_12->diff)),
     FUNC_3(VAR_12->diff));

    if (VAR_6 == 0) {
     VAR_10->log_start_lba = 0;
     VAR_10->log_end_lba =
      ((VAR_8 << VAR_9->stripeShift)
      * VAR_7) - 1;

     VAR_10->span_row_start = 0;
     VAR_10->span_row_end = VAR_8 - 1;

     VAR_10->data_strip_start = 0;
     VAR_10->data_strip_end =
      (VAR_8 * VAR_7) - 1;

     VAR_10->data_row_start = 0;
     VAR_10->data_row_end =
      (VAR_8 * FUNC_3(VAR_12->diff)) - 1;
    } else {
     VAR_11 = &(VAR_3[VAR_14].
       span_set[VAR_6 - 1]);
     VAR_10->log_start_lba =
      VAR_11->log_end_lba + 1;
     VAR_10->log_end_lba =
      VAR_10->log_start_lba +
      ((VAR_8 << VAR_9->stripeShift)
      * VAR_7) - 1;

     VAR_10->span_row_start =
      VAR_11->span_row_end + 1;
     VAR_10->span_row_end =
     VAR_10->span_row_start + VAR_8 - 1;

     VAR_10->data_strip_start =
     VAR_11->data_strip_end + 1;
     VAR_10->data_strip_end =
      VAR_10->data_strip_start +
      (VAR_8 * VAR_7) - 1;

     VAR_10->data_row_start =
      VAR_11->data_row_end + 1;
     VAR_10->data_row_end =
      VAR_10->data_row_start +
      (VAR_8 * FUNC_3(VAR_12->diff)) - 1;
    }
    break;
  }
  if (VAR_4 == VAR_9->spanDepth)
   break;
     }
 }
}
