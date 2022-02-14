
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int * workqueue; int vpd_sn; int * channel; int rps_hash_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_1)
{
 int VAR_2;





 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->channel[VAR_2]);

 FUNC_1(VAR_1->vpd_sn);

 if (VAR_1->workqueue) {
  FUNC_0(VAR_1->workqueue);
  VAR_1->workqueue = ((void*)0);
 }
}
