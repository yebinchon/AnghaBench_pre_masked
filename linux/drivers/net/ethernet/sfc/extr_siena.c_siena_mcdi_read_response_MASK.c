
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
typedef int efx_dword_t ;


 unsigned int FUNC_0 (size_t,int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_1, efx_dword_t *VAR_2,
         size_t VAR_3, size_t VAR_4)
{
 unsigned int VAR_5 = VAR_0 + FUNC_1(VAR_1);
 unsigned int VAR_6 = FUNC_0(VAR_4, 4);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_2(VAR_1, &VAR_2[VAR_7], VAR_5 + VAR_3 + 4 * VAR_7);
}
