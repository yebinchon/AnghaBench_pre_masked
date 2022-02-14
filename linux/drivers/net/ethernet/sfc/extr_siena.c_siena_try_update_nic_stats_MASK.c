
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct siena_nic_data {scalar_t__* stats; } ;
struct TYPE_2__ {scalar_t__* addr; } ;
struct efx_nic {int num_mac_stats; TYPE_1__ stats_buffer; struct siena_nic_data* nic_data; } ;
typedef scalar_t__ __le64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_0 (struct efx_nic*,scalar_t__*) ;
 int FUNC_1 (int ,int ,int ,scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;
 int FUNC_3 (struct efx_nic*,scalar_t__*) ;
 int FUNC_4 () ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_18)
{
 struct siena_nic_data *VAR_19 = VAR_18->nic_data;
 u64 *VAR_20 = VAR_19->stats;
 __le64 *VAR_21;
 __le64 VAR_22, VAR_23;

 VAR_21 = VAR_18->stats_buffer.addr;

 VAR_23 = VAR_21[VAR_18->num_mac_stats - 1];
 if (VAR_23 == VAR_1)
  return 0;
 FUNC_4();
 FUNC_1(VAR_16, VAR_3, VAR_17,
        VAR_20, VAR_18->stats_buffer.addr, 0);
 FUNC_4();
 VAR_22 = VAR_21[VAR_2];
 if (VAR_23 != VAR_22)
  return -VAR_0;


 FUNC_0(VAR_18,
         &VAR_20[VAR_7]);
 FUNC_2(&VAR_20[VAR_12],
        VAR_20[VAR_9] -
        VAR_20[VAR_8]);
 VAR_20[VAR_10] =
  VAR_20[VAR_15] +
  VAR_20[VAR_14] +
  VAR_20[VAR_11] +
  VAR_20[VAR_13];
 FUNC_2(&VAR_20[VAR_6],
        VAR_20[VAR_5] -
        VAR_20[VAR_4]);
 FUNC_3(VAR_18, VAR_20);
 return 0;
}
