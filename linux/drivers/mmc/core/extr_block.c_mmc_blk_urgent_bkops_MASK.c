
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_queue_req {int dummy; } ;
struct mmc_queue {int card; } ;


 scalar_t__ FUNC_0 (struct mmc_queue*,struct mmc_queue_req*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mmc_queue *VAR_0,
     struct mmc_queue_req *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1))
  FUNC_1(VAR_0->card);
}
