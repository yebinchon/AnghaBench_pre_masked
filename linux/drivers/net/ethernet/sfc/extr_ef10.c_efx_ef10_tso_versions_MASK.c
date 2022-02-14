
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int datapath_caps; int datapath_caps2; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct efx_nic *VAR_2)
{
 struct efx_ef10_nic_data *VAR_3 = VAR_2->nic_data;
 u32 VAR_4 = 0;

 if (VAR_3->datapath_caps &
     (1 << VAR_0))
  VAR_4 |= FUNC_0(1);
 if (VAR_3->datapath_caps2 &
     (1 << VAR_1))
  VAR_4 |= FUNC_0(2);
 return VAR_4;
}
