
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {unsigned int vf_count; int ** extra_channel_type; int net_dev; int vi_scale; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct efx_nic*,int,int *,unsigned int*) ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*) ;
 int VAR_3 ;

void FUNC_2(struct efx_nic *VAR_4)
{
 unsigned VAR_5;

 if (!VAR_2)
  return;

 if (FUNC_0(VAR_4, 0, &VAR_4->vi_scale, &VAR_5)) {
  FUNC_1(VAR_4, VAR_3, VAR_4->net_dev, "no SR-IOV VFs probed\n");
  return;
 }
 if (VAR_5 > 0 && VAR_5 > VAR_2)
  VAR_5 = VAR_2;


 VAR_4->vf_count = VAR_5;

 VAR_4->extra_channel_type[VAR_0] = &VAR_1;
}
