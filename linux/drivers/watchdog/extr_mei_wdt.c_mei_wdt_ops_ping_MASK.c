
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct mei_wdt {scalar_t__ state; int response; scalar_t__ resp_required; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mei_wdt*) ;
 int FUNC_2 (int *) ;
 struct mei_wdt* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_2)
{
 struct mei_wdt *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 if (VAR_3->state != VAR_1 && VAR_3->state != VAR_0)
  return 0;

 if (VAR_3->resp_required)
  FUNC_0(&VAR_3->response);

 VAR_3->state = VAR_0;
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->resp_required)
  VAR_4 = FUNC_2(&VAR_3->response);

 return VAR_4;
}
