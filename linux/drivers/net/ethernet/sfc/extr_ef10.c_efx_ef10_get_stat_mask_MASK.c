
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct efx_nic {scalar_t__ num_mac_stats; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int datapath_caps; int datapath_caps2; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long long FUNC_2 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_9, unsigned long *VAR_10)
{
 struct efx_ef10_nic_data *VAR_11 = VAR_9->nic_data;
 u64 VAR_12[2];

 VAR_12[0] = FUNC_2(VAR_9);


 if (VAR_11->datapath_caps &
     (1 << VAR_5)) {
  VAR_12[0] |= ~((1ULL << VAR_4) - 1);
  VAR_12[1] = (1ULL << (VAR_3 - 64)) - 1;
 } else {
  VAR_12[1] = 0;
 }

 if (VAR_9->num_mac_stats >= VAR_7)
  VAR_12[1] |= VAR_1;





 if (VAR_9->num_mac_stats >= VAR_8 &&
     (VAR_11->datapath_caps2 &
      (1 << VAR_6)))
  VAR_12[1] |= VAR_0;






 FUNC_1(FUNC_0(VAR_2) != 3);
 VAR_10[0] = VAR_12[0] & 0xffffffff;
 VAR_10[1] = VAR_12[0] >> 32;
 VAR_10[2] = VAR_12[1] & 0xffffffff;

}
