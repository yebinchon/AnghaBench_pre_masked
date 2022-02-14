
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,scalar_t__,unsigned int*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_1, u8 *VAR_2)
{
 u16 VAR_3[2];
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < 2; ++VAR_4) {
  u16 *VAR_5 = &VAR_3[VAR_4];
  int VAR_6;

  VAR_6 = FUNC_0(VAR_1, VAR_0 + VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;
 }


 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); ++VAR_4) {
  unsigned int VAR_7 = (VAR_4 % 8) * 2;

  VAR_2[VAR_4] = (VAR_3[VAR_4 / 8] >> VAR_7) & 0x3;
 }

 return 0;
}
