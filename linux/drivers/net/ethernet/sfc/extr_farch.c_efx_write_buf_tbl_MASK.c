
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; scalar_t__ membase; } ;
typedef int efx_qword_t ;
struct TYPE_2__ {scalar_t__ buf_tbl_base; } ;


 int FUNC_0 (struct efx_nic*,scalar_t__,int *,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct efx_nic *VAR_0, efx_qword_t *VAR_1,
         unsigned int VAR_2)
{
 FUNC_0(VAR_0, VAR_0->membase + VAR_0->type->buf_tbl_base,
   VAR_1, VAR_2);
}
