
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
typedef int efx_dword_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int *,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct efx_nic *VAR_3)
{
 unsigned int VAR_4 = VAR_1 + FUNC_1(VAR_3);
 efx_dword_t VAR_5;

 FUNC_2(VAR_3, &VAR_5, VAR_4);





 return FUNC_0(VAR_5, VAR_0) != 0xffffffff &&
  FUNC_0(VAR_5, VAR_2);
}
