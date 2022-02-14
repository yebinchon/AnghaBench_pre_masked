
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct efx_nic {TYPE_1__* type; } ;
typedef int s32 ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;
struct TYPE_2__ {int (* filter_get_rx_ids ) (struct efx_nic*,int,int *,int ) ;} ;


 int FUNC_0 (struct efx_nic*,int,int *,int ) ;

__attribute__((used)) static inline s32 FUNC_1(struct efx_nic *VAR_0,
     enum efx_filter_priority VAR_1,
     u32 *VAR_2, u32 VAR_3)
{
 return VAR_0->type->filter_get_rx_ids(VAR_0, VAR_1, VAR_2, VAR_3);
}
