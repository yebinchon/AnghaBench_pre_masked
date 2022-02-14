
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_test_card {struct mmc_card* card; } ;
struct mmc_request {TYPE_2__* sbc; TYPE_1__* cmd; } ;
struct mmc_card {int quirks; int host; } ;
struct TYPE_4__ {unsigned int arg; int flags; int opcode; } ;
struct TYPE_3__ {int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_card*) ;

__attribute__((used)) static void FUNC_3(struct mmc_test_card *VAR_4,
     struct mmc_request *VAR_5, unsigned int VAR_6)
{
 struct mmc_card *VAR_7 = VAR_4->card;

 if (!VAR_5->sbc || !FUNC_0(VAR_7->host) ||
     !FUNC_2(VAR_7) || !FUNC_1(VAR_5->cmd->opcode) ||
     (VAR_7->quirks & VAR_1)) {
  VAR_5->sbc = ((void*)0);
  return;
 }

 VAR_5->sbc->opcode = VAR_3;
 VAR_5->sbc->arg = VAR_6;
 VAR_5->sbc->flags = VAR_2 | VAR_0;
}
