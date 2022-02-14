
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iavf_adapter {int link_speed; int link_up; struct net_device* netdev; } ;
 int FUNC_0 (struct net_device*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct iavf_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 char *VAR_2 = "Unknown ";

 if (!VAR_0->link_up) {
  FUNC_0(VAR_1, "NIC Link is Down\n");
  return;
 }

 switch (VAR_0->link_speed) {
 case 128:
  VAR_2 = "40 G";
  break;
 case 129:
  VAR_2 = "25 G";
  break;
 case 130:
  VAR_2 = "20 G";
  break;
 case 132:
  VAR_2 = "10 G";
  break;
 case 131:
  VAR_2 = "1000 M";
  break;
 case 133:
  VAR_2 = "100 M";
  break;
 default:
  break;
 }

 FUNC_0(VAR_1, "NIC Link is Up %sbps Full Duplex\n", VAR_2);
}
