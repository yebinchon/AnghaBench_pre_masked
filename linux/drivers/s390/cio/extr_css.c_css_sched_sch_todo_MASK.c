
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sch_no; int ssid; } ;
struct subchannel {int todo; int dev; int todo_work; TYPE_1__ schid; } ;
typedef enum sch_todo { ____Placeholder_sch_todo } sch_todo ;


 int FUNC_0 (int,char*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct subchannel *VAR_1, enum sch_todo VAR_2)
{
 FUNC_0(4, "sch_todo: sched sch=0.%x.%04x todo=%d\n",
        VAR_1->schid.ssid, VAR_1->schid.sch_no, VAR_2);
 if (VAR_1->todo >= VAR_2)
  return;

 if (!FUNC_1(&VAR_1->dev))
  return;
 VAR_1->todo = VAR_2;
 if (!FUNC_3(VAR_0, &VAR_1->todo_work)) {

  FUNC_2(&VAR_1->dev);
 }
}
