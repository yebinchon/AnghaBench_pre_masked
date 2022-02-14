
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_nic {int ptp_data; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

size_t FUNC_1(struct efx_nic *VAR_3, u8 *VAR_4)
{
 if (!VAR_3->ptp_data)
  return 0;

 return FUNC_0(VAR_1, VAR_0,
          VAR_2, VAR_4);
}
