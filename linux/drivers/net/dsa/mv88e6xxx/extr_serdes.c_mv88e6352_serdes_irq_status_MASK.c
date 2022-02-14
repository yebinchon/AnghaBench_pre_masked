
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,int*) ;

irqreturn_t FUNC_2(struct mv88e6xxx_chip *VAR_4, int VAR_5,
     u8 VAR_6)
{
 irqreturn_t VAR_7 = VAR_1;
 u16 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_3, &VAR_8);
 if (VAR_9)
  return VAR_7;

 if (VAR_8 & VAR_2) {
  VAR_7 = VAR_0;
  FUNC_0(VAR_4, VAR_5);
 }

 return VAR_7;
}
