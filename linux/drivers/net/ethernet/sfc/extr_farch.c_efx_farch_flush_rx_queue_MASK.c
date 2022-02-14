
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {struct efx_nic* efx; } ;
struct efx_nic {int dummy; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int ,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct efx_rx_queue*) ;
 int FUNC_2 (struct efx_nic*,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct efx_rx_queue *VAR_3)
{
 struct efx_nic *VAR_4 = VAR_3->efx;
 efx_oword_t VAR_5;

 FUNC_0(VAR_5,
        VAR_1, 1,
        VAR_0,
        FUNC_1(VAR_3));
 FUNC_2(VAR_4, &VAR_5, VAR_2);
}
