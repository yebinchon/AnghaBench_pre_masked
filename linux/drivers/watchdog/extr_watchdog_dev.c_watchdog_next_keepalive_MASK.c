
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; int max_hw_heartbeat_ms; struct watchdog_core_data* wd_data; } ;
struct watchdog_core_data {int open_deadline; int last_keepalive; } ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (struct watchdog_device*) ;

__attribute__((used)) static ktime_t FUNC_7(struct watchdog_device *VAR_0)
{
 struct watchdog_core_data *VAR_1 = VAR_0->wd_data;
 unsigned int VAR_2 = VAR_0->timeout * 1000;
 ktime_t VAR_3;
 ktime_t VAR_4, VAR_5;
 ktime_t VAR_6;
 unsigned int VAR_7;

 if (FUNC_6(VAR_0))
  VAR_6 = FUNC_0(VAR_1->last_keepalive,
      FUNC_5(VAR_2));
 else
  VAR_6 = VAR_1->open_deadline;

 VAR_7 = FUNC_4(VAR_2, VAR_0->max_hw_heartbeat_ms);
 VAR_3 = FUNC_5(VAR_7 / 2);






 VAR_4 = FUNC_3(VAR_6, FUNC_5(VAR_7));
 VAR_5 = FUNC_3(VAR_4, FUNC_2());
 if (FUNC_1(VAR_5, VAR_3))
  return VAR_5;
 return VAR_3;
}
