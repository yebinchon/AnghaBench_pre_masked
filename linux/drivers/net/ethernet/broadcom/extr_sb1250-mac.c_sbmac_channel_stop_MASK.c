
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmac_softc {scalar_t__ sbm_state; int sbm_txdma; int sbm_rxdma; int sbm_macenable; int sbm_imr; int sbm_rxfilter; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct sbmac_softc *VAR_1)
{


 if (VAR_1->sbm_state == VAR_0)
  return;



 FUNC_0(0, VAR_1->sbm_rxfilter);
 FUNC_0(0, VAR_1->sbm_imr);







 FUNC_0(0, VAR_1->sbm_macenable);



 VAR_1->sbm_state = VAR_0;





 FUNC_1(&(VAR_1->sbm_rxdma));
 FUNC_1(&(VAR_1->sbm_txdma));



 FUNC_2(&(VAR_1->sbm_rxdma));
 FUNC_2(&(VAR_1->sbm_txdma));

}
