
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv88e6xxx_chip {int dummy; } ;
struct dsa_switch {int dev; struct mv88e6xxx_chip* priv; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static void FUNC_4(struct dsa_switch *VAR_0, int VAR_1,
      u8 VAR_2)
{
 struct mv88e6xxx_chip *VAR_3 = VAR_0->priv;
 int VAR_4;

 FUNC_2(VAR_3);
 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 FUNC_3(VAR_3);

 if (VAR_4)
  FUNC_0(VAR_0->dev, "p%d: failed to update state\n", VAR_1);
}
