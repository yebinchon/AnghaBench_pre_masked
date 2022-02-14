
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_phys_item_id {int id_len; int id; } ;
struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct efx_nic *VAR_2,
         struct netdev_phys_item_id *VAR_3)
{
 struct efx_ef10_nic_data *VAR_4 = VAR_2->nic_data;

 if (!FUNC_0(VAR_4->port_id))
  return -VAR_0;

 VAR_3->id_len = VAR_1;
 FUNC_1(VAR_3->id, VAR_4->port_id, VAR_3->id_len);

 return 0;
}
