
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_event_work {struct MPT3SAS_ADAPTER* ioc; int event; } ;
struct MPT3SAS_ADAPTER {scalar_t__ is_driver_loading; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 struct fw_event_work* FUNC_1 (int ) ;
 int FUNC_2 (struct fw_event_work*) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_1)
{
 struct fw_event_work *VAR_2;

 if (VAR_1->is_driver_loading)
  return;
 VAR_2 = FUNC_1(0);
 if (!VAR_2)
  return;
 VAR_2->event = VAR_0;
 VAR_2->ioc = VAR_1;
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_2);
}
