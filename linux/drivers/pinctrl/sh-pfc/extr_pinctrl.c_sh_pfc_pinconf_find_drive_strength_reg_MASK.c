
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sh_pfc {TYPE_1__* info; } ;
struct pinmux_drive_reg_field {unsigned int size; unsigned int pin; unsigned int offset; } ;
struct pinmux_drive_reg {scalar_t__ reg; struct pinmux_drive_reg_field* fields; } ;
struct TYPE_2__ {struct pinmux_drive_reg* drive_regs; } ;


 unsigned int FUNC_0 (struct pinmux_drive_reg_field*) ;

__attribute__((used)) static u32 FUNC_1(struct sh_pfc *VAR_0,
  unsigned int VAR_1, unsigned int *VAR_2, unsigned int *VAR_3)
{
 const struct pinmux_drive_reg_field *VAR_4;
 const struct pinmux_drive_reg *VAR_5;
 unsigned int VAR_6;

 for (VAR_5 = VAR_0->info->drive_regs; VAR_5->reg; ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->fields); ++VAR_6) {
   VAR_4 = &VAR_5->fields[VAR_6];

   if (VAR_4->size && VAR_4->pin == VAR_1) {
    *VAR_2 = VAR_4->offset;
    *VAR_3 = VAR_4->size;

    return VAR_5->reg;
   }
  }
 }

 return 0;
}
