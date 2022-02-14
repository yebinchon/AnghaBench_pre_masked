
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_boot_kobj {int kobj; int attr_group; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct iscsi_boot_kobj *VAR_0)
{
 FUNC_1(&VAR_0->list);
 FUNC_2(&VAR_0->kobj, VAR_0->attr_group);
 FUNC_0(&VAR_0->kobj);
}
