
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {void* UncorrectableBlocks; void* CorrectedBlocks; } ;
struct fc_fec_rdp_desc {void* length; TYPE_1__ info; void* tag; } ;
struct TYPE_6__ {int fecCorrBlkCount; int fecUncorrBlkCount; } ;
typedef TYPE_2__ READ_LNK_VAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 void* FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_2(struct fc_fec_rdp_desc *VAR_2, READ_LNK_VAR *VAR_3)
{
 if (FUNC_0(VAR_1, VAR_3) == 0)
  return 0;
 VAR_2->tag = FUNC_1(VAR_0);

 VAR_2->info.CorrectedBlocks =
  FUNC_1(VAR_3->fecCorrBlkCount);
 VAR_2->info.UncorrectableBlocks =
  FUNC_1(VAR_3->fecUncorrBlkCount);

 VAR_2->length = FUNC_1(sizeof(VAR_2->info));

 return sizeof(struct fc_fec_rdp_desc);
}
