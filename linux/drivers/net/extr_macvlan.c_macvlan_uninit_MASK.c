
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct macvlan_port {int dev; scalar_t__ count; } ;
struct macvlan_dev {int pcpu_stats; struct macvlan_port* port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct macvlan_port*,struct macvlan_dev*) ;
 int FUNC_2 (int ) ;
 struct macvlan_dev* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct macvlan_dev *VAR_1 = FUNC_3(VAR_0);
 struct macvlan_port *VAR_2 = VAR_1->port;

 FUNC_0(VAR_1->pcpu_stats);

 FUNC_1(VAR_2, VAR_1);
 VAR_2->count -= 1;
 if (!VAR_2->count)
  FUNC_2(VAR_2->dev);
}
