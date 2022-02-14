
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_event_work {int work; } ;
struct MPT3SAS_ADAPTER {int firmware_event_thread; int fw_event_list; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct fw_event_work* FUNC_1 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_2 (struct fw_event_work*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct MPT3SAS_ADAPTER *VAR_0)
{
 struct fw_event_work *VAR_1;

 if (FUNC_4(&VAR_0->fw_event_list) ||
      !VAR_0->firmware_event_thread || FUNC_3())
  return;

 while ((VAR_1 = FUNC_1(VAR_0))) {
  if (FUNC_0(&VAR_1->work))
   FUNC_2(VAR_1);

  FUNC_2(VAR_1);
 }
}
