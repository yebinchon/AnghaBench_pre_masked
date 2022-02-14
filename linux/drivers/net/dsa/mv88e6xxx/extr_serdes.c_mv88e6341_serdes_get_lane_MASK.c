
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

u8 FUNC_0(struct mv88e6xxx_chip *VAR_4, int VAR_5)
{
 u8 VAR_6 = VAR_4->ports[VAR_5].cmode;
 u8 VAR_7 = 0;

 switch (VAR_5) {
 case 5:
  if (VAR_6 == VAR_1 ||
      VAR_6 == VAR_3 ||
      VAR_6 == VAR_2)
   VAR_7 = VAR_0;
  break;
 }

 return VAR_7;
}
