
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; } ;
typedef int efx_dword_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct efx_nic*,int ,int ,int,int ,char*,unsigned int,size_t,int,int,int) ;

void FUNC_2(struct efx_nic *VAR_7, unsigned VAR_8,
       size_t VAR_9, efx_dword_t *VAR_10,
       size_t VAR_11, int VAR_12)
{
 int VAR_13 = 0, VAR_14 = 0;

 if (VAR_11 >= VAR_4 + 4)
  VAR_13 = FUNC_0(VAR_10, VAR_2);
 if (VAR_11 >= VAR_3 + 4)
  VAR_14 = FUNC_0(VAR_10, VAR_1);
 FUNC_1(VAR_7, VAR_6, VAR_7->net_dev, VAR_12 == -VAR_0, VAR_5,
         "MC command 0x%x inlen %zu failed rc=%d (raw=%d) arg=%d\n",
         VAR_8, VAR_9, VAR_12, VAR_13, VAR_14);
}
