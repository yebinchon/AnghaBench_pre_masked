
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int cable_type; int cardtype; } ;
struct TYPE_7__ {TYPE_1__ ictl; } ;
typedef TYPE_2__ lmc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__* const,int ) ;
 int FUNC_1 (TYPE_2__* const,int ,int) ;

__attribute__((used)) static void FUNC_2(lmc_softc_t * const VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 VAR_4->ictl.cardtype = VAR_0;

 VAR_5 = FUNC_1(VAR_4, 0, 17);

 VAR_6 = (VAR_5 & VAR_2) >> VAR_3;
 VAR_4->ictl.cable_type = VAR_6;

 FUNC_0(VAR_4, VAR_1);
}
