
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvfc_event {TYPE_1__* cmnd; } ;
struct TYPE_2__ {int device; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ibmvfc_event *VAR_0, void *VAR_1)
{
 if (VAR_0->cmnd && FUNC_0(VAR_0->cmnd->device) == VAR_1)
  return 1;
 return 0;
}
