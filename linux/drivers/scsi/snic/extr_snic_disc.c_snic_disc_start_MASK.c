
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_disc {scalar_t__ state; int mutex; int req_cnt; } ;
struct snic {int shost; int snic_lock; scalar_t__ in_remove; struct snic_disc disc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct snic*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int
FUNC_8(struct snic *VAR_1)
{
 struct snic_disc *VAR_2 = &VAR_1->disc;
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_2(VAR_1->shost, "Discovery Start.\n");

 FUNC_6(&VAR_1->snic_lock, VAR_3);
 if (VAR_1->in_remove) {
  FUNC_7(&VAR_1->snic_lock, VAR_3);
  FUNC_0("snic driver removal in progress ...\n");
  VAR_4 = 0;

  return VAR_4;
 }
 FUNC_7(&VAR_1->snic_lock, VAR_3);

 FUNC_3(&VAR_2->mutex);
 if (VAR_2->state == VAR_0) {
  VAR_2->req_cnt++;
  FUNC_4(&VAR_2->mutex);

  return VAR_4;
 }
 VAR_2->state = VAR_0;
 FUNC_4(&VAR_2->mutex);

 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4)
  FUNC_1(VAR_1->shost, "Discovery Failed, err=%d.\n", VAR_4);

 return VAR_4;
}
