
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__* addr; } ;
struct efx_nic {int num_mac_stats; TYPE_1__ stats_buffer; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {scalar_t__* stats; } ;
typedef scalar_t__ __le64 ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (struct efx_nic*,int ) ;
 int VAR_9 ;
 int FUNC_2 (struct efx_nic*,scalar_t__*) ;
 int FUNC_3 (int ,int ,int ,scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__) ;
 int FUNC_5 (struct efx_nic*,scalar_t__*) ;
 int VAR_10 ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct efx_nic *VAR_11)
{
 struct efx_ef10_nic_data *VAR_12 = VAR_11->nic_data;
 FUNC_0(VAR_10, VAR_1);
 __le64 VAR_13, VAR_14;
 u64 *VAR_15 = VAR_12->stats;
 __le64 *VAR_16;

 FUNC_1(VAR_11, VAR_10);

 VAR_16 = VAR_11->stats_buffer.addr;

 VAR_14 = VAR_16[VAR_11->num_mac_stats - 1];
 if (VAR_14 == VAR_7)
  return 0;
 FUNC_6();
 FUNC_3(VAR_9, VAR_1, VAR_10,
        VAR_15, VAR_11->stats_buffer.addr, 0);
 FUNC_6();
 VAR_13 = VAR_16[VAR_8];
 if (VAR_14 != VAR_13)
  return -VAR_0;


 FUNC_2(VAR_11,
         &VAR_15[VAR_6]);
 VAR_15[VAR_5] =
  VAR_15[VAR_3] -
  VAR_15[VAR_4];
 FUNC_4(&VAR_15[VAR_2],
        VAR_15[VAR_4]);
 FUNC_5(VAR_11, VAR_15);
 return 0;
}
