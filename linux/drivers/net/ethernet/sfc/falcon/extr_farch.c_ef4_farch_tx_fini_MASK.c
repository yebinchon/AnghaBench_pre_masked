
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_tx_queue {int txd; int queue; struct ef4_nic* efx; } ;
struct ef4_nic {TYPE_1__* type; } ;
typedef int ef4_oword_t ;
struct TYPE_2__ {int txd_ptr_tbl_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ef4_nic*,int *) ;
 int FUNC_2 (struct ef4_nic*,int *,int ,int ) ;

void FUNC_3(struct ef4_tx_queue *VAR_0)
{
 struct ef4_nic *VAR_1 = VAR_0->efx;
 ef4_oword_t VAR_2;


 FUNC_0(VAR_2);
 FUNC_2(VAR_1, &VAR_2, VAR_1->type->txd_ptr_tbl_base,
    VAR_0->queue);


 FUNC_1(VAR_1, &VAR_0->txd);
}
