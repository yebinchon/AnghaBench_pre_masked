
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mv88e6xxx_chip {TYPE_1__* ports; } ;
struct TYPE_2__ {int cmode; } ;







 int FUNC_0 (struct mv88e6xxx_chip*,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_0, int VAR_1, u8 VAR_2,
      bool VAR_3)
{
 u8 VAR_4 = VAR_0->ports[VAR_1].cmode;

 switch (VAR_4) {
 case 129:
 case 132:
 case 131:
  return FUNC_1(VAR_0, VAR_2, VAR_3);
 case 128:
 case 130:
  return FUNC_0(VAR_0, VAR_2, VAR_3);
 }

 return 0;
}
