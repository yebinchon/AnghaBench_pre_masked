
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int,scalar_t__ const) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;

int FUNC_4(struct mv88e6xxx_chip *VAR_0)
{
 const u16 VAR_1 = FUNC_0(FUNC_3(VAR_0)) - 1;
 int VAR_2, VAR_3;


 for (VAR_2 = 0; VAR_2 < 8; ++VAR_2) {
  VAR_3 = FUNC_2(VAR_0, VAR_2, 0, VAR_1);
  if (VAR_3)
   return VAR_3;
 }


 for (VAR_2 = 0; VAR_2 < 16; ++VAR_2) {
  VAR_3 = FUNC_1(VAR_0, VAR_2, 0);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
