
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {scalar_t__ ptr_mask; } ;


 unsigned int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_1(struct efx_tx_queue *VAR_2)
{
 return FUNC_0(VAR_2->ptr_mask + 1, VAR_1 >> VAR_0);
}
