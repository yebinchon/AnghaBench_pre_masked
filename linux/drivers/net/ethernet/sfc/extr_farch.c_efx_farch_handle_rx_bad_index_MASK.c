
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {int scatter_n; int removed_count; int ptr_mask; struct efx_nic* efx; } ;
struct efx_nic {int net_dev; } ;
struct efx_channel {int n_rx_nodesc_trunc; } ;


 int VAR_0 ;
 struct efx_channel* FUNC_0 (struct efx_rx_queue*) ;
 int FUNC_1 (struct efx_nic*,int ) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,unsigned int,unsigned int,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_3(struct efx_rx_queue *VAR_2, unsigned VAR_3)
{
 struct efx_channel *VAR_4 = FUNC_0(VAR_2);
 struct efx_nic *VAR_5 = VAR_2->efx;
 unsigned VAR_6, VAR_7;

 if (VAR_2->scatter_n &&
     VAR_3 == ((VAR_2->removed_count + VAR_2->scatter_n - 1) &
        VAR_2->ptr_mask)) {
  ++VAR_4->n_rx_nodesc_trunc;
  return 1;
 }

 VAR_6 = VAR_2->removed_count & VAR_2->ptr_mask;
 VAR_7 = (VAR_3 - VAR_6) & VAR_2->ptr_mask;
 FUNC_2(VAR_5, VAR_1, VAR_5->net_dev,
     "dropped %d events (index=%d expected=%d)\n",
     VAR_7, VAR_3, VAR_6);

 FUNC_1(VAR_5, VAR_0);
 return 0;
}
