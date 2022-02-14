
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvfc_event {TYPE_1__* cmnd; } ;
typedef void fc_rport ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ibmvfc_event *VAR_0, void *VAR_1)
{
 struct fc_rport *VAR_2;

 if (VAR_0->cmnd) {
  VAR_2 = FUNC_1(FUNC_0(VAR_0->cmnd->device));
  if (VAR_2 == VAR_1)
   return 1;
 }
 return 0;
}
