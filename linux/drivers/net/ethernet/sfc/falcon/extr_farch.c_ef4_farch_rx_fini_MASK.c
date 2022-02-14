
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_rx_queue {int rxd; struct ef4_nic* efx; } ;
struct ef4_nic {TYPE_1__* type; } ;
typedef int ef4_oword_t ;
struct TYPE_2__ {int rxd_ptr_tbl_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ef4_nic*,int *) ;
 int FUNC_2 (struct ef4_rx_queue*) ;
 int FUNC_3 (struct ef4_nic*,int *,int ,int ) ;

void FUNC_4(struct ef4_rx_queue *VAR_0)
{
 ef4_oword_t VAR_1;
 struct ef4_nic *VAR_2 = VAR_0->efx;


 FUNC_0(VAR_1);
 FUNC_3(VAR_2, &VAR_1, VAR_2->type->rxd_ptr_tbl_base,
    FUNC_2(VAR_0));


 FUNC_1(VAR_2, &VAR_0->rxd);
}
