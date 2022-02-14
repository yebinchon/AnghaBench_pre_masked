
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_nic_data {int wol_filter_id; } ;
struct ethtool_wolinfo {int sopass; void* wolopts; void* supported; } ;
struct efx_nic {struct siena_nic_data* nic_data; } ;


 void* VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 struct siena_nic_data *VAR_3 = VAR_1->nic_data;

 VAR_2->supported = VAR_0;
 if (VAR_3->wol_filter_id != -1)
  VAR_2->wolopts = VAR_0;
 else
  VAR_2->wolopts = 0;
 FUNC_0(&VAR_2->sopass, 0, sizeof(VAR_2->sopass));
}
