
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {unsigned int ptr_mask; struct efx_nic* efx; } ;
struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct efx_rx_queue *VAR_2,
        unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = (VAR_3 - VAR_4) & VAR_2->ptr_mask;
 struct efx_nic *VAR_6 = VAR_2->efx;

 FUNC_1(VAR_6, VAR_1, VAR_6->net_dev,
     "dropped %d events (index=%d expected=%d)\n",
     VAR_5, VAR_3, VAR_4);

 FUNC_0(VAR_6, VAR_0);
}
