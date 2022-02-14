
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int f; int n; int m; int v; int x; int r; } ;
struct TYPE_8__ {TYPE_4__ ssi; } ;
struct TYPE_10__ {int clock_rate; TYPE_1__ cardspec; } ;
struct TYPE_9__ {TYPE_3__ ictl; } ;
typedef TYPE_2__ lmc_softc_t ;
typedef TYPE_3__ lmc_ctl_t ;
typedef TYPE_4__ lmc_av9110_t ;


 int FUNC_0 (TYPE_2__* const,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1 (lmc_softc_t * const VAR_0, lmc_ctl_t * VAR_1)
{
  lmc_ctl_t *VAR_2 = &VAR_0->ictl;
  lmc_av9110_t *VAR_3;







  if (VAR_1 == ((void*)0))
    {
      VAR_3 = &VAR_2->cardspec.ssi;
      VAR_2->clock_rate = 1500000;
      VAR_3->f = VAR_2->clock_rate;
      VAR_3->n = 120;
      VAR_3->m = 100;
      VAR_3->v = 1;
      VAR_3->x = 1;
      VAR_3->r = 2;

      FUNC_0 (VAR_0, VAR_3->n, VAR_3->m, VAR_3->v, VAR_3->x, VAR_3->r);
      return;
    }

  VAR_3 = &VAR_1->cardspec.ssi;

  if (VAR_3->f == 0)
    return;

  VAR_2->clock_rate = VAR_3->f;
  VAR_2->cardspec.ssi = *VAR_3;

  FUNC_0 (VAR_0, VAR_3->n, VAR_3->m, VAR_3->v, VAR_3->x, VAR_3->r);
}
