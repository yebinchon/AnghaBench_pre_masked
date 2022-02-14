
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_ntb {int mmio_self_ctrl; TYPE_1__* mmio_ntb; } ;
struct TYPE_2__ {int requester_id; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct switchtec_ntb*,int ,int*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct switchtec_ntb *VAR_0)
{
 int VAR_1[2];




 VAR_1[0] = 0;




 VAR_1[1] = FUNC_2(&VAR_0->mmio_ntb->requester_id);

 return FUNC_1(VAR_0, VAR_0->mmio_self_ctrl, VAR_1,
       FUNC_0(VAR_1));
}
