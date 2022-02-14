
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sis190_private {int phy_task; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 struct sis190_private* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 struct sis190_private* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct sis190_private *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 struct net_device *VAR_4 = VAR_3->dev;

 if (FUNC_1(FUNC_2(VAR_4)))
  FUNC_3(&VAR_3->phy_task);
}
