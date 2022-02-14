
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_adapter {TYPE_1__* vpd; } ;
struct TYPE_2__ {struct TYPE_2__* buff; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct ibmvnic_adapter *VAR_0)
{
 if (!VAR_0->vpd)
  return;

 FUNC_0(VAR_0->vpd->buff);
 FUNC_0(VAR_0->vpd);

 VAR_0->vpd = ((void*)0);
}
