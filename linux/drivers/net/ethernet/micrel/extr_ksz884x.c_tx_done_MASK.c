
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ksz_hw {int dev_count; TYPE_1__* port_info; } ;
struct dev_info {struct ksz_hw hw; } ;
struct TYPE_2__ {struct net_device* pdev; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct dev_info*,int) ;

__attribute__((used)) static void FUNC_4(struct dev_info *VAR_0)
{
 struct ksz_hw *VAR_1 = &VAR_0->hw;
 int VAR_2;

 FUNC_3(VAR_0, 1);

 for (VAR_2 = 0; VAR_2 < VAR_1->dev_count; VAR_2++) {
  struct net_device *VAR_3 = VAR_1->port_info[VAR_2].pdev;

  if (FUNC_1(VAR_3) && FUNC_0(VAR_3))
   FUNC_2(VAR_3);
 }
}
