
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w5300_priv {int link_gpio; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 struct w5300_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct w5300_priv*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 struct w5300_priv *VAR_5 = FUNC_1(VAR_4);

 if (FUNC_5(VAR_4)) {
  if (FUNC_0(VAR_5->link_gpio) != 0) {
   FUNC_4(VAR_5, VAR_1, VAR_4, "link is up\n");
   FUNC_3(VAR_4);
  } else {
   FUNC_4(VAR_5, VAR_1, VAR_4, "link is down\n");
   FUNC_2(VAR_4);
  }
 }

 return VAR_0;
}
