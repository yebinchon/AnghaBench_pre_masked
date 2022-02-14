
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* resp; int error; } ;
struct TYPE_3__ {int error; } ;
struct mmc_blk_request {TYPE_2__ cmd; TYPE_1__ sbc; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct mmc_blk_request *VAR_1)
{
 return !VAR_1->sbc.error && !VAR_1->cmd.error &&
        !(VAR_1->cmd.resp[0] & VAR_0);
}
