
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mvumi_hba {TYPE_1__* pdev; } ;
struct mvumi_event_req {int count; struct mvumi_driver_event* events; } ;
struct mvumi_driver_event {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct mvumi_hba*,void*) ;
 int FUNC_2 (struct mvumi_hba*,struct mvumi_driver_event*) ;

__attribute__((used)) static void FUNC_3(struct mvumi_hba *VAR_3, u8 VAR_4, void *VAR_5)
{
 if (VAR_4 == VAR_0) {
  int VAR_6, VAR_7;
  struct mvumi_driver_event *VAR_8 = ((void*)0);
  struct mvumi_event_req *VAR_9 = VAR_5;
  VAR_7 = VAR_9->count;
  if (VAR_7 > VAR_2) {
   FUNC_0(&VAR_3->pdev->dev, "event count[0x%x] is bigger"
     " than max event count[0x%x].\n",
     VAR_7, VAR_2);
   return;
  }
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   VAR_8 = &VAR_9->events[VAR_6];
   FUNC_2(VAR_3, VAR_8);
  }
 } else if (VAR_4 == VAR_1) {
  FUNC_1(VAR_3, VAR_5);
 }
}
