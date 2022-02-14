
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sja1105_port_status_mac {int agedrp; int spcerr; int drpnona664err; int policeerr; int bagdrop; int lendrop; int portdrop; int ageprior; int spcprior; int pcfbagdrop; int domerr; int intcyov; int invtyp; int memerr; int memov; int nomaster; int priorerr; int tctimeout; int sizeerr; int typeerr; int n_miierr; int n_alignerr; int n_soferr; int n_runt; } ;


 int FUNC_0 (int *,int *,int,int,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0,
          struct sja1105_port_status_mac *VAR_1)
{

 u32 *VAR_2 = VAR_0;

 FUNC_0(VAR_2 + 0x0, &VAR_1->n_runt, 31, 24, 4);
 FUNC_0(VAR_2 + 0x0, &VAR_1->n_soferr, 23, 16, 4);
 FUNC_0(VAR_2 + 0x0, &VAR_1->n_alignerr, 15, 8, 4);
 FUNC_0(VAR_2 + 0x0, &VAR_1->n_miierr, 7, 0, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->typeerr, 27, 27, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->sizeerr, 26, 26, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->tctimeout, 25, 25, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->priorerr, 24, 24, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->nomaster, 23, 23, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->memov, 22, 22, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->memerr, 21, 21, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->invtyp, 19, 19, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->intcyov, 18, 18, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->domerr, 17, 17, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->pcfbagdrop, 16, 16, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->spcprior, 15, 12, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->ageprior, 11, 8, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->portdrop, 6, 6, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->lendrop, 5, 5, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->bagdrop, 4, 4, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->policeerr, 3, 3, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->drpnona664err, 2, 2, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->spcerr, 1, 1, 4);
 FUNC_0(VAR_2 + 0x1, &VAR_1->agedrp, 0, 0, 4);
}
