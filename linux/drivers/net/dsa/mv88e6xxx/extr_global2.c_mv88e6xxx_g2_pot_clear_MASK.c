
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dummy; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,int,int ) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_0)
{
 int VAR_1, VAR_2;


 for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1, 0);
  if (VAR_2)
   break;
 }

 return VAR_2;
}
