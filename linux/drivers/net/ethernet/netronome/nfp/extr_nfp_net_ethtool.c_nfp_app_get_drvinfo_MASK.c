
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_app {int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; } ;


 struct nfp_app* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nfp_app*,int ,char*,struct ethtool_drvinfo*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_0, struct ethtool_drvinfo *VAR_1)
{
 struct nfp_app *VAR_2 = FUNC_0(VAR_0);

 FUNC_3(VAR_1->bus_info, FUNC_2(VAR_2->pdev),
  sizeof(VAR_1->bus_info));
 FUNC_1(VAR_2, VAR_2->pdev, "*", VAR_1);
}
