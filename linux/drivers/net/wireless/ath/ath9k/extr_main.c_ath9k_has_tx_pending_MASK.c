
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * txq; } ;
struct ath_softc {TYPE_1__ tx; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int) ;
 int FUNC_1 (struct ath_softc*,int *,int) ;

__attribute__((used)) static bool FUNC_2(struct ath_softc *VAR_1,
     bool VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_0(VAR_1, VAR_3))
   continue;

  VAR_4 = FUNC_1(VAR_1, &VAR_1->tx.txq[VAR_3],
       VAR_2);
  if (VAR_4)
   break;
 }

 return !!VAR_4;
}
