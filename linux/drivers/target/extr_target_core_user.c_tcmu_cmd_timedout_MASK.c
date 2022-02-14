
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct tcmu_dev {int name; } ;


 int VAR_0 ;
 struct tcmu_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct tcmu_dev*) ;
 struct tcmu_dev* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct tcmu_dev *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);

 FUNC_1("%s cmd timeout has expired\n", VAR_3->name);
 FUNC_2(VAR_3);
}
