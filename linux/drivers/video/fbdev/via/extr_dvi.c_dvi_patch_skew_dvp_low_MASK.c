
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
 int FUNC_0 (int ,int ,int,scalar_t__) ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static void FUNC_1(void)
{
 switch (VAR_6->chip_info->gfx_chip_name) {
 case 130:
  {
   FUNC_0(VAR_4, VAR_5, 0x03, VAR_0 + VAR_1);
   break;
  }

 case 128:
  {
   FUNC_0(VAR_4, VAR_5, 0x08,
           VAR_0 + VAR_1 + VAR_2 + VAR_3);
   break;
  }

 case 129:
  {
   FUNC_0(VAR_4, VAR_5, 0x0F,
           VAR_0 + VAR_1 + VAR_2 + VAR_3);
   break;
  }

 default:
  {
   break;
  }
 }
}
