
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec64 {unsigned int tv_sec; unsigned int tv_nsec; } ;
struct pps_event_time {struct timespec64 ts_real; } ;
struct TYPE_3__ {int* addr; } ;
struct efx_ptp_data {TYPE_1__ start; } ;
struct efx_nic {TYPE_2__* type; struct efx_ptp_data* ptp_data; } ;
struct TYPE_4__ {int (* ptp_write_host_time ) (struct efx_nic*,unsigned int) ;} ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pps_event_time*) ;
 int FUNC_2 (struct efx_nic*,unsigned int) ;
 int FUNC_3 (struct timespec64*,int ) ;
 scalar_t__ FUNC_4 (struct timespec64*,struct timespec64*) ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_3,
          struct pps_event_time *VAR_4)
{
 struct pps_event_time VAR_5;
 struct timespec64 VAR_6;
 struct efx_ptp_data *VAR_7 = VAR_3->ptp_data;
 int *VAR_8 = VAR_7->start.addr;

 FUNC_1(&VAR_5);
 VAR_6 = VAR_5.ts_real;
 FUNC_3(&VAR_6, VAR_2);


 while ((FUNC_4(&VAR_5.ts_real, &VAR_6) < 0) &&
        FUNC_0(*VAR_8)) {
  struct timespec64 VAR_9;
  unsigned int VAR_10;


  VAR_9 = VAR_5.ts_real;
  FUNC_3(&VAR_9, VAR_1);
  do {
   FUNC_1(&VAR_5);
  } while ((FUNC_4(&VAR_5.ts_real, &VAR_9) < 0) &&
    FUNC_0(*VAR_8));


  VAR_10 = (VAR_5.ts_real.tv_sec << VAR_0 |
        VAR_5.ts_real.tv_nsec);

  VAR_3->type->ptp_write_host_time(VAR_3, VAR_10);
 }
 *VAR_4 = VAR_5;
}
