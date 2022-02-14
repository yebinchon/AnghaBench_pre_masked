
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mv88e6xxx_chip {TYPE_1__* ports; } ;
struct TYPE_2__ {scalar_t__ cmode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

u8 FUNC_0(struct mv88e6xxx_chip *VAR_3, int VAR_4)
{
 u8 VAR_5 = VAR_3->ports[VAR_4].cmode;
 u8 VAR_6 = 0;

 if ((VAR_5 == VAR_1) ||
     (VAR_5 == VAR_0) ||
     (VAR_5 == VAR_2))
  VAR_6 = 0xff;

 return VAR_6;
}
