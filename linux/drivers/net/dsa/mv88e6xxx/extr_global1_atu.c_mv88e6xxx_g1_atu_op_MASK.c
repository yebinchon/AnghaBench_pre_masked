
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int ,int*) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int ,int) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_5(struct mv88e6xxx_chip *VAR_3, u16 VAR_4, u16 VAR_5)
{
 u16 VAR_6;
 int VAR_7;


 if (FUNC_4(VAR_3) > 256) {
  VAR_7 = FUNC_0(VAR_3, VAR_4);
  if (VAR_7)
   return VAR_7;
 } else {
  if (FUNC_4(VAR_3) > 64) {

   VAR_7 = FUNC_2(VAR_3, VAR_0,
      &VAR_6);
   if (VAR_7)
    return VAR_7;

   VAR_6 = (VAR_6 & 0x0fff) | ((VAR_4 << 8) & 0xf000);
   VAR_7 = FUNC_3(VAR_3, VAR_0,
       VAR_6);
   if (VAR_7)
    return VAR_7;
  } else if (FUNC_4(VAR_3) > 16) {

   VAR_5 |= (VAR_4 & 0x30) << 4;
  }


  VAR_5 |= VAR_4 & 0xf;
 }

 VAR_7 = FUNC_3(VAR_3, VAR_1,
     VAR_2 | VAR_5);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_3);
}
