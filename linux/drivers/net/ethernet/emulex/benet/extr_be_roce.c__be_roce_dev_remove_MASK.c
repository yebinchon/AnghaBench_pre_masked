
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_adapter {int * ocrdma_dev; } ;
struct TYPE_2__ {int (* remove ) (int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct be_adapter *VAR_1)
{
 if (VAR_0 && VAR_0->remove && VAR_1->ocrdma_dev)
  VAR_0->remove(VAR_1->ocrdma_dev);
 VAR_1->ocrdma_dev = ((void*)0);
}
