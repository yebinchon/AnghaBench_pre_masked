
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmac_softc {int sbm_rxdma; int sbm_txdma; int * phy_dev; int napi; } ;
struct net_device {int irq; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 struct sbmac_softc* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sbmac_softc*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_2)
{
 struct sbmac_softc *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(&VAR_3->napi);

 FUNC_5(VAR_3->phy_dev);

 FUNC_8(VAR_3, VAR_1);

 FUNC_3(VAR_2);

 if (VAR_0 > 1)
  FUNC_6("%s: Shutting down ethercard\n", VAR_2->name);

 FUNC_4(VAR_3->phy_dev);
 VAR_3->phy_dev = ((void*)0);
 FUNC_0(VAR_2->irq, VAR_2);

 FUNC_7(&(VAR_3->sbm_txdma));
 FUNC_7(&(VAR_3->sbm_rxdma));

 return 0;
}
