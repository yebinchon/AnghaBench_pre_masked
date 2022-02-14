
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ clock_source; } ;
struct TYPE_14__ {TYPE_2__* lmc_media; scalar_t__ lmc_timing; TYPE_1__ ictl; } ;
typedef TYPE_3__ lmc_softc_t ;
struct TYPE_15__ {scalar_t__ clock_source; } ;
typedef TYPE_4__ lmc_ctl_t ;
struct TYPE_13__ {int (* set_clock_source ) (TYPE_3__* const,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__* const,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__* const,scalar_t__) ;
 int FUNC_2 (TYPE_3__* const,scalar_t__) ;
 int FUNC_3 (TYPE_3__* const,scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (lmc_softc_t * const VAR_2, lmc_ctl_t * VAR_3)
{
  if (VAR_3 == ((void*)0))
    {
      VAR_2->lmc_media->set_clock_source (VAR_2, VAR_2->ictl.clock_source);
      FUNC_0 (VAR_2, ((void*)0));

      return;
    }




  if (VAR_3->clock_source && !VAR_2->ictl.clock_source)
    {
      VAR_2->lmc_media->set_clock_source (VAR_2, VAR_1);
      VAR_2->lmc_timing = VAR_1;
    }
  else if (!VAR_3->clock_source && VAR_2->ictl.clock_source)
    {
      VAR_2->lmc_timing = VAR_0;
      VAR_2->lmc_media->set_clock_source (VAR_2, VAR_0);
    }

  FUNC_0 (VAR_2, VAR_3);
}
