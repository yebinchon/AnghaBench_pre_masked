
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv88e6xxx_chip {int dummy; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int,int ) ;
 int FUNC_4 (struct mv88e6xxx_chip*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct mv88e6xxx_chip *VAR_0, int VAR_1,
      bool VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  return 0;

 if (VAR_2) {
  VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_3);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_3);
 } else {
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_3);
 }

 return VAR_4;
}
