
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mv88e6xxx_chip {TYPE_1__* ports; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int cmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct mv88e6xxx_chip*,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int*) ;

irqreturn_t FUNC_2(struct mv88e6xxx_chip *VAR_4, int VAR_5,
     u8 VAR_6)
{
 u8 VAR_7 = VAR_4->ports[VAR_5].cmode;
 irqreturn_t VAR_8 = VAR_1;
 u16 VAR_9;
 int VAR_10;

 switch (VAR_7) {
 case 128:
 case 130:
 case 129:
  VAR_10 = FUNC_1(VAR_4, VAR_6, &VAR_9);
  if (VAR_10)
   return VAR_8;
  if (VAR_9 & (VAR_2 |
         VAR_3)) {
   VAR_8 = VAR_0;
   FUNC_0(VAR_4, VAR_5, VAR_6);
  }
 }

 return VAR_8;
}
