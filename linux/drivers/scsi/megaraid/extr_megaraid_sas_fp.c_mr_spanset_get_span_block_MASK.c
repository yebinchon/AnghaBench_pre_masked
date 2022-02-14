
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct megasas_instance {struct fusion_context* ctrl_context; } ;
struct fusion_context {TYPE_5__* log_to_span; } ;
struct MR_QUAD_ELEMENT {int offsetInSpan; int diff; int logStart; int logEnd; } ;
struct MR_LD_RAID {size_t spanDepth; scalar_t__ stripeShift; } ;
struct TYPE_10__ {TYPE_3__* ldSpanMap; } ;
struct MR_DRV_RAID_MAP_ALL {TYPE_4__ raidMap; } ;
struct TYPE_12__ {scalar_t__ span_row_data_width; scalar_t__ data_row_end; } ;
struct TYPE_11__ {TYPE_6__* span_set; } ;
struct TYPE_9__ {TYPE_2__* spanBlock; } ;
struct TYPE_7__ {struct MR_QUAD_ELEMENT* quad; int noElements; } ;
struct TYPE_8__ {TYPE_1__ block_span_info; } ;
typedef TYPE_5__* PLD_SPAN_INFO ;
typedef TYPE_6__ LD_SPAN_SET ;


 size_t VAR_0 ;
 struct MR_LD_RAID* FUNC_0 (size_t,struct MR_DRV_RAID_MAP_ALL*) ;
 size_t VAR_1 ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,size_t) ;
 scalar_t__ FUNC_4 (scalar_t__,size_t) ;

u32 FUNC_5(struct megasas_instance *VAR_2,
  u32 VAR_3, u64 VAR_4, u64 *VAR_5, struct MR_DRV_RAID_MAP_ALL *VAR_6)
{
 struct fusion_context *VAR_7 = VAR_2->ctrl_context;
 struct MR_LD_RAID *VAR_8 = FUNC_0(VAR_3, VAR_6);
 LD_SPAN_SET *VAR_9;
 struct MR_QUAD_ELEMENT *VAR_10;
 u32 VAR_11, VAR_12;
 PLD_SPAN_INFO VAR_13 = VAR_7->log_to_span;

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_9 = &(VAR_13[VAR_3].span_set[VAR_12]);

  if (VAR_9->span_row_data_width == 0)
   break;

  if (VAR_4 > VAR_9->data_row_end)
   continue;

  for (VAR_11 = 0; VAR_11 < VAR_8->spanDepth; VAR_11++)
   if (FUNC_1(VAR_6->raidMap.ldSpanMap[VAR_3].spanBlock[VAR_11].
    block_span_info.noElements) >= VAR_12+1) {
    VAR_10 = &VAR_6->raidMap.ldSpanMap[VAR_3].
     spanBlock[VAR_11].
     block_span_info.quad[VAR_12];
    if (FUNC_1(VAR_10->diff) == 0)
     return VAR_1;
    if (FUNC_2(VAR_10->logStart) <= VAR_4 &&
     VAR_4 <= FUNC_2(VAR_10->logEnd) &&
     (FUNC_4(VAR_4 - FUNC_2(VAR_10->logStart),
      FUNC_1(VAR_10->diff))) == 0) {
     if (VAR_5 != ((void*)0)) {
      u64 VAR_14;
      VAR_14 = FUNC_3
          ((VAR_4 - FUNC_2(VAR_10->logStart)),
          FUNC_1(VAR_10->diff));
      VAR_14 = (VAR_14 + FUNC_2(VAR_10->offsetInSpan))
        << VAR_8->stripeShift;
      *VAR_5 = VAR_14;
     }
     return VAR_11;
    }
   }
 }
 return VAR_1;
}
