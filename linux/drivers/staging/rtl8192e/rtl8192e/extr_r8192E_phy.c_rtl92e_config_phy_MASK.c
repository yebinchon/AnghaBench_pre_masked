
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int rf_chip; } ;
struct net_device {int dummy; } ;






 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

bool FUNC_3(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_2(VAR_0);
 bool VAR_2 = 1;

 switch (VAR_1->rf_chip) {
 case 131:
  break;
 case 130:
  VAR_2 = FUNC_1(VAR_0);
  break;

 case 129:
  break;
 case 128:
  break;

 default:
  FUNC_0(VAR_0, "Invalid RF Chip ID.\n");
  break;
 }
 return VAR_2;
}
