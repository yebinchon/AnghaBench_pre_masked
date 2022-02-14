
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct pmic_mpp_state {int dummy; } ;
struct pmic_mpp_pad {int out_value; size_t function; char* power_source; char* aout_level; size_t pullup; char* dtest; scalar_t__ paired; scalar_t__ has_pullup; scalar_t__ output_enabled; scalar_t__ input_enabled; int is_enabled; } ;
struct pinctrl_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {struct pmic_mpp_pad* drv_data; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pmic_mpp_state* FUNC_0 (struct pinctrl_dev*) ;
 char** VAR_3 ;
 int FUNC_1 (struct pmic_mpp_state*,struct pmic_mpp_pad*,int ) ;
 int FUNC_2 (struct seq_file*,char*,char const* const) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_4(struct pinctrl_dev *VAR_4,
         struct seq_file *VAR_5, unsigned VAR_6)
{
 struct pmic_mpp_state *VAR_7 = FUNC_0(VAR_4);
 struct pmic_mpp_pad *VAR_8;
 int VAR_9;

 static const char *const VAR_10[] = {
  "0.6kOhm", "10kOhm", "30kOhm", "Disabled"
 };

 VAR_8 = VAR_4->desc->pins[VAR_6].drv_data;

 FUNC_2(VAR_5, " mpp%-2d:", VAR_6 + VAR_0);

 if (!VAR_8->is_enabled) {
  FUNC_3(VAR_5, " ---");
 } else {

  if (VAR_8->input_enabled) {
   VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_1);
   if (VAR_9 < 0)
    return;

   VAR_9 &= VAR_2;
   VAR_8->out_value = VAR_9;
  }

  FUNC_2(VAR_5, " %-4s", VAR_8->output_enabled ? "out" : "in");
  FUNC_2(VAR_5, " %-7s", VAR_3[VAR_8->function]);
  FUNC_2(VAR_5, " vin-%d", VAR_8->power_source);
  FUNC_2(VAR_5, " %d", VAR_8->aout_level);
  if (VAR_8->has_pullup)
   FUNC_2(VAR_5, " %-8s", VAR_10[VAR_8->pullup]);
  FUNC_2(VAR_5, " %-4s", VAR_8->out_value ? "high" : "low");
  if (VAR_8->dtest)
   FUNC_2(VAR_5, " dtest%d", VAR_8->dtest);
  if (VAR_8->paired)
   FUNC_3(VAR_5, " paired");
 }
}
