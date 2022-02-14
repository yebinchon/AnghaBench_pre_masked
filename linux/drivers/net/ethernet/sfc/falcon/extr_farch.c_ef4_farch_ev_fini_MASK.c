
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {TYPE_1__* type; } ;
struct ef4_channel {int eventq; int channel; struct ef4_nic* efx; } ;
typedef int ef4_oword_t ;
struct TYPE_2__ {int evq_ptr_tbl_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ef4_nic*,int *) ;
 int FUNC_2 (struct ef4_nic*,int *,int ,int ) ;

void FUNC_3(struct ef4_channel *VAR_0)
{
 ef4_oword_t VAR_1;
 struct ef4_nic *VAR_2 = VAR_0->efx;


 FUNC_0(VAR_1);
 FUNC_2(VAR_2, &VAR_1, VAR_2->type->evq_ptr_tbl_base,
    VAR_0->channel);


 FUNC_1(VAR_2, &VAR_0->eventq);
}
