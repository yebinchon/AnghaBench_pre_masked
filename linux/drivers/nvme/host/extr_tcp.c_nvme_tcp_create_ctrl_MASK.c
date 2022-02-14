
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmf_ctrl_options {int mask; int subsysnqn; int duplicate_connect; int host_traddr; int * trsvcid; int traddr; int kato; scalar_t__ queue_size; scalar_t__ nr_poll_queues; scalar_t__ nr_write_queues; scalar_t__ nr_io_queues; } ;
struct nvme_ctrl {struct nvmf_ctrl_options* opts; int device; scalar_t__ queue_count; int reset_work; int kato; scalar_t__ sqsize; } ;
struct nvme_tcp_ctrl {struct nvme_tcp_ctrl* queues; struct nvme_ctrl ctrl; int list; int addr; int src_addr; int err_work; int connect_work; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nvme_ctrl* FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,int *) ;
 int FUNC_7 (int *,int ,int ,int *,int *) ;
 int VAR_10 ;
 struct nvme_tcp_ctrl* FUNC_8 (scalar_t__,int,int ) ;
 int FUNC_9 (struct nvme_tcp_ctrl*) ;
 int * FUNC_10 (int ,int ) ;
 struct nvme_tcp_ctrl* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct nvme_ctrl*,int ) ;
 int FUNC_16 (struct nvme_ctrl*) ;
 int FUNC_17 (struct nvme_ctrl*,struct device*,int *,int ) ;
 int FUNC_18 (struct nvme_ctrl*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_19 (struct nvmf_ctrl_options*) ;
 int VAR_16 ;
 int FUNC_20 (struct nvme_ctrl*,int) ;
 int FUNC_21 (struct nvme_ctrl*) ;
 int FUNC_22 (char*,int ,...) ;

__attribute__((used)) static struct nvme_ctrl *FUNC_23(struct device *VAR_17,
  struct nvmf_ctrl_options *VAR_18)
{
 struct nvme_tcp_ctrl *VAR_19;
 int VAR_20;

 VAR_19 = FUNC_11(sizeof(*VAR_19), VAR_5);
 if (!VAR_19)
  return FUNC_0(-VAR_4);

 FUNC_2(&VAR_19->list);
 VAR_19->ctrl.opts = VAR_18;
 VAR_19->ctrl.queue_count = VAR_18->nr_io_queues + VAR_18->nr_write_queues +
    VAR_18->nr_poll_queues + 1;
 VAR_19->ctrl.sqsize = VAR_18->queue_size - 1;
 VAR_19->ctrl.kato = VAR_18->kato;

 FUNC_1(&VAR_19->connect_work,
   VAR_16);
 FUNC_3(&VAR_19->err_work, VAR_15);
 FUNC_3(&VAR_19->ctrl.reset_work, VAR_11);

 if (!(VAR_18->mask & VAR_9)) {
  VAR_18->trsvcid =
   FUNC_10(FUNC_5(VAR_7), VAR_5);
  if (!VAR_18->trsvcid) {
   VAR_20 = -VAR_4;
   goto out_free_ctrl;
  }
  VAR_18->mask |= VAR_9;
 }

 VAR_20 = FUNC_7(&VAR_10, VAR_0,
   VAR_18->traddr, VAR_18->trsvcid, &VAR_19->addr);
 if (VAR_20) {
  FUNC_22("malformed address passed: %s:%s\n",
   VAR_18->traddr, VAR_18->trsvcid);
  goto out_free_ctrl;
 }

 if (VAR_18->mask & VAR_8) {
  VAR_20 = FUNC_7(&VAR_10, VAR_0,
   VAR_18->host_traddr, ((void*)0), &VAR_19->src_addr);
  if (VAR_20) {
   FUNC_22("malformed src address passed: %s\n",
          VAR_18->host_traddr);
   goto out_free_ctrl;
  }
 }

 if (!VAR_18->duplicate_connect && FUNC_19(VAR_18)) {
  VAR_20 = -VAR_1;
  goto out_free_ctrl;
 }

 VAR_19->queues = FUNC_8(VAR_19->ctrl.queue_count, sizeof(*VAR_19->queues),
    VAR_5);
 if (!VAR_19->queues) {
  VAR_20 = -VAR_4;
  goto out_free_ctrl;
 }

 VAR_20 = FUNC_17(&VAR_19->ctrl, VAR_17, &VAR_14, 0);
 if (VAR_20)
  goto out_kfree_queues;

 if (!FUNC_15(&VAR_19->ctrl, VAR_6)) {
  FUNC_4(1);
  VAR_20 = -VAR_2;
  goto out_uninit_ctrl;
 }

 VAR_20 = FUNC_20(&VAR_19->ctrl, 1);
 if (VAR_20)
  goto out_uninit_ctrl;

 FUNC_6(VAR_19->ctrl.device, "new ctrl: NQN \"%s\", addr %pISp\n",
  VAR_19->ctrl.opts->subsysnqn, &VAR_19->addr);

 FUNC_16(&VAR_19->ctrl);

 FUNC_13(&VAR_13);
 FUNC_12(&VAR_19->list, &VAR_12);
 FUNC_14(&VAR_13);

 return &VAR_19->ctrl;

out_uninit_ctrl:
 FUNC_21(&VAR_19->ctrl);
 FUNC_18(&VAR_19->ctrl);
 if (VAR_20 > 0)
  VAR_20 = -VAR_3;
 return FUNC_0(VAR_20);
out_kfree_queues:
 FUNC_9(VAR_19->queues);
out_free_ctrl:
 FUNC_9(VAR_19);
 return FUNC_0(VAR_20);
}
