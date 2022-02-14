
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct efx_nic {TYPE_1__* mcdi; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int datapath_caps2; int datapath_caps; } ;
struct TYPE_2__ {int fn_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct efx_nic*) ;

__attribute__((used)) static u64 FUNC_1(struct efx_nic *VAR_8)
{
 u64 VAR_9 = VAR_2;
 u32 VAR_10 = FUNC_0(VAR_8);
 struct efx_ef10_nic_data *VAR_11 = VAR_8->nic_data;

 if (!(VAR_8->mcdi->fn_flags &
       1 << VAR_4))
  return 0;

 if (VAR_10 & (1 << VAR_7)) {
  VAR_9 |= VAR_1;

  if (VAR_11->datapath_caps2 &
      (1 << VAR_6))
   VAR_9 |= VAR_0;
 } else {
  VAR_9 |= VAR_0;
 }

 if (VAR_11->datapath_caps &
     (1 << VAR_5))
  VAR_9 |= VAR_3;

 return VAR_9;
}
