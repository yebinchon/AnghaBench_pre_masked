
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_vtu_entry {int* member; int* state; } ;
struct mv88e6xxx_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,scalar_t__,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_1,
           struct mv88e6xxx_vtu_entry *VAR_2)
{
 u16 VAR_3[3] = { 0 };
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); ++VAR_4) {
  unsigned int VAR_5 = (VAR_4 % 4) * 4;
  unsigned int VAR_6 = VAR_5 + 2;

  VAR_3[VAR_4 / 4] |= (VAR_2->member[VAR_4] & 0x3) << VAR_5;
  VAR_3[VAR_4 / 4] |= (VAR_2->state[VAR_4] & 0x3) << VAR_6;
 }


 for (VAR_4 = 0; VAR_4 < 3; ++VAR_4) {
  u16 VAR_7 = VAR_3[VAR_4];
  int VAR_8;

  VAR_8 = FUNC_0(VAR_1, VAR_0 + VAR_4, VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
