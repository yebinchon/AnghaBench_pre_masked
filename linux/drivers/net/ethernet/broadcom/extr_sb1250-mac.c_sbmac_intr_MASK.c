
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sbmac_softc {int sbm_rxdma; int napi; int sbm_imr; int sbm_txdma; int sbm_isr; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 struct sbmac_softc* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sbmac_softc*,int *,int,int ) ;
 int FUNC_7 (struct sbmac_softc*,int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5,void *VAR_6)
{
 struct net_device *VAR_7 = (struct net_device *) VAR_6;
 struct sbmac_softc *VAR_8 = FUNC_5(VAR_7);
 uint64_t VAR_9;
 int VAR_10 = 0;






 VAR_9 = FUNC_2(VAR_8->sbm_isr) & ~VAR_0;

 if (VAR_9 == 0)
  return FUNC_0(0);
 VAR_10 = 1;





 if (VAR_9 & (VAR_1 << VAR_4))
  FUNC_7(VAR_8,&(VAR_8->sbm_txdma), 0);

 if (VAR_9 & (VAR_1 << VAR_3)) {
  if (FUNC_4(&VAR_8->napi)) {
   FUNC_3(0, VAR_8->sbm_imr);
   FUNC_1(&VAR_8->napi);

  }
  else {

   FUNC_6(VAR_8,&(VAR_8->sbm_rxdma),
      VAR_2 * 2, 0);
  }
 }
 return FUNC_0(VAR_10);
}
