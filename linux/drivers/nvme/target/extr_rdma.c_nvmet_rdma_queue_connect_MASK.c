
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {int context; } ;
struct TYPE_2__ {int conn; } ;
struct rdma_cm_event {TYPE_1__ param; } ;
struct nvmet_rdma_queue {scalar_t__ host_qid; int queue_list; int release_work; int port; } ;
struct nvmet_rdma_device {int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct nvmet_rdma_queue* FUNC_5 (struct nvmet_rdma_device*,struct rdma_cm_id*,struct rdma_cm_event*) ;
 int FUNC_6 (struct rdma_cm_id*,struct nvmet_rdma_queue*,int *) ;
 int FUNC_7 (struct rdma_cm_id*,int ) ;
 struct nvmet_rdma_device* FUNC_8 (struct rdma_cm_id*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct rdma_cm_id *VAR_7,
  struct rdma_cm_event *VAR_8)
{
 struct nvmet_rdma_device *VAR_9;
 struct nvmet_rdma_queue *VAR_10;
 int VAR_11 = -VAR_1;

 VAR_9 = FUNC_8(VAR_7);
 if (!VAR_9) {
  FUNC_7(VAR_7, VAR_3);
  return -VAR_0;
 }

 VAR_10 = FUNC_5(VAR_9, VAR_7, VAR_8);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto put_device;
 }
 VAR_10->port = VAR_7->context;

 if (VAR_10->host_qid == 0) {

  FUNC_0();
 }

 VAR_11 = FUNC_6(VAR_7, VAR_10, &VAR_8->param.conn);
 if (VAR_11) {
  FUNC_9(&VAR_10->release_work);

  return 0;
 }

 FUNC_3(&VAR_6);
 FUNC_2(&VAR_10->queue_list, &VAR_5);
 FUNC_4(&VAR_6);

 return 0;

put_device:
 FUNC_1(&VAR_9->ref, VAR_4);

 return VAR_11;
}
