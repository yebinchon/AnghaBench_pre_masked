
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct emac_board_info {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct emac_board_info*) ;
 struct emac_board_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct emac_board_info *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1);

 return 0;
}
