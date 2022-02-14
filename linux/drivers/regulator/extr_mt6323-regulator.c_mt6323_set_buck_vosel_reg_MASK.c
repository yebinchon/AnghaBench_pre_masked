
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct mt6397_chip {int regmap; } ;
struct TYPE_4__ {int vsel_reg; } ;
struct TYPE_5__ {int vselctrl_mask; int vselon_reg; TYPE_1__ desc; scalar_t__ vselctrl_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 struct mt6397_chip* FUNC_1 (int ) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct mt6397_chip *VAR_4 = FUNC_1(VAR_3->dev.parent);
 int VAR_5;
 u32 VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2[VAR_5].vselctrl_reg) {
   if (FUNC_2(VAR_4->regmap,
    VAR_2[VAR_5].vselctrl_reg,
    &VAR_6) < 0) {
    FUNC_0(&VAR_3->dev,
     "Failed to read buck ctrl\n");
    return -VAR_0;
   }

   if (VAR_6 & VAR_2[VAR_5].vselctrl_mask) {
    VAR_2[VAR_5].desc.vsel_reg =
    VAR_2[VAR_5].vselon_reg;
   }
  }
 }

 return 0;
}
