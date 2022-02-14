
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int,int ,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int,int ) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_5(struct mv88e6xxx_chip *VAR_1)
{
 int VAR_2;
 int VAR_3;

 if (FUNC_0(VAR_1))
  return 0;


 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1); VAR_2++) {
  VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1); VAR_2++) {
  VAR_3 = FUNC_2(VAR_1, 0xf, VAR_2, 0, 0x01c0);
  if (VAR_3)
   return VAR_3;
 }

 return FUNC_4(VAR_1);
}
