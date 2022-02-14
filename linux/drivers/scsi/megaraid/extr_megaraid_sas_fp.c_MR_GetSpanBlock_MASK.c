
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {struct MR_QUAD_ELEMENT* quad; int noElements; } ;
struct MR_SPAN_BLOCK_INFO {TYPE_1__ block_span_info; } ;
struct MR_QUAD_ELEMENT {int offsetInSpan; int diff; int logStart; int logEnd; } ;
struct MR_LD_RAID {scalar_t__ spanDepth; int stripeShift; } ;
struct MR_DRV_RAID_MAP_ALL {int dummy; } ;


 struct MR_LD_RAID* FUNC_0 (scalar_t__,struct MR_DRV_RAID_MAP_ALL*) ;
 struct MR_SPAN_BLOCK_INFO* FUNC_1 (scalar_t__,struct MR_DRV_RAID_MAP_ALL*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;
 scalar_t__ FUNC_5 (int,scalar_t__) ;

u32 FUNC_6(u32 VAR_1, u64 VAR_2, u64 *VAR_3,
      struct MR_DRV_RAID_MAP_ALL *VAR_4)
{
 struct MR_SPAN_BLOCK_INFO *VAR_5 = FUNC_1(VAR_1, VAR_4);
 struct MR_QUAD_ELEMENT *VAR_6;
 struct MR_LD_RAID *VAR_7 = FUNC_0(VAR_1, VAR_4);
 u32 VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_7->spanDepth; VAR_8++, VAR_5++) {

  for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_5->block_span_info.noElements); VAR_9++) {
   VAR_6 = &VAR_5->block_span_info.quad[VAR_9];

   if (FUNC_2(VAR_6->diff) == 0)
    return VAR_0;
   if (FUNC_3(VAR_6->logStart) <= VAR_2 && VAR_2 <=
    FUNC_3(VAR_6->logEnd) && (FUNC_5(VAR_2 - FUNC_3(VAR_6->logStart),
    FUNC_2(VAR_6->diff))) == 0) {
    if (VAR_3 != ((void*)0)) {
     u64 VAR_10, VAR_11;
     VAR_10 = FUNC_4((VAR_2-FUNC_3(VAR_6->logStart)), FUNC_2(VAR_6->diff));
     VAR_11 = VAR_10;

     VAR_10 = (VAR_10 + FUNC_3(VAR_6->offsetInSpan)) << VAR_7->stripeShift;
     *VAR_3 = VAR_10;
    }
    return VAR_8;
   }
  }
 }
 return VAR_0;
}
