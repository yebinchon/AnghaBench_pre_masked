
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct igbvf_adapter {scalar_t__ link_duplex; int link_speed; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct igbvf_adapter *VAR_1)
{
 FUNC_0(&VAR_1->pdev->dev, "Link is Up %d Mbps %s Duplex\n",
   VAR_1->link_speed,
   VAR_1->link_duplex == VAR_0 ? "Full" : "Half");
}
