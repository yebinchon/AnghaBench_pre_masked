
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_channel {TYPE_1__* type; } ;
struct TYPE_2__ {scalar_t__ (* want_txqs ) (struct efx_channel*) ;} ;


 scalar_t__ FUNC_0 (struct efx_channel*) ;

__attribute__((used)) static inline bool FUNC_1(struct efx_channel *VAR_0)
{
 return VAR_0->type && VAR_0->type->want_txqs &&
    VAR_0->type->want_txqs(VAR_0);
}
