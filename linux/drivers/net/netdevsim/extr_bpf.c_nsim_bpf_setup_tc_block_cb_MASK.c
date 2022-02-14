
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ protocol; int extack; } ;
struct tc_cls_bpf_offload {scalar_t__ command; struct bpf_prog* prog; TYPE_2__ common; struct bpf_prog* oldprog; } ;
struct netdevsim {struct bpf_prog* bpf_offloaded; int bpf_tc_non_bound_accept; int bpf_tc_accept; int netdev; } ;
struct bpf_prog {TYPE_1__* aux; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;
struct TYPE_3__ {int offload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct netdevsim*,struct bpf_prog*,struct bpf_prog*) ;
 int FUNC_3 (int ,TYPE_2__*) ;

int FUNC_4(enum tc_setup_type VAR_5,
          void *VAR_6, void *VAR_7)
{
 struct tc_cls_bpf_offload *VAR_8 = VAR_6;
 struct bpf_prog *VAR_9 = VAR_8->prog;
 struct netdevsim *VAR_10 = VAR_7;
 struct bpf_prog *VAR_11;

 if (VAR_5 != VAR_4) {
  FUNC_0(VAR_8->common.extack,
   "only offload of BPF classifiers supported");
  return -VAR_1;
 }

 if (!FUNC_3(VAR_10->netdev, &VAR_8->common))
  return -VAR_1;

 if (VAR_8->common.protocol != FUNC_1(VAR_2)) {
  FUNC_0(VAR_8->common.extack,
   "only ETH_P_ALL supported as filter protocol");
  return -VAR_1;
 }

 if (!VAR_10->bpf_tc_accept) {
  FUNC_0(VAR_8->common.extack,
   "netdevsim configured to reject BPF TC offload");
  return -VAR_1;
 }

 if (VAR_9 && !VAR_9->aux->offload && !VAR_10->bpf_tc_non_bound_accept) {
  FUNC_0(VAR_8->common.extack,
   "netdevsim configured to reject unbound programs");
  return -VAR_1;
 }

 if (VAR_8->command != VAR_3)
  return -VAR_1;

 VAR_11 = VAR_8->oldprog;


 if (VAR_10->bpf_offloaded != VAR_11) {
  VAR_11 = ((void*)0);
  if (!VAR_8->prog)
   return 0;
  if (VAR_10->bpf_offloaded) {
   FUNC_0(VAR_8->common.extack,
    "driver and netdev offload states mismatch");
   return -VAR_0;
  }
 }

 return FUNC_2(VAR_10, VAR_8->prog, VAR_11);
}
