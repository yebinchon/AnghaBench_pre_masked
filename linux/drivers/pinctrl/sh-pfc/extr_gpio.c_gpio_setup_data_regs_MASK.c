
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_pfc_chip {TYPE_3__* regs; struct sh_pfc* pfc; } ;
struct sh_pfc {TYPE_2__* info; int dev; } ;
struct pinmux_data_reg {scalar_t__ reg_width; } ;
struct TYPE_6__ {int shadow; struct pinmux_data_reg const* info; } ;
struct TYPE_5__ {unsigned int nr_pins; TYPE_1__* pins; struct pinmux_data_reg* data_regs; } ;
struct TYPE_4__ {scalar_t__ enum_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,unsigned int,int,int ) ;
 int FUNC_1 (struct sh_pfc_chip*,struct pinmux_data_reg const*) ;
 int FUNC_2 (struct sh_pfc_chip*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct sh_pfc_chip *VAR_2)
{
 struct sh_pfc *VAR_3 = VAR_2->pfc;
 const struct pinmux_data_reg *VAR_4;
 unsigned int VAR_5;




 for (VAR_5 = 0; VAR_3->info->data_regs[VAR_5].reg_width; ++VAR_5)
  ;

 VAR_2->regs = FUNC_0(VAR_3->dev, VAR_5, sizeof(*VAR_2->regs),
      VAR_1);
 if (VAR_2->regs == ((void*)0))
  return -VAR_0;

 for (VAR_5 = 0, VAR_4 = VAR_3->info->data_regs; VAR_4->reg_width; ++VAR_5, ++VAR_4) {
  VAR_2->regs[VAR_5].info = VAR_4;
  VAR_2->regs[VAR_5].shadow = FUNC_1(VAR_2, VAR_4);
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->info->nr_pins; VAR_5++) {
  if (VAR_3->info->pins[VAR_5].enum_id == 0)
   continue;

  FUNC_2(VAR_2, VAR_5);
 }

 return 0;
}
