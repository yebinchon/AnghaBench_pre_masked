
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int rq_flags; } ;
struct TYPE_3__ {unsigned int bytes_xfered; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct mmc_queue_req {int retries; TYPE_2__ brq; } ;
struct mmc_queue {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct request*,int ) ;
 int FUNC_2 (struct request*,int) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*,int ,unsigned int) ;
 scalar_t__ FUNC_5 (int ) ;
 struct mmc_queue_req* FUNC_6 (struct request*) ;

__attribute__((used)) static void FUNC_7(struct mmc_queue *VAR_4, struct request *VAR_5)
{
 struct mmc_queue_req *VAR_6 = FUNC_6(VAR_5);
 unsigned int VAR_7 = VAR_6->brq.data.bytes_xfered;

 if (VAR_7) {
  if (FUNC_4(VAR_5, VAR_1, VAR_7))
   FUNC_2(VAR_5, 1);
  else
   FUNC_0(VAR_5, VAR_1);
 } else if (!FUNC_3(VAR_5)) {
  FUNC_0(VAR_5, VAR_0);
 } else if (VAR_6->retries++ < VAR_2) {
  FUNC_2(VAR_5, 1);
 } else {
  if (FUNC_5(VAR_4->card))
   VAR_5->rq_flags |= VAR_3;
  FUNC_1(VAR_5, VAR_0);
 }
}
