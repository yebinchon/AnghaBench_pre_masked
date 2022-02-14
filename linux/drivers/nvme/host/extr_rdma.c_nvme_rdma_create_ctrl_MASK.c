
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmf_ctrl_options {int mask; int subsysnqn; int kato; scalar_t__ queue_size; scalar_t__ nr_poll_queues; scalar_t__ nr_write_queues; scalar_t__ nr_io_queues; int duplicate_connect; int host_traddr; int * trsvcid; int traddr; } ;
struct nvme_ctrl {struct nvmf_ctrl_options* opts; int device; scalar_t__ queue_count; int kato; scalar_t__ sqsize; int reset_work; } ;
struct nvme_rdma_ctrl {struct nvme_rdma_ctrl* queues; struct nvme_ctrl ctrl; int list; int addr; int err_work; int reconnect_work; int src_addr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nvme_ctrl* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,int *) ;
 int FUNC_7 (int *,int ,int ,int *,int *) ;
 int VAR_9 ;
 struct nvme_rdma_ctrl* FUNC_8 (scalar_t__,int,int ) ;
 int FUNC_9 (struct nvme_rdma_ctrl*) ;
 int * FUNC_10 (int ,int ) ;
 struct nvme_rdma_ctrl* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct nvme_ctrl*,int ) ;
 int FUNC_16 (struct nvme_ctrl*) ;
 int FUNC_17 (struct nvme_ctrl*,struct device*,int *,int ) ;
 int FUNC_18 (struct nvme_ctrl*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_19 (struct nvmf_ctrl_options*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_20 (struct nvme_rdma_ctrl*,int) ;
 int FUNC_21 (struct nvme_ctrl*) ;
 int FUNC_22 (char*,int ,...) ;

__attribute__((used)) static struct nvme_ctrl *FUNC_23(struct device *VAR_16,
  struct nvmf_ctrl_options *VAR_17)
{
 struct nvme_rdma_ctrl *VAR_18;
 int VAR_19;
 bool VAR_20;

 VAR_18 = FUNC_11(sizeof(*VAR_18), VAR_4);
 if (!VAR_18)
  return FUNC_0(-VAR_3);
 VAR_18->ctrl.opts = VAR_17;
 FUNC_2(&VAR_18->list);

 if (!(VAR_17->mask & VAR_8)) {
  VAR_17->trsvcid =
   FUNC_10(FUNC_5(VAR_6), VAR_4);
  if (!VAR_17->trsvcid) {
   VAR_19 = -VAR_3;
   goto out_free_ctrl;
  }
  VAR_17->mask |= VAR_8;
 }

 VAR_19 = FUNC_7(&VAR_9, VAR_0,
   VAR_17->traddr, VAR_17->trsvcid, &VAR_18->addr);
 if (VAR_19) {
  FUNC_22("malformed address passed: %s:%s\n",
   VAR_17->traddr, VAR_17->trsvcid);
  goto out_free_ctrl;
 }

 if (VAR_17->mask & VAR_7) {
  VAR_19 = FUNC_7(&VAR_9, VAR_0,
   VAR_17->host_traddr, ((void*)0), &VAR_18->src_addr);
  if (VAR_19) {
   FUNC_22("malformed src address passed: %s\n",
          VAR_17->host_traddr);
   goto out_free_ctrl;
  }
 }

 if (!VAR_17->duplicate_connect && FUNC_19(VAR_17)) {
  VAR_19 = -VAR_1;
  goto out_free_ctrl;
 }

 FUNC_1(&VAR_18->reconnect_work,
   VAR_14);
 FUNC_3(&VAR_18->err_work, VAR_13);
 FUNC_3(&VAR_18->ctrl.reset_work, VAR_15);

 VAR_18->ctrl.queue_count = VAR_17->nr_io_queues + VAR_17->nr_write_queues +
    VAR_17->nr_poll_queues + 1;
 VAR_18->ctrl.sqsize = VAR_17->queue_size - 1;
 VAR_18->ctrl.kato = VAR_17->kato;

 VAR_19 = -VAR_3;
 VAR_18->queues = FUNC_8(VAR_18->ctrl.queue_count, sizeof(*VAR_18->queues),
    VAR_4);
 if (!VAR_18->queues)
  goto out_free_ctrl;

 VAR_19 = FUNC_17(&VAR_18->ctrl, VAR_16, &VAR_12,
    0 );
 if (VAR_19)
  goto out_kfree_queues;

 VAR_20 = FUNC_15(&VAR_18->ctrl, VAR_5);
 FUNC_4(!VAR_20);

 VAR_19 = FUNC_20(VAR_18, 1);
 if (VAR_19)
  goto out_uninit_ctrl;

 FUNC_6(VAR_18->ctrl.device, "new ctrl: NQN \"%s\", addr %pISpcs\n",
  VAR_18->ctrl.opts->subsysnqn, &VAR_18->addr);

 FUNC_16(&VAR_18->ctrl);

 FUNC_13(&VAR_11);
 FUNC_12(&VAR_18->list, &VAR_10);
 FUNC_14(&VAR_11);

 return &VAR_18->ctrl;

out_uninit_ctrl:
 FUNC_21(&VAR_18->ctrl);
 FUNC_18(&VAR_18->ctrl);
 if (VAR_19 > 0)
  VAR_19 = -VAR_2;
 return FUNC_0(VAR_19);
out_kfree_queues:
 FUNC_9(VAR_18->queues);
out_free_ctrl:
 FUNC_9(VAR_18);
 return FUNC_0(VAR_19);
}
