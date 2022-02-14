
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic {int state; int shost; } ;
typedef enum snic_state { ____Placeholder_snic_state } snic_state ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct snic*) ;
 int FUNC_3 (int) ;

void
FUNC_4(struct snic *VAR_0, enum snic_state VAR_1)
{
 FUNC_0(VAR_0->shost, "snic state change from %s to %s\n",
         FUNC_3(FUNC_2(VAR_0)),
         FUNC_3(VAR_1));

 FUNC_1(&VAR_0->state, VAR_1);
}
