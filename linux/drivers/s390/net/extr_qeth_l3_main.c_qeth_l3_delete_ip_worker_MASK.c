
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct qeth_l3_ip_event_work {int addr; int card; } ;


 int FUNC_0 (struct work_struct*) ;
 int FUNC_1 (int ,int *,int) ;
 struct qeth_l3_ip_event_work* FUNC_2 (struct work_struct*) ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_0)
{
 struct qeth_l3_ip_event_work *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->card, &VAR_1->addr, 0);
 FUNC_0(VAR_0);
}
