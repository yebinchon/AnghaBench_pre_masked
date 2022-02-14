
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dev; int reg_lock; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mv88e6xxx_chip *VAR_0)
{
 if (FUNC_3(!FUNC_2(&VAR_0->reg_lock))) {
  FUNC_0(VAR_0->dev, "Switch registers lock not held!\n");
  FUNC_1();
 }
}
