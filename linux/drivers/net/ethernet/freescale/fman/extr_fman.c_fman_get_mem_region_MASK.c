
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct fman {TYPE_1__* state; } ;
struct TYPE_2__ {struct resource* res; } ;



struct resource *FUNC_0(struct fman *VAR_0)
{
 return VAR_0->state->res;
}
