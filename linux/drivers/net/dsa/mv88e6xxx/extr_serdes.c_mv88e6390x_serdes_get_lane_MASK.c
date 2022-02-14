
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

u8 FUNC_0(struct mv88e6xxx_chip *VAR_13, int VAR_14)
{
 u8 VAR_15 = VAR_13->ports[VAR_14].cmode;
 u8 VAR_16 = VAR_13->ports[10].cmode;
 u8 VAR_17 = VAR_13->ports[9].cmode;
 u8 VAR_18 = 0;

 switch (VAR_14) {
 case 2:
  if (VAR_17 == VAR_8 ||
      VAR_17 == VAR_11 ||
      VAR_17 == VAR_9)
   if (VAR_15 == VAR_8)
    VAR_18 = VAR_5;
  break;
 case 3:
  if (VAR_17 == VAR_8 ||
      VAR_17 == VAR_11 ||
      VAR_17 == VAR_9 ||
      VAR_17 == VAR_10)
   if (VAR_15 == VAR_8)
    VAR_18 = VAR_6;
  break;
 case 4:
  if (VAR_17 == VAR_8 ||
      VAR_17 == VAR_11 ||
      VAR_17 == VAR_9 ||
      VAR_17 == VAR_10)
   if (VAR_15 == VAR_8)
    VAR_18 = VAR_7;
  break;
 case 5:
  if (VAR_16 == VAR_8 ||
      VAR_16 == VAR_11 ||
      VAR_16 == VAR_9)
   if (VAR_15 == VAR_8)
    VAR_18 = VAR_1;
  break;
 case 6:
  if (VAR_16 == VAR_8 ||
      VAR_16 == VAR_11 ||
      VAR_16 == VAR_9 ||
      VAR_16 == VAR_10)
   if (VAR_15 == VAR_8)
    VAR_18 = VAR_2;
  break;
 case 7:
  if (VAR_16 == VAR_8 ||
      VAR_16 == VAR_11 ||
      VAR_16 == VAR_9 ||
      VAR_16 == VAR_10)
   if (VAR_15 == VAR_8)
    VAR_18 = VAR_3;
  break;
 case 9:
  if (VAR_17 == VAR_8 ||
      VAR_17 == VAR_11 ||
      VAR_17 == VAR_9 ||
      VAR_17 == VAR_12 ||
      VAR_17 == VAR_10)
   VAR_18 = VAR_4;
  break;
 case 10:
  if (VAR_16 == VAR_8 ||
      VAR_16 == VAR_11 ||
      VAR_16 == VAR_9 ||
      VAR_16 == VAR_12 ||
      VAR_16 == VAR_10)
   VAR_18 = VAR_0;
  break;
 }

 return VAR_18;
}
