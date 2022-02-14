
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ protocol; int extack; } ;
struct tc_cls_bpf_offload {scalar_t__ command; struct bpf_prog* prog; TYPE_3__ common; struct bpf_prog* oldprog; int exts; int exts_integrated; } ;
struct TYPE_4__ {int netdev; } ;
struct nfp_net {TYPE_2__* port; struct nfp_bpf_vnic* app_priv; TYPE_1__ dp; } ;
struct nfp_bpf_vnic {struct bpf_prog* tc_prog; } ;
struct bpf_prog {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;
struct TYPE_5__ {int tc_offload_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_net*,struct bpf_prog*,struct bpf_prog*,int ) ;
 int FUNC_3 (struct nfp_net*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(enum tc_setup_type VAR_4,
         void *VAR_5, void *VAR_6)
{
 struct tc_cls_bpf_offload *VAR_7 = VAR_5;
 struct nfp_net *VAR_8 = VAR_6;
 struct bpf_prog *VAR_9;
 struct nfp_bpf_vnic *VAR_10;
 int VAR_11;

 if (VAR_4 != VAR_3) {
  FUNC_0(VAR_7->common.extack,
       "only offload of BPF classifiers supported");
  return -VAR_0;
 }
 if (!FUNC_4(VAR_8->dp.netdev, &VAR_7->common))
  return -VAR_0;
 if (!FUNC_3(VAR_8)) {
  FUNC_0(VAR_7->common.extack,
       "NFP firmware does not support eBPF offload");
  return -VAR_0;
 }
 if (VAR_7->common.protocol != FUNC_1(VAR_1)) {
  FUNC_0(VAR_7->common.extack,
       "only ETH_P_ALL supported as filter protocol");
  return -VAR_0;
 }


 if (!VAR_7->exts_integrated ||
     FUNC_5(VAR_7->exts)) {
  FUNC_0(VAR_7->common.extack,
       "only direct action with no legacy actions supported");
  return -VAR_0;
 }

 if (VAR_7->command != VAR_2)
  return -VAR_0;

 VAR_10 = VAR_8->app_priv;
 VAR_9 = VAR_7->oldprog;


 if (VAR_10->tc_prog != VAR_9) {
  VAR_9 = ((void*)0);
  if (!VAR_7->prog)
   return 0;
 }

 VAR_11 = FUNC_2(VAR_8, VAR_7->prog, VAR_9,
      VAR_7->common.extack);
 if (VAR_11)
  return VAR_11;

 VAR_10->tc_prog = VAR_7->prog;
 VAR_8->port->tc_offload_cnt = !!VAR_10->tc_prog;
 return 0;
}
