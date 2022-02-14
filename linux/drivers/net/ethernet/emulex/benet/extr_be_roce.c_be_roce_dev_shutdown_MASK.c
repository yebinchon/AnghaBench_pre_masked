
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_adapter {scalar_t__ ocrdma_dev; } ;
struct TYPE_2__ {int (* state_change_handler ) (scalar_t__,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (scalar_t__,int ) ;

void FUNC_4(struct be_adapter *VAR_3)
{
 if (FUNC_0(VAR_3)) {
  FUNC_1(&VAR_1);
  if (VAR_2 && VAR_3->ocrdma_dev &&
      VAR_2->state_change_handler)
   VAR_2->state_change_handler(VAR_3->ocrdma_dev,
        VAR_0);
  FUNC_2(&VAR_1);
 }
}
