
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cable_length; } ;
struct TYPE_6__ {int lmc_miireg16; TYPE_1__ ictl; } ;
typedef TYPE_2__ lmc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__* const,int ,int,int ) ;

__attribute__((used)) static void
FUNC_1 (lmc_softc_t * const VAR_3, int VAR_4)
{
  if (VAR_4 == VAR_0)
    {
      VAR_3->lmc_miireg16 &= ~VAR_2;
      VAR_3->ictl.cable_length = VAR_0;
    }
  else if (VAR_4 == VAR_1)
    {
      VAR_3->lmc_miireg16 |= VAR_2;
      VAR_3->ictl.cable_length = VAR_1;
    }
  FUNC_0 (VAR_3, 0, 16, VAR_3->lmc_miireg16);
}
