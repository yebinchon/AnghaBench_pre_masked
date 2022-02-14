
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct hinic_eq_work {struct hinic_eq* data; } ;
struct hinic_eq {int dummy; } ;


 int FUNC_0 (struct hinic_eq*) ;
 struct hinic_eq_work* FUNC_1 (struct work_struct*) ;

__attribute__((used)) static void FUNC_2(struct work_struct *VAR_0)
{
 struct hinic_eq_work *VAR_1 = FUNC_1(VAR_0);
 struct hinic_eq *VAR_2;

 VAR_2 = VAR_1->data;
 FUNC_0(VAR_2);
}
