
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
typedef int efx_oword_t ;


 int FUNC_0 (struct efx_nic*,int const*,unsigned int) ;

__attribute__((used)) static inline void
FUNC_1(struct efx_nic *VAR_0, const efx_oword_t *VAR_1,
   unsigned int VAR_2, unsigned int VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_3 * sizeof(efx_oword_t));
}
