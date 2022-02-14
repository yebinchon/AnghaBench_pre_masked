
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qp_entry {int dummy; } ;
struct qp_broker_entry {int dummy; } ;
struct TYPE_4__ {int mutex; } ;


 int FUNC_0 (struct qp_broker_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;
 struct qp_entry* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct qp_entry*) ;

void FUNC_5(void)
{
 struct qp_entry *VAR_1;
 struct qp_broker_entry *VAR_2;

 FUNC_1(&VAR_0.mutex);

 while ((VAR_1 = FUNC_3(&VAR_0))) {
  VAR_2 = (struct qp_broker_entry *)VAR_1;

  FUNC_4(&VAR_0, VAR_1);
  FUNC_0(VAR_2);
 }

 FUNC_2(&VAR_0.mutex);
}
