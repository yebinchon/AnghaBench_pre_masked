
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* resp; } ;
struct TYPE_5__ {int* resp; } ;
struct TYPE_7__ {TYPE_2__ stop; TYPE_1__ cmd; } ;
struct mmc_queue_req {TYPE_3__ brq; } ;
struct mmc_queue {TYPE_4__* card; } ;
struct TYPE_8__ {int host; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct mmc_queue *VAR_1,
     struct mmc_queue_req *VAR_2)
{
 return FUNC_0(VAR_1->card) && !FUNC_1(VAR_1->card->host) &&
        (VAR_2->brq.cmd.resp[0] & VAR_0 ||
  VAR_2->brq.stop.resp[0] & VAR_0);
}
