
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_rx_queue {int ptr_mask; int rxd; struct ef4_nic* efx; } ;
struct ef4_nic {int dummy; } ;
typedef int ef4_qword_t ;


 int FUNC_0 (struct ef4_nic*,int *,unsigned int) ;

int FUNC_1(struct ef4_rx_queue *VAR_0)
{
 struct ef4_nic *VAR_1 = VAR_0->efx;
 unsigned VAR_2;

 VAR_2 = VAR_0->ptr_mask + 1;
 return FUNC_0(VAR_1, &VAR_0->rxd,
     VAR_2 * sizeof(ef4_qword_t));
}
