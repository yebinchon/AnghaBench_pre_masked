
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct net_device {int dummy; } ;
struct emac_board_info {int membase; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct emac_board_info* FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct emac_board_info *VAR_2 = FUNC_4(VAR_1);

 FUNC_7(VAR_1);
 FUNC_6(&VAR_0->dev);
 FUNC_0(VAR_2->clk);
 FUNC_3(VAR_2->membase);
 FUNC_2(VAR_1);

 FUNC_1(&VAR_0->dev, "released and freed device\n");
 return 0;
}
