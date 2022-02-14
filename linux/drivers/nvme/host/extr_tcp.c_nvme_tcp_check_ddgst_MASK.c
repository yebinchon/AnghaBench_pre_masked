
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvme_tcp_queue {int rcv_hash; TYPE_2__* ctrl; } ;
struct nvme_tcp_hdr {int flags; scalar_t__ hlen; int plen; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct nvme_tcp_queue*) ;
 int FUNC_4 (struct nvme_tcp_queue*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct nvme_tcp_queue *VAR_3, void *VAR_4)
{
 struct nvme_tcp_hdr *VAR_5 = VAR_4;
 u8 VAR_6 = FUNC_3(VAR_3);
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_5->plen) - VAR_5->hlen -
  ((VAR_5->flags & VAR_2) ? VAR_6 : 0);

 if (FUNC_5(VAR_7 && !(VAR_5->flags & VAR_1))) {
  FUNC_1(VAR_3->ctrl->ctrl.device,
   "queue %d: data digest flag is cleared\n",
  FUNC_4(VAR_3));
  return -VAR_0;
 }
 FUNC_0(VAR_3->rcv_hash);

 return 0;
}
