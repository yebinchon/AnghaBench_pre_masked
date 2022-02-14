
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_test_card {TYPE_1__* card; } ;
struct mmc_command {int arg; int flags; int opcode; } ;
struct TYPE_2__ {int rca; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_command*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct mmc_command*,int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_test_card *VAR_4,
    struct mmc_command *VAR_5)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->opcode = VAR_3;
 if (!FUNC_1(VAR_4->card->host))
  VAR_5->arg = VAR_4->card->rca << 16;
 VAR_5->flags = VAR_2 | VAR_1 | VAR_0;

 return FUNC_2(VAR_4->card->host, VAR_5, 0);
}
