
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bcmgenet_priv {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct bcmgenet_priv *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->dev;
 int VAR_5 = 0;

 while (!(FUNC_0(VAR_3, VAR_1)
  & VAR_2)) {
  VAR_5++;
  if (VAR_5 > 5) {
   FUNC_2(VAR_4, "polling wol mode timeout\n");
   return -VAR_0;
  }
  FUNC_1(1);
 }

 return VAR_5;
}
