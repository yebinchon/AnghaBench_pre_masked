
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_test_card {TYPE_1__* card; } ;
struct mmc_command {int arg; int flags; int opcode; } ;
struct TYPE_5__ {int caps; } ;
struct TYPE_4__ {int rca; TYPE_2__* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_command*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct mmc_command*) ;
 int FUNC_3 (TYPE_2__*,struct mmc_command*,int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct mmc_test_card *VAR_4)
{
 int VAR_5, VAR_6;
 struct mmc_command VAR_7 = {};

 VAR_6 = 0;
 do {
  FUNC_0(&VAR_7, 0, sizeof(struct mmc_command));

  VAR_7.opcode = VAR_3;
  VAR_7.arg = VAR_4->card->rca << 16;
  VAR_7.flags = VAR_2 | VAR_1;

  VAR_5 = FUNC_3(VAR_4->card->host, &VAR_7, 0);
  if (VAR_5)
   break;

  if (!VAR_6 && FUNC_2(&VAR_7)) {
   VAR_6 = 1;
   if (VAR_4->card->host->caps & VAR_0)
    FUNC_4("%s: Warning: Host did not wait for busy state to end.\n",
     FUNC_1(VAR_4->card->host));
  }
 } while (FUNC_2(&VAR_7));

 return VAR_5;
}
