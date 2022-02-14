
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dev; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 scalar_t__ FUNC_3 (struct mv88e6xxx_chip*,int,int) ;

__attribute__((used)) static void FUNC_4(struct dsa_switch *VAR_0, int VAR_1)
{
 struct mv88e6xxx_chip *VAR_2 = VAR_0->priv;

 FUNC_1(VAR_2);
 if (FUNC_3(VAR_2, VAR_1, 0))
  FUNC_0(VAR_2->dev, "failed to power off SERDES\n");
 FUNC_2(VAR_2);
}
