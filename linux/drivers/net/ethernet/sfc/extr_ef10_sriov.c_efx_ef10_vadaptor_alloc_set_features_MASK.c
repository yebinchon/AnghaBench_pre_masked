
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int fixed_features; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int vport_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efx_nic*,int ) ;
 int FUNC_1 (struct efx_nic*,int ) ;
 int FUNC_2 (struct efx_nic*,int ,int*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_3)
{
 struct efx_ef10_nic_data *VAR_4 = VAR_3->nic_data;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4->vport_id);
 if (VAR_6)
  goto fail_vadaptor_alloc;

 VAR_6 = FUNC_2(VAR_3, VAR_4->vport_id,
         &VAR_5, ((void*)0), ((void*)0));
 if (VAR_6)
  goto fail_vadaptor_query;

 if (VAR_5 &
     (1 << VAR_1))
  VAR_3->fixed_features |= VAR_2;
 else
  VAR_3->fixed_features &= ~VAR_2;

 return 0;

fail_vadaptor_query:
 FUNC_1(VAR_3, VAR_0);
fail_vadaptor_alloc:
 return VAR_6;
}
