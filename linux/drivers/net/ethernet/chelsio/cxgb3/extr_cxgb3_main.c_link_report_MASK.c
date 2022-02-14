
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; scalar_t__ duplex; } ;
struct port_info {TYPE_1__ link_config; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (struct net_device*,char*,...) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 if (!FUNC_2(VAR_1))
  FUNC_0(VAR_1, "link down\n");
 else {
  const char *VAR_2 = "10Mbps";
  const struct port_info *VAR_3 = FUNC_1(VAR_1);

  switch (VAR_3->link_config.speed) {
  case 128:
   VAR_2 = "10Gbps";
   break;
  case 129:
   VAR_2 = "1000Mbps";
   break;
  case 130:
   VAR_2 = "100Mbps";
   break;
  }

  FUNC_0(VAR_1, "link up, %s, %s-duplex\n",
       VAR_2, VAR_3->link_config.duplex == VAR_0
       ? "full" : "half");
 }
}
