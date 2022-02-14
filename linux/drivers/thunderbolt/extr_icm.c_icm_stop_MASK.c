
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb {int nhi; int * root_switch; } ;
struct icm {int rescan_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 struct icm* FUNC_2 (struct tb*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tb *VAR_1)
{
 struct icm *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_2->rescan_work);
 FUNC_3(VAR_1->root_switch);
 VAR_1->root_switch = ((void*)0);
 FUNC_1(VAR_1->nhi, VAR_0, 0);
}
