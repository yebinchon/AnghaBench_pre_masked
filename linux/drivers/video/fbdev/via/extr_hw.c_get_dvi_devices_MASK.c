
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* chip_info; } ;
struct TYPE_3__ {int gfx_chip_name; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static u32 FUNC_0(int VAR_8)
{
 switch (VAR_8) {
 case 130:
  return VAR_1 | VAR_3;

 case 129:
  if (VAR_7->chip_info->gfx_chip_name == VAR_0)
   return VAR_4;
  else
   return VAR_2;

 case 132:
  if (VAR_7->chip_info->gfx_chip_name == VAR_0)
   return 0;
  else
   return VAR_6 | VAR_1;

 case 131:
  if (VAR_7->chip_info->gfx_chip_name == VAR_0)
   return 0;
  else
   return VAR_2 | VAR_5;

 case 128:
  return VAR_5;
 }

 return 0;
}
