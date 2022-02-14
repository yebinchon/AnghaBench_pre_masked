
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipvl_port {int dev; scalar_t__ count; } ;
struct ipvl_dev {int pcpu_stats; struct net_device* phy_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ipvl_port* FUNC_2 (struct net_device*) ;
 struct ipvl_dev* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct ipvl_dev *VAR_1 = FUNC_3(VAR_0);
 struct net_device *VAR_2 = VAR_1->phy_dev;
 struct ipvl_port *VAR_3;

 FUNC_0(VAR_1->pcpu_stats);

 VAR_3 = FUNC_2(VAR_2);
 VAR_3->count -= 1;
 if (!VAR_3->count)
  FUNC_1(VAR_3->dev);
}
