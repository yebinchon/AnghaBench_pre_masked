
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct efx_tx_queue {unsigned int write_count; unsigned int ptr_mask; int queue; int efx; } ;
typedef int efx_qword_t ;
struct TYPE_4__ {int * qword; } ;
typedef TYPE_1__ efx_oword_t ;


 int FUNC_0 (TYPE_1__,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct efx_tx_queue *VAR_2,
      const efx_qword_t *VAR_3)
{
 unsigned int VAR_4;
 efx_oword_t VAR_5;

 VAR_4 = VAR_2->write_count & VAR_2->ptr_mask;
 FUNC_0(VAR_5, VAR_0, VAR_4);
 VAR_5.qword[0] = *VAR_3;
 FUNC_1(VAR_2->efx, &VAR_5,
   VAR_1, VAR_2->queue);
}
