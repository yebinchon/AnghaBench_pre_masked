
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvme_ctrl {int dummy; } ;
struct TYPE_4__ {int * pdu; } ;
struct TYPE_5__ {TYPE_1__ async_req; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct nvme_ctrl*,int ) ;
 TYPE_2__* FUNC_2 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_3(struct nvme_ctrl *VAR_0)
{
 if (FUNC_2(VAR_0)->async_req.pdu) {
  FUNC_0(FUNC_2(VAR_0));
  FUNC_2(VAR_0)->async_req.pdu = ((void*)0);
 }

 FUNC_1(VAR_0, 0);
}
