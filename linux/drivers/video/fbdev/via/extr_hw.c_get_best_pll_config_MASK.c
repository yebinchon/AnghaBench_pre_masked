
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct via_pll_config {int dummy; } ;
struct TYPE_4__ {TYPE_1__* chip_info; } ;
struct TYPE_3__ {int gfx_chip_name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct via_pll_config FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct via_pll_config FUNC_2(int VAR_5)
{
 struct via_pll_config VAR_6;

 switch (VAR_3->chip_info->gfx_chip_name) {
 case 140:
 case 136:
  VAR_6 = FUNC_1(VAR_0,
   FUNC_0(VAR_0), VAR_5);
  break;
 case 135:
 case 131:
 case 139:
  VAR_6 = FUNC_1(VAR_2,
   FUNC_0(VAR_2), VAR_5);
  break;
 case 137:
 case 138:
 case 134:
 case 133:
 case 132:
 case 130:
  VAR_6 = FUNC_1(VAR_1,
   FUNC_0(VAR_1), VAR_5);
  break;
 case 129:
 case 128:
  VAR_6 = FUNC_1(VAR_4,
   FUNC_0(VAR_4), VAR_5);
  break;
 }

 return VAR_6;
}
