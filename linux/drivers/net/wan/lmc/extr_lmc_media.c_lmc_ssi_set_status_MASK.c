
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ clock_source; scalar_t__ clock_rate; } ;
struct TYPE_16__ {TYPE_1__* lmc_media; TYPE_3__ ictl; scalar_t__ lmc_timing; } ;
typedef TYPE_2__ lmc_softc_t ;
typedef TYPE_3__ lmc_ctl_t ;
struct TYPE_15__ {int (* set_speed ) (TYPE_2__* const,TYPE_3__*) ;int (* set_clock_source ) (TYPE_2__* const,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__* const,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__* const,scalar_t__) ;
 int FUNC_2 (TYPE_2__* const,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__* const,scalar_t__) ;
 int FUNC_4 (TYPE_2__* const,scalar_t__) ;
 int FUNC_5 (TYPE_2__* const,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_6 (lmc_softc_t * const VAR_2, lmc_ctl_t * VAR_3)
{
  if (VAR_3 == ((void*)0))
    {
      VAR_2->lmc_media->set_clock_source (VAR_2, VAR_2->ictl.clock_source);
      VAR_2->lmc_media->set_speed (VAR_2, &VAR_2->ictl);
      FUNC_0 (VAR_2, ((void*)0));

      return;
    }




  if (VAR_3->clock_source == VAR_1
      && VAR_2->ictl.clock_source == VAR_0)
    {
      VAR_2->lmc_media->set_clock_source (VAR_2, VAR_1);
      VAR_2->lmc_timing = VAR_1;
    }
  else if (VAR_3->clock_source == VAR_0
    && VAR_2->ictl.clock_source == VAR_1)
    {
      VAR_2->lmc_media->set_clock_source (VAR_2, VAR_0);
      VAR_2->lmc_timing = VAR_0;
    }

  if (VAR_3->clock_rate != VAR_2->ictl.clock_rate)
    VAR_2->lmc_media->set_speed (VAR_2, VAR_3);

  FUNC_0 (VAR_2, VAR_3);
}
