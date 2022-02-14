
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_channel {TYPE_2__* efx; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* ev_process ) (struct efx_channel*,int) ;} ;


 int FUNC_0 (struct efx_channel*,int) ;

__attribute__((used)) static inline int
FUNC_1(struct efx_channel *VAR_0, int VAR_1)
{
 return VAR_0->efx->type->ev_process(VAR_0, VAR_1);
}
