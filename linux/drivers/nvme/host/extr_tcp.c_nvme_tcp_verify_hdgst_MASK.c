
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_tcp_queue {TYPE_2__* ctrl; int rcv_hash; } ;
struct nvme_tcp_hdr {int flags; int hlen; } ;
typedef scalar_t__ __le32 ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (struct nvme_tcp_queue*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct nvme_tcp_queue *VAR_3,
  void *VAR_4, size_t VAR_5)
{
 struct nvme_tcp_hdr *VAR_6 = VAR_4;
 __le32 VAR_7;
 __le32 VAR_8;

 if (FUNC_4(!(VAR_6->flags & VAR_2))) {
  FUNC_0(VAR_3->ctrl->ctrl.device,
   "queue %d: header digest flag is cleared\n",
   FUNC_3(VAR_3));
  return -VAR_1;
 }

 VAR_7 = *(__le32 *)(VAR_4 + VAR_6->hlen);
 FUNC_2(VAR_3->rcv_hash, VAR_4, VAR_5);
 VAR_8 = *(__le32 *)(VAR_4 + VAR_6->hlen);
 if (VAR_7 != VAR_8) {
  FUNC_0(VAR_3->ctrl->ctrl.device,
   "header digest error: recv %#x expected %#x\n",
   FUNC_1(VAR_7), FUNC_1(VAR_8));
  return -VAR_0;
 }

 return 0;
}
