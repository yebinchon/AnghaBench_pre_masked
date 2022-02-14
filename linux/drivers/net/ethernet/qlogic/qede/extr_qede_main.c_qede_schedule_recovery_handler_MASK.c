
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {scalar_t__ state; int sp_task; int sp_flags; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
 struct qede_dev *VAR_3 = VAR_2;

 if (VAR_3->state == VAR_1) {
  FUNC_1(VAR_3,
     "Avoid scheduling a recovery handling since already in recovery state\n");
  return;
 }

 FUNC_3(VAR_0, &VAR_3->sp_flags);
 FUNC_2(&VAR_3->sp_task, 0);

 FUNC_0(VAR_3, "Scheduled a recovery handler\n");
}
