
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct efx_nic {TYPE_1__* type; } ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;
struct TYPE_2__ {int (* filter_count_rx_used ) (struct efx_nic*,int) ;} ;


 int FUNC_0 (struct efx_nic*,int) ;

__attribute__((used)) static inline u32 FUNC_1(struct efx_nic *VAR_0,
        enum efx_filter_priority VAR_1)
{
 return VAR_0->type->filter_count_rx_used(VAR_0, VAR_1);
}
