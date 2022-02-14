
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nvme_tcp_queue {int rd_enabled; TYPE_1__* ctrl; } ;
struct TYPE_7__ {struct nvme_tcp_queue* data; } ;
struct TYPE_8__ {TYPE_2__ arg; } ;
typedef TYPE_3__ read_descriptor_t ;
struct TYPE_9__ {int device; } ;
struct TYPE_6__ {TYPE_5__ ctrl; } ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct nvme_tcp_queue*,struct sk_buff*,unsigned int*,size_t*) ;
 int FUNC_3 (struct nvme_tcp_queue*,struct sk_buff*,unsigned int*,size_t*) ;
 int FUNC_4 (struct nvme_tcp_queue*,struct sk_buff*,unsigned int*,size_t*) ;
 int FUNC_5 (struct nvme_tcp_queue*) ;

__attribute__((used)) static int FUNC_6(read_descriptor_t *VAR_1, struct sk_buff *VAR_2,
        unsigned int VAR_3, size_t VAR_4)
{
 struct nvme_tcp_queue *VAR_5 = VAR_1->arg.data;
 size_t VAR_6 = VAR_4;
 int VAR_7;

 while (VAR_4) {
  switch (FUNC_5(VAR_5)) {
  case 128:
   VAR_7 = FUNC_4(VAR_5, VAR_2, &VAR_3, &VAR_4);
   break;
  case 130:
   VAR_7 = FUNC_2(VAR_5, VAR_2, &VAR_3, &VAR_4);
   break;
  case 129:
   VAR_7 = FUNC_3(VAR_5, VAR_2, &VAR_3, &VAR_4);
   break;
  default:
   VAR_7 = -VAR_0;
  }
  if (VAR_7) {
   FUNC_0(VAR_5->ctrl->ctrl.device,
    "receive failed:  %d\n", VAR_7);
   VAR_5->rd_enabled = 0;
   FUNC_1(&VAR_5->ctrl->ctrl);
   return VAR_7;
  }
 }

 return VAR_6;
}
