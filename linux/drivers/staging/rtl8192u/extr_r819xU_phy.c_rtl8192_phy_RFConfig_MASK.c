
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int rf_chip; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (int ,char*) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_1(VAR_1);

 switch (VAR_2->rf_chip) {
 case 128:
  FUNC_2(VAR_1);
  break;
 default:
  FUNC_0(VAR_0, "error chip id\n");
  break;
 }
}
