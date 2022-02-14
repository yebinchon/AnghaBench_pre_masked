
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct timespec64 {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct pps_event_time {TYPE_1__ ts_real; } ;
struct efx_ptp_data {scalar_t__ min_synchronisation_ns; struct pps_event_time host_time_pps; TYPE_2__* timeset; int (* nic_to_kernel_time ) (int ,int ,int ) ;int undersize_sync_windows; int oversize_sync_windows; int invalid_sync_windows; } ;
struct efx_nic {int net_dev; struct efx_ptp_data* ptp_data; } ;
typedef scalar_t__ s32 ;
typedef int ktime_t ;
struct TYPE_4__ {scalar_t__ window; int host_start; int minor; int major; int wait; } ;
typedef int MCDI_DECLARE_STRUCT_PTR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 unsigned int FUNC_1 (size_t,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int VAR_8 ;
 struct timespec64 FUNC_3 (int ) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_5 (struct pps_event_time*,struct timespec64) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct efx_nic *VAR_9, MCDI_DECLARE_STRUCT_PTR(VAR_10),
        size_t VAR_11,
        const struct pps_event_time *VAR_12)
{
 unsigned VAR_13 =
  FUNC_1(VAR_11,
       VAR_5);
 unsigned VAR_14;
 unsigned VAR_15 = 0;
 unsigned VAR_16 = 0;
 struct efx_ptp_data *VAR_17 = VAR_9->ptp_data;
 u32 VAR_18;
 u32 VAR_19;
 struct timespec64 VAR_20;
 ktime_t VAR_21;

 if (VAR_13 == 0)
  return -VAR_0;







 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  s32 VAR_22, VAR_23;
  struct timespec64 VAR_24;

  FUNC_2(
   FUNC_0(VAR_10,
           VAR_5, VAR_14),
   &VAR_17->timeset[VAR_14]);

  VAR_24 = FUNC_3(
   VAR_17->nic_to_kernel_time(0, VAR_17->timeset[VAR_14].wait, 0));
  VAR_22 = VAR_17->timeset[VAR_14].window;
  VAR_23 = VAR_22 - VAR_24.tv_nsec;
  if (VAR_22 < VAR_6) {
   ++VAR_17->invalid_sync_windows;
  } else if (VAR_23 >= VAR_1) {
   ++VAR_17->oversize_sync_windows;
  } else if (VAR_23 < VAR_17->min_synchronisation_ns) {
   ++VAR_17->undersize_sync_windows;
  } else {
   VAR_15++;
   VAR_16 = VAR_14;
  }
 }

 if (VAR_15 == 0) {
  FUNC_4(VAR_9, VAR_7, VAR_9->net_dev,
      "PTP no suitable synchronisations\n");
  return -VAR_0;
 }







 VAR_19 = VAR_17->timeset[VAR_16].host_start >> VAR_2;
 VAR_18 = VAR_12->ts_real.tv_sec & VAR_4;
 if (VAR_19 != VAR_18 &&
     ((VAR_19 + 1) & VAR_4) != VAR_18) {
  FUNC_4(VAR_9, VAR_8, VAR_9->net_dev,
      "PTP bad synchronisation seconds\n");
  return -VAR_0;
 }
 VAR_20.tv_sec = (VAR_18 - VAR_19) & 1;
 VAR_20.tv_nsec =
  VAR_12->ts_real.tv_nsec -
  (VAR_17->timeset[VAR_16].host_start & VAR_3);





 VAR_21 = VAR_17->nic_to_kernel_time(VAR_17->timeset[VAR_16].major,
       VAR_17->timeset[VAR_16].minor, 0);


 VAR_20.tv_nsec += FUNC_3(VAR_21).tv_nsec;


 VAR_17->host_time_pps = *VAR_12;
 FUNC_5(&VAR_17->host_time_pps, VAR_20);

 return 0;
}
