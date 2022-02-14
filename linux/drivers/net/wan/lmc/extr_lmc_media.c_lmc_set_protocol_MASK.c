
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int keepalive_onoff; } ;
struct TYPE_5__ {TYPE_1__ ictl; } ;
typedef TYPE_2__ lmc_softc_t ;
typedef int lmc_ctl_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0 (lmc_softc_t * const VAR_1, lmc_ctl_t * VAR_2)
{
 if (!VAR_2)
  VAR_1->ictl.keepalive_onoff = VAR_0;
}
