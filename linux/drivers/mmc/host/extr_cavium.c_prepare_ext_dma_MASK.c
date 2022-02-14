
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct mmc_request {TYPE_3__* data; TYPE_1__* cmd; } ;
struct mmc_host {TYPE_4__* card; } ;
struct cvm_mmc_slot {int bus_id; } ;
struct TYPE_8__ {int cmds; } ;
struct TYPE_10__ {TYPE_2__ scr; } ;
struct TYPE_9__ {int flags; int blocks; } ;
struct TYPE_7__ {int arg; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 struct cvm_mmc_slot* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (char*,char*,int,int) ;
 int FUNC_6 (int*,int ) ;

__attribute__((used)) static u64 FUNC_7(struct mmc_host *VAR_8, struct mmc_request *VAR_9)
{
 struct cvm_mmc_slot *VAR_10 = FUNC_4(VAR_8);
 u64 VAR_11;

 VAR_11 = FUNC_0(VAR_5, 1) |
    FUNC_0(VAR_4,
        FUNC_1(VAR_8->card) ? 1 : 0) |
    FUNC_0(VAR_3,
        (VAR_9->data->flags & VAR_6) ? 1 : 0) |
    FUNC_0(VAR_0, VAR_9->data->blocks) |
    FUNC_0(VAR_1, VAR_9->cmd->arg);
 FUNC_6(&VAR_11, VAR_10->bus_id);

 if (FUNC_2(VAR_8->card) || (FUNC_3(VAR_8->card) &&
     (VAR_8->card->scr.cmds & VAR_7)))
  VAR_11 |= FUNC_0(VAR_2, 1);

 FUNC_5("[%s] blocks: %u  multi: %d\n",
  (VAR_11 & VAR_3) ? "W" : "R",
   VAR_9->data->blocks, (VAR_11 & VAR_2) ? 1 : 0);
 return VAR_11;
}
