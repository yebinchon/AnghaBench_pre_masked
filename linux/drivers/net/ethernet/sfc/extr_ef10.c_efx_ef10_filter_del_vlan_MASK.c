
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct efx_nic {int net_dev; int filter_sem; } ;
struct efx_ef10_filter_vlan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*,struct efx_ef10_filter_vlan*) ;
 struct efx_ef10_filter_vlan* FUNC_1 (struct efx_nic*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct efx_nic *VAR_1, u16 VAR_2)
{
 struct efx_ef10_filter_vlan *VAR_3;


 if (!FUNC_2(&VAR_1->filter_sem))
  return;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_3(VAR_1, VAR_0, VAR_1->net_dev,
     "VLAN %u not found in filter state\n", VAR_2);
  return;
 }

 FUNC_0(VAR_1, VAR_3);
}
