
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct efx_nic {TYPE_1__* type; } ;
struct efx_filter_spec {int dummy; } ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;
struct TYPE_2__ {int (* filter_get_safe ) (struct efx_nic*,int,int ,struct efx_filter_spec*) ;} ;


 int FUNC_0 (struct efx_nic*,int,int ,struct efx_filter_spec*) ;

__attribute__((used)) static inline int
FUNC_1(struct efx_nic *VAR_0,
      enum efx_filter_priority VAR_1,
      u32 VAR_2, struct efx_filter_spec *VAR_3)
{
 return VAR_0->type->filter_get_safe(VAR_0, VAR_1, VAR_2, VAR_3);
}
