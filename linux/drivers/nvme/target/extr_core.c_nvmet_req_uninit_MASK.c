
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_req {scalar_t__ ns; TYPE_1__* sq; } ;
struct TYPE_2__ {int ref; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct nvmet_req *VAR_0)
{
 FUNC_1(&VAR_0->sq->ref);
 if (VAR_0->ns)
  FUNC_0(VAR_0->ns);
}
