
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int debugfs_phy; } ;
struct ath_softc {TYPE_1__ debug; int sc_ah; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ,struct ath_softc*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct ath_softc *VAR_2)
{
 if (!FUNC_0(VAR_2->sc_ah))
  return;

 FUNC_1("tx99", 0600,
       VAR_2->debug.debugfs_phy, VAR_2,
       &VAR_0);
 FUNC_1("tx99_power", 0600,
       VAR_2->debug.debugfs_phy, VAR_2,
       &VAR_1);
}
