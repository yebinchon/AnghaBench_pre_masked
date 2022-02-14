
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dummy; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_0, int VAR_1,
         bool VAR_2, bool VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_0, VAR_1, VAR_3);
}
