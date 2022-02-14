
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_accel1_cmd {int ReplyQueue; } ;
struct ctlr_info {int* ioaccel1_blockFetchTable; struct io_accel1_cmd* ioaccel_cmd_pool; } ;
struct TYPE_2__ {size_t SGList; } ;
struct CommandList {size_t cmdindex; int busaddr; TYPE_1__ Header; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ctlr_info *VAR_1,
      struct CommandList *VAR_2,
      int VAR_3)
{
 struct io_accel1_cmd *VAR_4 = &VAR_1->ioaccel_cmd_pool[VAR_2->cmdindex];





 VAR_4->ReplyQueue = VAR_3;






 VAR_2->busaddr |= 1 | (VAR_1->ioaccel1_blockFetchTable[VAR_2->Header.SGList] << 1) |
     VAR_0;
}
