
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int * rng_task; struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int ,struct ath_softc*,char*) ;

void FUNC_3(struct ath_softc *VAR_1)
{
 struct ath_hw *VAR_2 = VAR_1->sc_ah;

 if (VAR_1->rng_task)
  return;

 if (!FUNC_0(VAR_2))
  return;

 VAR_1->rng_task = FUNC_2(VAR_0, VAR_1, "ath9k-hwrng");
 if (FUNC_1(VAR_1->rng_task))
  VAR_1->rng_task = ((void*)0);
}
