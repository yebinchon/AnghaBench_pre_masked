
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfp_bus {int started; int sfp; TYPE_1__* socket_ops; scalar_t__ registered; } ;
struct TYPE_2__ {int (* start ) (int ) ;} ;


 int FUNC_0 (int ) ;

void FUNC_1(struct sfp_bus *VAR_0)
{
 if (VAR_0->registered)
  VAR_0->socket_ops->start(VAR_0->sfp);
 VAR_0->started = 1;
}
