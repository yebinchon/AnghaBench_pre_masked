
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long curr_step; int curr_step_change; } ;
struct abx500_chargalg {int dev; int chargalg_work; int chargalg_wq; TYPE_1__ curr_status; } ;
typedef int ssize_t ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*,int,long*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct abx500_chargalg *VAR_2,
            const char *VAR_3, size_t VAR_4)
{
 long int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, 10, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_2->curr_status.curr_step = VAR_5;
 if (VAR_2->curr_status.curr_step >= VAR_1 &&
  VAR_2->curr_status.curr_step <= VAR_0) {
  VAR_2->curr_status.curr_step_change = 1;
  FUNC_2(VAR_2->chargalg_wq, &VAR_2->chargalg_work);
 } else
  FUNC_0(VAR_2->dev, "Wrong current step\n"
   "Enter 0. Disable AC/USB Charging\n"
   "1--100. Set AC/USB charging current step\n"
   "100. Enable AC/USB Charging\n");

 return FUNC_3(VAR_3);
}
