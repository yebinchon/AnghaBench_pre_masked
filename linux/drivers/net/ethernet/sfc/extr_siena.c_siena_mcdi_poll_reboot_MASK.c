
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct siena_nic_data {scalar_t__* stats; } ;
struct efx_nic {struct siena_nic_data* nic_data; } ;
typedef int efx_dword_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_2 (struct efx_nic*) ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (struct efx_nic*,int *,unsigned int) ;
 int FUNC_4 (struct efx_nic*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_7)
{
 struct siena_nic_data *VAR_8 = VAR_7->nic_data;
 unsigned int VAR_9 = VAR_3 + FUNC_2(VAR_7);
 efx_dword_t VAR_10;
 u32 VAR_11;

 FUNC_3(VAR_7, &VAR_10, VAR_9);
 VAR_11 = FUNC_0(VAR_10, VAR_0);

 if (VAR_11 == 0)
  return 0;

 FUNC_1(VAR_10);
 FUNC_4(VAR_7, &VAR_10, VAR_9);




 VAR_8->stats[VAR_6] = 0;
 VAR_8->stats[VAR_5] = 0;

 if (VAR_11 == VAR_4)
  return -VAR_1;
 else
  return -VAR_2;
}
