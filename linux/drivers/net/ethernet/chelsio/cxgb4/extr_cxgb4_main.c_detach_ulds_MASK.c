
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {TYPE_1__* uld; int list_node; } ;
struct TYPE_2__ {scalar_t__ handle; int (* state_change ) (scalar_t__,int ) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct adapter *VAR_6)
{
 unsigned int VAR_7;

 FUNC_2(&VAR_5);
 FUNC_0(&VAR_6->list_node);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  if (VAR_6->uld && VAR_6->uld[VAR_7].handle)
   VAR_6->uld[VAR_7].state_change(VAR_6->uld[VAR_7].handle,
          VAR_0);

 if (VAR_4 && FUNC_1(&VAR_2)) {
  FUNC_5(&VAR_3);
  VAR_4 = 0;
 }
 FUNC_3(&VAR_5);
}
