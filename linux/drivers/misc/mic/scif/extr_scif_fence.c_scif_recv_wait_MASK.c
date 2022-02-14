
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scifmsg {int uop; scalar_t__* payload; } ;
struct scif_remote_fence_info {int list; int msg; } ;
struct TYPE_3__ {int fence_refcount; } ;
struct scif_endpt {TYPE_1__ rma_info; int remote_dev; scalar_t__ remote_ep; } ;
struct scif_dev {int dummy; } ;
struct TYPE_4__ {int misc_work; int fencelock; int fence; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct scif_remote_fence_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,struct scifmsg*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_8 (int ,struct scifmsg*) ;

void FUNC_9(struct scif_dev *VAR_3, struct scifmsg *VAR_4)
{
 struct scif_endpt *VAR_5 = (struct scif_endpt *)VAR_4->payload[0];
 struct scif_remote_fence_info *VAR_6;






 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 if (!VAR_6) {
  VAR_4->payload[0] = VAR_5->remote_ep;
  VAR_4->uop = VAR_1;
  FUNC_8(VAR_5->remote_dev, VAR_4);
  return;
 }


 FUNC_4(&VAR_6->msg, VAR_4, sizeof(struct scifmsg));
 FUNC_0(&VAR_6->list);


 FUNC_5(&VAR_2.fencelock);
 FUNC_1(&VAR_5->rma_info.fence_refcount);
 FUNC_3(&VAR_6->list, &VAR_2.fence);
 FUNC_6(&VAR_2.fencelock);

 FUNC_7(&VAR_2.misc_work);
}
