
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {int filter_sem; TYPE_1__* type; } ;
struct TYPE_2__ {int (* filter_table_restore ) (struct ef4_nic*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ef4_nic *VAR_0)
{
 FUNC_0(&VAR_0->filter_sem);
 VAR_0->type->filter_table_restore(VAR_0);
 FUNC_2(&VAR_0->filter_sem);
}
