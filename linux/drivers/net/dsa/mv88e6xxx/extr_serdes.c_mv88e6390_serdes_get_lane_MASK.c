
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mv88e6xxx_chip {TYPE_1__* ports; } ;
struct TYPE_2__ {int cmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

u8 FUNC_0(struct mv88e6xxx_chip *VAR_5, int VAR_6)
{
 u8 VAR_7 = VAR_5->ports[VAR_6].cmode;
 u8 VAR_8 = 0;

 switch (VAR_6) {
 case 9:
  if (VAR_7 == VAR_2 ||
      VAR_7 == VAR_4 ||
      VAR_7 == VAR_3)
   VAR_8 = VAR_1;
  break;
 case 10:
  if (VAR_7 == VAR_2 ||
      VAR_7 == VAR_4 ||
      VAR_7 == VAR_3)
   VAR_8 = VAR_0;
  break;
 }

 return VAR_8;
}
