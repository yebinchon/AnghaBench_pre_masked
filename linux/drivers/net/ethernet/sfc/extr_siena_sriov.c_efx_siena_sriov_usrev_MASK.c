
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siena_nic_data {TYPE_1__* vfdi_channel; } ;
struct efx_nic {struct siena_nic_data* nic_data; } ;
typedef int efx_oword_t ;
struct TYPE_2__ {int channel; } ;


 int FUNC_0 (int ,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct efx_nic*,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_3, bool VAR_4)
{
 struct siena_nic_data *VAR_5 = VAR_3->nic_data;
 efx_oword_t VAR_6;

 FUNC_0(VAR_6,
        VAR_1, VAR_4 ? 0 : 1,
        VAR_0, VAR_5->vfdi_channel->channel);
 FUNC_1(VAR_3, &VAR_6, VAR_2);
}
