
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; } ;
struct efx_channel {int eventq; int channel; struct efx_nic* efx; } ;
typedef int efx_oword_t ;
struct TYPE_2__ {int evq_ptr_tbl_base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct efx_nic*,int *) ;
 int FUNC_2 (struct efx_nic*,int *,int ,int ) ;

void FUNC_3(struct efx_channel *VAR_1)
{
 efx_oword_t VAR_2;
 struct efx_nic *VAR_3 = VAR_1->efx;


 FUNC_0(VAR_2);
 FUNC_2(VAR_3, &VAR_2, VAR_3->type->evq_ptr_tbl_base,
    VAR_1->channel);
 FUNC_2(VAR_3, &VAR_2, VAR_0, VAR_1->channel);


 FUNC_1(VAR_3, &VAR_1->eventq);
}
