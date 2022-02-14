
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fw_event_work {struct MPT3SAS_ADAPTER* ioc; int device_handle; int event; } ;
struct MPT3SAS_ADAPTER {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 struct fw_event_work* FUNC_1 (int ) ;
 int FUNC_2 (struct fw_event_work*) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_1, u16 VAR_2)
{
 struct fw_event_work *VAR_3;

 VAR_3 = FUNC_1(0);
 if (!VAR_3)
  return;
 VAR_3->event = VAR_0;
 VAR_3->device_handle = VAR_2;
 VAR_3->ioc = VAR_1;
 FUNC_0(VAR_1, VAR_3);
 FUNC_2(VAR_3);
}
