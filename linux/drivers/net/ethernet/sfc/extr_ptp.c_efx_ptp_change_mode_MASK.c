
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* ptp_data; int net_dev; } ;
struct TYPE_2__ {int enabled; unsigned int mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct efx_nic *VAR_1, bool VAR_2,
   unsigned int VAR_3)
{
 if ((VAR_2 != VAR_1->ptp_data->enabled) ||
     (VAR_2 && (VAR_1->ptp_data->mode != VAR_3))) {
  int VAR_4 = 0;

  if (VAR_2) {

   if (VAR_1->ptp_data->enabled &&
       (VAR_1->ptp_data->mode != VAR_3)) {
    VAR_1->ptp_data->enabled = 0;
    VAR_4 = FUNC_1(VAR_1);
    if (VAR_4 != 0)
     return VAR_4;
   }





   VAR_1->ptp_data->mode = VAR_3;
   if (FUNC_3(VAR_1->net_dev))
    VAR_4 = FUNC_0(VAR_1);
   if (VAR_4 == 0) {
    VAR_4 = FUNC_2(VAR_1,
        VAR_0 * 2);
    if (VAR_4 != 0)
     FUNC_1(VAR_1);
   }
  } else {
   VAR_4 = FUNC_1(VAR_1);
  }

  if (VAR_4 != 0)
   return VAR_4;

  VAR_1->ptp_data->enabled = VAR_2;
 }

 return 0;
}
