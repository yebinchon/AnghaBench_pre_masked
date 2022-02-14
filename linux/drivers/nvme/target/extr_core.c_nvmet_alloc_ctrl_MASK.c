
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nvmet_subsys {scalar_t__ type; int lock; int ctrls; scalar_t__ max_qid; } ;
struct nvmet_sq {int dummy; } ;
struct nvmet_req {int ops; int port; TYPE_2__* cqe; } ;
struct nvmet_ctrl {int cntlid; struct nvmet_ctrl* changed_ns_list; struct nvmet_ctrl* cqs; struct nvmet_ctrl* sqs; int subsys_entry; int error_lock; scalar_t__ err_counter; int kato; struct nvmet_subsys* subsys; int ops; int aen_enabled; int ref; int hostnqn; int subsysnqn; int fatal_err_work; int p2p_ns_map; int async_events; int async_event_work; int port; int lock; } ;
struct nvmet_cq {int dummy; } ;
typedef int __le32 ;
struct TYPE_3__ {void* u32; } ;
struct TYPE_4__ {TYPE_1__ result; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 void* FUNC_4 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int ) ;
 int VAR_13 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 void* FUNC_8 (scalar_t__,int,int ) ;
 int FUNC_9 (struct nvmet_ctrl*) ;
 struct nvmet_ctrl* FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int *) ;
 struct nvmet_ctrl* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int ,char const*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct nvmet_subsys* FUNC_18 (int ,char const*) ;
 int FUNC_19 (struct nvmet_subsys*,char const*) ;
 int FUNC_20 (struct nvmet_ctrl*) ;
 int FUNC_21 (struct nvmet_ctrl*,struct nvmet_req*) ;
 int FUNC_22 (struct nvmet_ctrl*) ;
 int FUNC_23 (struct nvmet_subsys*) ;
 int FUNC_24 (char*,char const*,char const*) ;
 int FUNC_25 (char*,char const*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;

u16 FUNC_28(const char *VAR_17, const char *VAR_18,
  struct nvmet_req *VAR_19, u32 VAR_20, struct nvmet_ctrl **VAR_21)
{
 struct nvmet_subsys *VAR_22;
 struct nvmet_ctrl *VAR_23;
 int VAR_24;
 u16 VAR_25;

 VAR_25 = VAR_9 | VAR_10;
 VAR_22 = FUNC_18(VAR_19->port, VAR_17);
 if (!VAR_22) {
  FUNC_25("connect request for invalid subsystem %s!\n",
   VAR_17);
  VAR_19->cqe->result.u32 = FUNC_4(VAR_17);
  goto out;
 }

 VAR_25 = VAR_9 | VAR_10;
 FUNC_6(&VAR_15);
 if (!FUNC_19(VAR_22, VAR_18)) {
  FUNC_24("connect by host %s for subsystem %s not allowed\n",
   VAR_18, VAR_17);
  VAR_19->cqe->result.u32 = FUNC_4(VAR_18);
  FUNC_27(&VAR_15);
  VAR_25 = VAR_8 | VAR_10;
  goto out_put_subsystem;
 }
 FUNC_27(&VAR_15);

 VAR_25 = VAR_11;
 VAR_23 = FUNC_12(sizeof(*VAR_23), VAR_0);
 if (!VAR_23)
  goto out_put_subsystem;
 FUNC_15(&VAR_23->lock);

 FUNC_20(VAR_23);

 VAR_23->port = VAR_19->port;

 FUNC_3(&VAR_23->async_event_work, VAR_14);
 FUNC_1(&VAR_23->async_events);
 FUNC_2(&VAR_23->p2p_ns_map, VAR_0);
 FUNC_3(&VAR_23->fatal_err_work, VAR_16);

 FUNC_14(VAR_23->subsysnqn, VAR_17, VAR_12);
 FUNC_14(VAR_23->hostnqn, VAR_18, VAR_12);

 FUNC_11(&VAR_23->ref);
 VAR_23->subsys = VAR_22;
 FUNC_5(VAR_23->aen_enabled, VAR_1);

 VAR_23->changed_ns_list = FUNC_10(VAR_5,
   sizeof(__le32), VAR_0);
 if (!VAR_23->changed_ns_list)
  goto out_free_ctrl;

 VAR_23->cqs = FUNC_8(VAR_22->max_qid + 1,
   sizeof(struct nvmet_cq *),
   VAR_0);
 if (!VAR_23->cqs)
  goto out_free_changed_ns_list;

 VAR_23->sqs = FUNC_8(VAR_22->max_qid + 1,
   sizeof(struct nvmet_sq *),
   VAR_0);
 if (!VAR_23->sqs)
  goto out_free_cqs;

 VAR_24 = FUNC_7(&VAR_13,
        VAR_4, VAR_3,
        VAR_0);
 if (VAR_24 < 0) {
  VAR_25 = VAR_7 | VAR_10;
  goto out_free_sqs;
 }
 VAR_23->cntlid = VAR_24;

 VAR_23->ops = VAR_19->ops;





 if ((VAR_23->subsys->type == VAR_6) && !VAR_20)
  VAR_20 = VAR_2;


 VAR_23->kato = FUNC_0(VAR_20, 1000);

 VAR_23->err_counter = 0;
 FUNC_26(&VAR_23->error_lock);

 FUNC_22(VAR_23);

 FUNC_16(&VAR_22->lock);
 FUNC_13(&VAR_23->subsys_entry, &VAR_22->ctrls);
 FUNC_21(VAR_23, VAR_19);
 FUNC_17(&VAR_22->lock);

 *VAR_21 = VAR_23;
 return 0;

out_free_sqs:
 FUNC_9(VAR_23->sqs);
out_free_cqs:
 FUNC_9(VAR_23->cqs);
out_free_changed_ns_list:
 FUNC_9(VAR_23->changed_ns_list);
out_free_ctrl:
 FUNC_9(VAR_23);
out_put_subsystem:
 FUNC_23(VAR_22);
out:
 return VAR_25;
}
