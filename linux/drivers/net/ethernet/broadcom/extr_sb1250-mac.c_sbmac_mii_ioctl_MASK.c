
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmac_softc {int phy_dev; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 struct sbmac_softc* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct sbmac_softc *VAR_4 = FUNC_0(VAR_1);

 if (!FUNC_1(VAR_1) || !VAR_4->phy_dev)
  return -VAR_0;

 return FUNC_2(VAR_4->phy_dev, VAR_2, VAR_3);
}
