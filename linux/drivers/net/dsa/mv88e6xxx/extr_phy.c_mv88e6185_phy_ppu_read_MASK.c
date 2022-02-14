
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;
struct mii_bus {int dummy; } ;


 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int,int *) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_0, struct mii_bus *VAR_1,
      int VAR_2, int VAR_3, u16 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 if (!VAR_5) {
  VAR_5 = FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4);
  FUNC_1(VAR_0);
 }

 return VAR_5;
}
