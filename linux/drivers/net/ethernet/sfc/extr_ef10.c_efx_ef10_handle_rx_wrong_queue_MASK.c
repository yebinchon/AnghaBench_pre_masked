
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {struct efx_nic* efx; } ;
struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_rx_queue*) ;
 int FUNC_1 (struct efx_nic*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct efx_rx_queue *VAR_2,
        unsigned int VAR_3)
{
 struct efx_nic *VAR_4 = VAR_2->efx;

 FUNC_2(VAR_4, VAR_1, VAR_4->net_dev,
     "rx event arrived on queue %d labeled as queue %u\n",
     FUNC_0(VAR_2), VAR_3);

 FUNC_1(VAR_4, VAR_0);
}
