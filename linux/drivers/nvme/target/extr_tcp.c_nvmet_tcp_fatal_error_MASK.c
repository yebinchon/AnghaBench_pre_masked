
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ctrl; } ;
struct nvmet_tcp_queue {int sock; TYPE_1__ nvme_sq; int rcv_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct nvmet_tcp_queue *VAR_2)
{
 VAR_2->rcv_state = VAR_0;
 if (VAR_2->nvme_sq.ctrl)
  FUNC_1(VAR_2->nvme_sq.ctrl);
 else
  FUNC_0(VAR_2->sock, VAR_1);
}
