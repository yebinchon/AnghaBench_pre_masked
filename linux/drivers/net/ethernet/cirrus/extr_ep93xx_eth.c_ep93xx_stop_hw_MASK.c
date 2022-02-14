
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ep93xx_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct ep93xx_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ep93xx_priv*,int ) ;
 int FUNC_4 (struct ep93xx_priv*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 struct ep93xx_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_4(VAR_3, VAR_0, VAR_1);
 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  if ((FUNC_3(VAR_3, VAR_0) & VAR_1) == 0)
   break;
  FUNC_0(1);
 }

 if (VAR_4 == 10)
  FUNC_2("hw failed to reset\n");
}
