
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {struct ef10_vf* vf; } ;
struct ef10_vf {int vport_assigned; int vport_id; int mac; int vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct efx_nic*,int ,unsigned int) ;
 int FUNC_2 (struct efx_nic*,int ,int ) ;
 int FUNC_3 (struct efx_nic*,int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_3,
       unsigned int VAR_4)
{
 struct efx_ef10_nic_data *VAR_5 = VAR_3->nic_data;
 struct ef10_vf *VAR_6 = VAR_5->vf + VAR_4;
 int VAR_7;

 if (FUNC_0(!VAR_5->vf))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3, VAR_1,
      VAR_2,
      VAR_6->vlan, &VAR_6->vport_id);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_6->vport_id, VAR_6->mac);
 if (VAR_7) {
  FUNC_4(VAR_6->mac);
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_6->vport_id, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_6->vport_assigned = 1;
 return 0;
}
