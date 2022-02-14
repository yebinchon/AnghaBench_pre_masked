
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {unsigned int write_count; unsigned int ptr_mask; int queue; int efx; } ;
typedef int efx_dword_t ;


 int FUNC_0 (int ,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct efx_tx_queue *VAR_2)
{
 unsigned VAR_3;
 efx_dword_t VAR_4;

 VAR_3 = VAR_2->write_count & VAR_2->ptr_mask;
 FUNC_0(VAR_4, VAR_0, VAR_3);
 FUNC_1(VAR_2->efx, &VAR_4,
   VAR_1, VAR_2->queue);
}
