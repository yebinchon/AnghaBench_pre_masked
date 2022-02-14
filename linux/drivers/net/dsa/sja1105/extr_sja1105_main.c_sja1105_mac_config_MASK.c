
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_private {int dummy; } ;
struct phylink_link_state {int speed; int interface; } ;
struct dsa_switch {int dev; struct sja1105_private* priv; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sja1105_private*,int,int ) ;
 scalar_t__ FUNC_2 (struct sja1105_private*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_1, int VAR_2,
          unsigned int VAR_3,
          const struct phylink_link_state *VAR_4)
{
 struct sja1105_private *VAR_5 = VAR_1->priv;

 if (FUNC_2(VAR_5, VAR_2, VAR_4->interface))
  return;

 if (VAR_3 == VAR_0) {
  FUNC_0(VAR_1->dev, "In-band AN not supported!\n");
  return;
 }

 FUNC_1(VAR_5, VAR_2, VAR_4->speed);
}
