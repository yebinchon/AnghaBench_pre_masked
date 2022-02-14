
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lmc_gpio; } ;
typedef TYPE_1__ lmc_softc_t ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void
FUNC_1 (lmc_softc_t * VAR_3, int VAR_4)
{



  VAR_3->lmc_gpio &= ~(VAR_0);
  if (VAR_4 & 0x01)
    VAR_3->lmc_gpio |= VAR_1;
  else
    VAR_3->lmc_gpio &= ~(VAR_1);
  FUNC_0 (VAR_3, VAR_2, VAR_3->lmc_gpio);




  VAR_3->lmc_gpio |= VAR_0;
  FUNC_0 (VAR_3, VAR_2, VAR_3->lmc_gpio);




  VAR_3->lmc_gpio &= ~(VAR_0);
  FUNC_0 (VAR_3, VAR_2, VAR_3->lmc_gpio);
}
