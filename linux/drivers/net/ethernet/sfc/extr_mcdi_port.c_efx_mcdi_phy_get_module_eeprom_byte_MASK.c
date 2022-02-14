
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_nic {int dummy; } ;


 int FUNC_0 (struct efx_nic*,unsigned int,int*,int,int) ;

__attribute__((used)) static int FUNC_1(struct efx_nic *VAR_0,
            unsigned int VAR_1,
            u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_4, VAR_2, 1);
 if (VAR_3 == 1)
  return VAR_4;

 return VAR_3;
}
