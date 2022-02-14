
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptp_pin_desc {int func; unsigned int chan; } ;
struct ptp_clock {int pincfg_mux; TYPE_1__* info; } ;
typedef enum ptp_pin_function { ____Placeholder_ptp_pin_function } ptp_pin_function ;
struct TYPE_2__ {int n_pins; struct ptp_pin_desc* pin_config; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ptp_clock *VAR_0,
   enum ptp_pin_function VAR_1, unsigned int VAR_2)
{
 struct ptp_pin_desc *VAR_3 = ((void*)0);
 int VAR_4;

 FUNC_0(&VAR_0->pincfg_mux);
 for (VAR_4 = 0; VAR_4 < VAR_0->info->n_pins; VAR_4++) {
  if (VAR_0->info->pin_config[VAR_4].func == VAR_1 &&
      VAR_0->info->pin_config[VAR_4].chan == VAR_2) {
   VAR_3 = &VAR_0->info->pin_config[VAR_4];
   break;
  }
 }
 FUNC_1(&VAR_0->pincfg_mux);

 return VAR_3 ? VAR_4 : -1;
}
