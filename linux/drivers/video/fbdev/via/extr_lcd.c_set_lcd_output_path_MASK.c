
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chip_info; } ;
struct TYPE_3__ {int gfx_chip_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,scalar_t__) ;
 TYPE_2__* VAR_10 ;

__attribute__((used)) static void FUNC_2(int VAR_11, int VAR_12)
{
 switch (VAR_12) {
 case 132:
  if ((VAR_7 == VAR_10->chip_info->gfx_chip_name)
      || (VAR_8 ==
      VAR_10->chip_info->gfx_chip_name))
   FUNC_1(VAR_5, VAR_9, 0x84,
           VAR_3 + VAR_2 + VAR_1 + VAR_0);

 case 129:
 case 128:
 case 131:
 case 130:
  if (VAR_11 == VAR_6)
   FUNC_0(VAR_4, VAR_9, 0x00);
  break;
 }
}
