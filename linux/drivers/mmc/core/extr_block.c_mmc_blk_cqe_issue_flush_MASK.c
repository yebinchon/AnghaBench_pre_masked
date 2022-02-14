
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct mmc_request {TYPE_2__* cmd; } ;
struct mmc_queue_req {int dummy; } ;
struct mmc_queue {TYPE_1__* card; } ;
struct TYPE_4__ {int arg; int flags; int opcode; } ;
struct TYPE_3__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mmc_request* FUNC_0 (struct mmc_queue_req*,struct request*) ;
 int FUNC_1 (int ,struct mmc_request*) ;
 struct mmc_queue_req* FUNC_2 (struct request*) ;

__attribute__((used)) static int FUNC_3(struct mmc_queue *VAR_6, struct request *VAR_7)
{
 struct mmc_queue_req *VAR_8 = FUNC_2(VAR_7);
 struct mmc_request *VAR_9 = FUNC_0(VAR_8, VAR_7);

 VAR_9->cmd->opcode = VAR_4;
 VAR_9->cmd->arg = (VAR_5 << 24) |
   (VAR_1 << 16) |
   (1 << 8) |
   VAR_0;
 VAR_9->cmd->flags = VAR_2 | VAR_3;

 return FUNC_1(VAR_6->card->host, VAR_9);
}
