
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; size_t fc; } ;
struct port_info {TYPE_1__ link_cfg; } ;
struct net_device {int name; } ;


 int FUNC_0 (struct net_device*,char*,...) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 if (!FUNC_2(VAR_0))
  FUNC_0(VAR_0, "link down\n");
 else {
  static const char *VAR_1[] = { "no", "Rx", "Tx", "Tx/Rx" };

  const char *VAR_2;
  const struct port_info *VAR_3 = FUNC_1(VAR_0);

  switch (VAR_3->link_cfg.speed) {
  case 100:
   VAR_2 = "100Mbps";
   break;
  case 1000:
   VAR_2 = "1Gbps";
   break;
  case 10000:
   VAR_2 = "10Gbps";
   break;
  case 25000:
   VAR_2 = "25Gbps";
   break;
  case 40000:
   VAR_2 = "40Gbps";
   break;
  case 50000:
   VAR_2 = "50Gbps";
   break;
  case 100000:
   VAR_2 = "100Gbps";
   break;
  default:
   FUNC_3("%s: unsupported speed: %d\n",
    VAR_0->name, VAR_3->link_cfg.speed);
   return;
  }

  FUNC_0(VAR_0, "link up, %s, full-duplex, %s PAUSE\n", VAR_2,
       VAR_1[VAR_3->link_cfg.fc]);
 }
}
