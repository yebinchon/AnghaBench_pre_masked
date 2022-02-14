
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fw_event_work {int event_data; struct MPT3SAS_ADAPTER* ioc; int event; } ;
struct SL_WH_TRIGGERS_EVENT_DATA_T {int dummy; } ;
struct MPT3SAS_ADAPTER {scalar_t__ is_driver_loading; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 struct fw_event_work* FUNC_1 (int) ;
 int FUNC_2 (struct fw_event_work*) ;
 int FUNC_3 (int ,struct SL_WH_TRIGGERS_EVENT_DATA_T*,int) ;

void
FUNC_4(struct MPT3SAS_ADAPTER *VAR_1,
 struct SL_WH_TRIGGERS_EVENT_DATA_T *VAR_2)
{
 struct fw_event_work *VAR_3;
 u16 VAR_4;

 if (VAR_1->is_driver_loading)
  return;
 VAR_4 = sizeof(*VAR_2);
 VAR_3 = FUNC_1(VAR_4);
 if (!VAR_3)
  return;
 VAR_3->event = VAR_0;
 VAR_3->ioc = VAR_1;
 FUNC_3(VAR_3->event_data, VAR_2, sizeof(*VAR_2));
 FUNC_0(VAR_1, VAR_3);
 FUNC_2(VAR_3);
}
