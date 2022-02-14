
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int dummy; } ;
struct efx_channel {int sync_timestamp_major; } ;


 struct efx_channel* FUNC_0 (struct efx_nic*) ;

__attribute__((used)) static u32 FUNC_1(struct efx_nic *VAR_0)
{
 struct efx_channel *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2 = 0;

 if (VAR_1)
  VAR_2 = VAR_1->sync_timestamp_major;
 return VAR_2;
}
