
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink_link_state {int speed; int duplex; int link; int interface; int advertising; } ;
struct mv88e6xxx_chip {int dummy; } ;
struct dsa_switch {int dev; struct mv88e6xxx_chip* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct dsa_switch*,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int,int,int,int,int ) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct dsa_switch *VAR_8, int VAR_9,
     unsigned int VAR_10,
     const struct phylink_link_state *VAR_11)
{
 struct mv88e6xxx_chip *VAR_12 = VAR_8->priv;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 if ((VAR_10 == VAR_5) && FUNC_1(VAR_8, VAR_9))
  return;

 if (VAR_10 == VAR_4) {
  VAR_15 = VAR_2;
  VAR_13 = VAR_11->speed;
  VAR_14 = VAR_11->duplex;
 } else if (!FUNC_1(VAR_8, VAR_9)) {
  VAR_15 = VAR_11->link;
  VAR_13 = VAR_11->speed;
  VAR_14 = VAR_11->duplex;
 } else {
  VAR_13 = VAR_7;
  VAR_14 = VAR_0;
  VAR_15 = VAR_3;
 }
 VAR_16 = !!FUNC_5(VAR_11->advertising, VAR_6);

 FUNC_3(VAR_12);
 VAR_17 = FUNC_2(VAR_12, VAR_9, VAR_15, VAR_13, VAR_14, VAR_16,
           VAR_11->interface);
 FUNC_4(VAR_12);

 if (VAR_17 && VAR_17 != -VAR_1)
  FUNC_0(VAR_8->dev, "p%d: failed to configure MAC\n", VAR_9);
}
