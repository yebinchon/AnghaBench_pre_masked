
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct megasas_instance {struct fusion_context* ctrl_context; } ;
struct megasas_cmd_fusion {TYPE_2__* io_request; } ;
struct fusion_context {struct LD_STREAM_DETECT** stream_detect_by_ld; } ;
struct STREAM_DETECT {scalar_t__ next_seq_lba; scalar_t__ is_read; } ;
struct LD_STREAM_DETECT {size_t mru_bit_map; struct STREAM_DETECT* stream_track; } ;
struct IO_REQUEST_INFO {size_t ldTgtId; scalar_t__ ldStartBlock; scalar_t__ isRead; scalar_t__ numBlocks; } ;
struct TYPE_3__ {int raid_context_g35; } ;
struct TYPE_4__ {TYPE_1__ RaidContext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_1(struct megasas_instance *VAR_4,
      struct megasas_cmd_fusion *VAR_5,
      struct IO_REQUEST_INFO *VAR_6)
{
 struct fusion_context *VAR_7 = VAR_4->ctrl_context;
 u32 VAR_8 = VAR_6->ldTgtId;
 struct LD_STREAM_DETECT *VAR_9
  = VAR_7->stream_detect_by_ld[VAR_8];
 u32 *VAR_10 = &VAR_9->mru_bit_map, VAR_11;
 u32 VAR_12, VAR_13;
 u32 VAR_14, VAR_15;
 int VAR_16;
 bool VAR_17 = 0;
 struct STREAM_DETECT *VAR_18;

 for (VAR_16 = 0; VAR_16 < VAR_1; ++VAR_16) {
  VAR_11 = (*VAR_10 >>
   (VAR_16 * VAR_0)) &
   VAR_2;
  VAR_18 = &VAR_9->stream_track[VAR_11];




  if ((VAR_18->next_seq_lba) &&
      (VAR_6->ldStartBlock >= VAR_18->next_seq_lba) &&
      (VAR_6->ldStartBlock <= (VAR_18->next_seq_lba + 32)) &&
      (VAR_18->is_read == VAR_6->isRead)) {

   if ((VAR_6->ldStartBlock != VAR_18->next_seq_lba) &&
       ((!VAR_6->isRead) || (!VAR_17)))




    continue;

   FUNC_0(VAR_5->io_request->RaidContext.raid_context_g35);
   VAR_18->next_seq_lba =
   VAR_6->ldStartBlock + VAR_6->numBlocks;



   VAR_15 =
    (1 << VAR_16 * VAR_0) - 1;
   VAR_12 = ((*VAR_10 & VAR_15)
      << VAR_0);
   VAR_14 =
    VAR_2 << VAR_16 * VAR_0;
   VAR_13 =
    *VAR_10 & ~(VAR_15 |
    VAR_14);
   *VAR_10 =
    VAR_13 | VAR_12 | VAR_11;
   return;
  }
 }




 VAR_11 = (*VAR_10 >>
  ((VAR_1 - 1) * VAR_0)) &
  VAR_2;
 VAR_18 = &VAR_9->stream_track[VAR_11];
 VAR_18->is_read = VAR_6->isRead;
 VAR_18->next_seq_lba = VAR_6->ldStartBlock + VAR_6->numBlocks;
 *VAR_10 = (((*VAR_10 & VAR_3) << 4) | VAR_11);
 return;
}
