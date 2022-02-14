
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ep93xx_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct ep93xx_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ep93xx_priv*,int ) ;
 int FUNC_4 (struct ep93xx_priv*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5, int VAR_6, int VAR_7)
{
 struct ep93xx_priv *VAR_8 = FUNC_1(VAR_5);
 int VAR_9;
 int VAR_10;

 FUNC_4(VAR_8, VAR_0, VAR_1 | (VAR_6 << 5) | VAR_7);

 for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
  if ((FUNC_3(VAR_8, VAR_3) & VAR_4) == 0)
   break;
  FUNC_0(1);
 }

 if (VAR_10 == 10) {
  FUNC_2("mdio read timed out\n");
  VAR_9 = 0xffff;
 } else {
  VAR_9 = FUNC_3(VAR_8, VAR_2);
 }

 return VAR_9;
}
