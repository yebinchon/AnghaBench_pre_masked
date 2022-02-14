
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int biu_lock; } ;
typedef int efx_dword_t ;


 int FUNC_0 (struct efx_nic*,unsigned int,unsigned int) ;
 int FUNC_1 (struct efx_nic*,int const*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct efx_nic *VAR_0,
        const efx_dword_t *VAR_1,
        unsigned int VAR_2,
        unsigned int VAR_3)
{
 unsigned long VAR_4 __attribute__ ((unused));

 if (VAR_3 == 0) {
  FUNC_2(&VAR_0->biu_lock, VAR_4);
  FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_0, VAR_3, VAR_2));
  FUNC_3(&VAR_0->biu_lock, VAR_4);
 } else {
  FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_0, VAR_3, VAR_2));
 }
}
