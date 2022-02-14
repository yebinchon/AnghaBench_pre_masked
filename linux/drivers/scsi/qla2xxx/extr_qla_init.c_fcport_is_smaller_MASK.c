
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* vha; int port_name; } ;
typedef TYPE_2__ fc_port_t ;
struct TYPE_4__ {int port_name; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool
FUNC_1(fc_port_t *VAR_0)
{
 if (FUNC_0(VAR_0->port_name) <
     FUNC_0(VAR_0->vha->port_name))
  return 1;
 else
  return 0;
}
