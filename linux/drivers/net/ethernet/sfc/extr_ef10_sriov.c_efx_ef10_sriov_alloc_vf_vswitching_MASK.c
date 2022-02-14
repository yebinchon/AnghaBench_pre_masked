
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {unsigned int vf_count; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {TYPE_1__* vf; } ;
struct ef10_vf {int dummy; } ;
struct TYPE_3__ {int vlan; int * efx; int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efx_nic*,unsigned int) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_3)
{
 struct efx_ef10_nic_data *VAR_4 = VAR_3->nic_data;
 unsigned int VAR_5;
 int VAR_6;

 VAR_4->vf = FUNC_3(VAR_3->vf_count, sizeof(struct ef10_vf),
          VAR_2);
 if (!VAR_4->vf)
  return -VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_3->vf_count; VAR_5++) {
  FUNC_2(VAR_4->vf[VAR_5].mac);
  VAR_4->vf[VAR_5].efx = ((void*)0);
  VAR_4->vf[VAR_5].vlan = VAR_0;

  VAR_6 = FUNC_0(VAR_3, VAR_5);
  if (VAR_6)
   goto fail;
 }

 return 0;
fail:
 FUNC_1(VAR_3);
 FUNC_4(VAR_4->vf);
 VAR_4->vf = ((void*)0);
 return VAR_6;
}
