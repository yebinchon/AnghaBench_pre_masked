
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {int transMethod; int* blockFetchTable; int msix_vectors; } ;
struct TYPE_2__ {size_t SGList; int ReplyQueue; } ;
struct CommandList {int busaddr; TYPE_1__ Header; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_1, struct CommandList *VAR_2,
     int VAR_3)
{
 if (FUNC_0(VAR_1->transMethod & VAR_0)) {
  VAR_2->busaddr |= 1 | (VAR_1->blockFetchTable[VAR_2->Header.SGList] << 1);
  if (FUNC_1(!VAR_1->msix_vectors))
   return;
  VAR_2->Header.ReplyQueue = VAR_3;
 }
}
