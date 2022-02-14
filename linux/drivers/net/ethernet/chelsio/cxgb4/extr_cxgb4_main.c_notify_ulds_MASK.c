
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {TYPE_1__* uld; } ;
typedef enum cxgb4_state { ____Placeholder_cxgb4_state } cxgb4_state ;
struct TYPE_2__ {scalar_t__ handle; int (* state_change ) (scalar_t__,int) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_2, enum cxgb4_state VAR_3)
{
 unsigned int VAR_4;

 FUNC_0(&VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2->uld && VAR_2->uld[VAR_4].handle)
   VAR_2->uld[VAR_4].state_change(VAR_2->uld[VAR_4].handle,
        VAR_3);
 FUNC_1(&VAR_1);
}
