
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_disc {int mutex; scalar_t__ req_cnt; } ;
struct snic {int shost; struct snic_disc disc; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct snic *VAR_0)
{
 struct snic_disc *VAR_1 = &VAR_0->disc;

 FUNC_1(&VAR_1->mutex);
 if (VAR_1->req_cnt) {
  VAR_1->req_cnt = 0;
  FUNC_0(VAR_0->shost, "Terminating Discovery.\n");
 }
 FUNC_2(&VAR_1->mutex);
}
