
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_battery_state_data {int temperature; int cc; int counter_uah; int current_ua; int voltage; int time; } ;
struct cpcap_battery_ddata {int dummy; } ;
typedef int state ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cpcap_battery_ddata*) ;
 int FUNC_1 (struct cpcap_battery_ddata*) ;
 struct cpcap_battery_state_data* FUNC_2 (struct cpcap_battery_ddata*) ;
 struct cpcap_battery_state_data* FUNC_3 (struct cpcap_battery_ddata*) ;
 int FUNC_4 (struct cpcap_battery_ddata*,int *) ;
 int FUNC_5 (struct cpcap_battery_ddata*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct cpcap_battery_state_data*,struct cpcap_battery_state_data*,int) ;
 int FUNC_10 (struct cpcap_battery_state_data*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct cpcap_battery_ddata *VAR_1)
{
 struct cpcap_battery_state_data VAR_2, *VAR_3, *VAR_4;
 ktime_t VAR_5;
 int VAR_6;

 FUNC_10(&VAR_2, 0, sizeof(VAR_2));
 VAR_5 = FUNC_6();

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  s64 VAR_7 = FUNC_8(FUNC_7(VAR_5, VAR_3->time));

  if (VAR_7 < VAR_0)
   return VAR_7;
 }

 VAR_2.time = VAR_5;
 VAR_2.voltage = FUNC_1(VAR_1);
 VAR_2.current_ua = FUNC_0(VAR_1);
 VAR_2.counter_uah = FUNC_4(VAR_1, &VAR_2.cc);

 VAR_6 = FUNC_5(VAR_1,
        &VAR_2.temperature);
 if (VAR_6)
  return VAR_6;

 VAR_4 = FUNC_3(VAR_1);
 FUNC_9(VAR_4, VAR_3, sizeof(*VAR_4));
 FUNC_9(VAR_3, &VAR_2, sizeof(*VAR_3));

 return 0;
}
