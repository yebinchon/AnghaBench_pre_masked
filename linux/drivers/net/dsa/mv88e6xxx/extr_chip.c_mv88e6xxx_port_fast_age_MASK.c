
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dummy; } ;
struct dsa_switch {int dev; struct mv88e6xxx_chip* priv; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,int,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static void FUNC_4(struct dsa_switch *VAR_0, int VAR_1)
{
 struct mv88e6xxx_chip *VAR_2 = VAR_0->priv;
 int VAR_3;

 FUNC_2(VAR_2);
 VAR_3 = FUNC_1(VAR_2, 0, VAR_1, 0);
 FUNC_3(VAR_2);

 if (VAR_3)
  FUNC_0(VAR_0->dev, "p%d: failed to flush ATU\n", VAR_1);
}
