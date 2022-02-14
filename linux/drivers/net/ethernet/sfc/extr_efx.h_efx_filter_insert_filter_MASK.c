
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; } ;
struct efx_filter_spec {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {int (* filter_insert ) (struct efx_nic*,struct efx_filter_spec*,int) ;} ;


 int FUNC_0 (struct efx_nic*,struct efx_filter_spec*,int) ;

__attribute__((used)) static inline s32 FUNC_1(struct efx_nic *VAR_0,
        struct efx_filter_spec *VAR_1,
        bool VAR_2)
{
 return VAR_0->type->filter_insert(VAR_0, VAR_1, VAR_2);
}
