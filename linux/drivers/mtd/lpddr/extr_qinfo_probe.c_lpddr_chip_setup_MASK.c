
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qinfo_chip {int dummy; } ;
struct map_info {scalar_t__ pfow_base; } ;
struct lpddr_private {TYPE_1__* qinfo; void* DevId; void* ManufactId; } ;
struct TYPE_2__ {void* BlockEraseTime; void* ProgBufferTime; void* SingleWordProgTime; void* SuspEraseSupp; void* UniformBlockSizeShift; void* HWPartsNum; void* BufSizeShift; void* TotalBlocksNum; void* DevSizeShift; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 void* FUNC_2 (struct map_info*,char*) ;
 int FUNC_3 (struct map_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct map_info *VAR_3, struct lpddr_private *VAR_4)
{

 VAR_4->qinfo = FUNC_1(sizeof(struct qinfo_chip), VAR_0);
 if (!VAR_4->qinfo)
  return 0;


 VAR_4->ManufactId = FUNC_0(FUNC_3(VAR_3, VAR_3->pfow_base + VAR_2));

 VAR_4->DevId = FUNC_0(FUNC_3(VAR_3, VAR_3->pfow_base + VAR_1));

 VAR_4->qinfo->DevSizeShift = FUNC_2(VAR_3, "DevSizeShift");
 VAR_4->qinfo->TotalBlocksNum = FUNC_2(VAR_3, "TotalBlocksNum");
 VAR_4->qinfo->BufSizeShift = FUNC_2(VAR_3, "BufSizeShift");
 VAR_4->qinfo->HWPartsNum = FUNC_2(VAR_3, "HWPartsNum");
 VAR_4->qinfo->UniformBlockSizeShift =
    FUNC_2(VAR_3, "UniformBlockSizeShift");
 VAR_4->qinfo->SuspEraseSupp = FUNC_2(VAR_3, "SuspEraseSupp");
 VAR_4->qinfo->SingleWordProgTime =
    FUNC_2(VAR_3, "SingleWordProgTime");
 VAR_4->qinfo->ProgBufferTime = FUNC_2(VAR_3, "ProgBufferTime");
 VAR_4->qinfo->BlockEraseTime = FUNC_2(VAR_3, "BlockEraseTime");
 return 1;
}
