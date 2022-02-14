
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct madera_pin_private {struct madera_pin_chip* chip; } ;
struct madera_pin_chip {int n_pin_groups; TYPE_1__* pin_groups; } ;
struct TYPE_5__ {unsigned int func; int name; } ;
struct TYPE_4__ {int n_pins; unsigned int* pins; int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct madera_pin_private *VAR_1,
       struct seq_file *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 const struct madera_pin_chip *VAR_5 = VAR_1->chip;
 int VAR_6, VAR_7;

 if (VAR_4 != 0) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); ++VAR_6) {
   if (VAR_0[VAR_6].func == VAR_4) {
    FUNC_1(VAR_2, " FN=%s",
        VAR_0[VAR_6].name);
    return;
   }
  }
  return;
 }


 for (VAR_6 = 0; VAR_6 < VAR_5->n_pin_groups; ++VAR_6) {
  for (VAR_7 = 0; VAR_7 < VAR_5->pin_groups[VAR_6].n_pins; ++VAR_7) {
   if (VAR_5->pin_groups[VAR_6].pins[VAR_7] == VAR_3) {
    FUNC_1(VAR_2, " FN=%s",
        VAR_5->pin_groups[VAR_6].name);
    return;
   }
  }
 }
}
