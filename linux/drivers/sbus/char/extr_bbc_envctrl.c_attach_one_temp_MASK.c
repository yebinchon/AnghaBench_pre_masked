
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct bbc_i2c_bus {int temps; } ;
struct bbc_cpu_temperature {int index; void** fan_todo; int curr_amb_temp; int avg_amb_temp; int prev_amb_temp; int curr_cpu_temp; int avg_cpu_temp; int prev_cpu_temp; int client; int bp_list; int glob_list; } ;
struct TYPE_4__ {int high_pwroff; int low_pwroff; } ;
struct TYPE_3__ {int high_pwroff; int low_pwroff; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_1 (struct bbc_i2c_bus*,struct platform_device*) ;
 int FUNC_2 (int ,int,int ) ;
 TYPE_1__* VAR_12 ;
 int FUNC_3 (struct bbc_cpu_temperature*) ;
 int FUNC_4 (struct bbc_cpu_temperature*) ;
 struct bbc_cpu_temperature* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(struct bbc_i2c_bus *VAR_13, struct platform_device *VAR_14,
       int VAR_15)
{
 struct bbc_cpu_temperature *VAR_16;

 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return;

 FUNC_0(&VAR_16->bp_list);
 FUNC_0(&VAR_16->glob_list);

 VAR_16->client = FUNC_1(VAR_13, VAR_14);
 if (!VAR_16->client) {
  FUNC_4(VAR_16);
  return;
 }


 VAR_16->index = VAR_15;

 FUNC_6(&VAR_16->glob_list, &VAR_10);
 FUNC_6(&VAR_16->bp_list, &VAR_13->temps);




 FUNC_2(VAR_16->client, 0x00, VAR_6);
 FUNC_2(VAR_16->client, 0x02, VAR_9);


 FUNC_2(VAR_16->client, VAR_11[VAR_16->index].high_pwroff,
         VAR_4);
 FUNC_2(VAR_16->client, VAR_11[VAR_16->index].low_pwroff,
         VAR_5);
 FUNC_2(VAR_16->client, VAR_12[VAR_16->index].high_pwroff,
         VAR_7);
 FUNC_2(VAR_16->client, VAR_12[VAR_16->index].low_pwroff,
         VAR_8);

 FUNC_3(VAR_16);
 VAR_16->prev_cpu_temp = VAR_16->avg_cpu_temp = VAR_16->curr_cpu_temp;
 VAR_16->prev_amb_temp = VAR_16->avg_amb_temp = VAR_16->curr_amb_temp;

 VAR_16->fan_todo[VAR_0] = VAR_2;
 VAR_16->fan_todo[VAR_1] = VAR_2;
}
