
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snic {unsigned int wq_count; int shost; TYPE_2__* wq; } ;
struct TYPE_4__ {TYPE_1__* ctrl; } ;
struct TYPE_3__ {int error_status; } ;


 int FUNC_0 (int ,char*,unsigned int,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

void
FUNC_2(struct snic *VAR_0)
{
 unsigned int VAR_1;
 u32 VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->wq_count; VAR_1++) {
  VAR_2 = FUNC_1(&VAR_0->wq[VAR_1].ctrl->error_status);
  if (VAR_2)
   FUNC_0(VAR_0->shost,
          "WQ[%d] error status %d\n",
          VAR_1,
          VAR_2);
 }
}
