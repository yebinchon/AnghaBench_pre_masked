
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
typedef int efx_dword_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct efx_nic*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct efx_nic *VAR_4)
{
 efx_dword_t VAR_5;

 FUNC_1(VAR_4, &VAR_5, VAR_3);
 return FUNC_0(VAR_5, VAR_1) == 0xb007 ?
  FUNC_0(VAR_5, VAR_0) : -VAR_2;
}
