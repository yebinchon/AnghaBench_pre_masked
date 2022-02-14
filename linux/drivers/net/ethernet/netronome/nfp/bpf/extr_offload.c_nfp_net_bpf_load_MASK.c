
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct nfp_prog {unsigned int stack_size; unsigned int prog_len; } ;
struct TYPE_8__ {int dev; TYPE_3__* netdev; } ;
struct nfp_net {TYPE_4__ dp; int app_priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct bpf_prog {TYPE_2__* aux; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int mtu; } ;
struct TYPE_6__ {int max_pkt_offset; TYPE_1__* offload; } ;
struct TYPE_5__ {struct nfp_prog* dev_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,void*,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (void*) ;
 unsigned int FUNC_7 (int ,int ) ;
 void* FUNC_8 (struct nfp_prog*,int ) ;
 int FUNC_9 (struct nfp_net*,int ) ;
 int FUNC_10 (struct nfp_net*,int ) ;
 unsigned int FUNC_11 (struct nfp_net*,int ) ;
 int FUNC_12 (struct nfp_net*,int ,int ) ;
 int FUNC_13 (struct nfp_net*,int ,int) ;

__attribute__((used)) static int
FUNC_14(struct nfp_net *VAR_9, struct bpf_prog *VAR_10,
   struct netlink_ext_ack *VAR_11)
{
 struct nfp_prog *VAR_12 = VAR_10->aux->offload->dev_priv;
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
 dma_addr_t VAR_17;
 void *VAR_18;
 int VAR_19;

 VAR_13 = FUNC_10(VAR_9, VAR_4) * 64 - 32;
 VAR_14 = FUNC_7(VAR_10->aux->max_pkt_offset, VAR_9->dp.netdev->mtu);
 if (VAR_13 < VAR_14) {
  FUNC_1(VAR_11, "BPF offload not supported with potential packet access beyond HW packet split boundary");
  return -VAR_2;
 }

 VAR_15 = FUNC_10(VAR_9, VAR_7) * 64;
 if (VAR_12->stack_size > VAR_15) {
  FUNC_1(VAR_11, "stack too large");
  return -VAR_2;
 }

 VAR_16 = FUNC_11(VAR_9, VAR_5);
 if (VAR_12->prog_len > VAR_16) {
  FUNC_1(VAR_11, "program too long");
  return -VAR_2;
 }

 VAR_18 = FUNC_8(VAR_12, VAR_9->app_priv);
 if (FUNC_0(VAR_18))
  return FUNC_2(VAR_18);

 VAR_17 = FUNC_3(VAR_9->dp.dev, VAR_18,
      VAR_12->prog_len * sizeof(u64),
      VAR_0);
 if (FUNC_4(VAR_9->dp.dev, VAR_17)) {
  FUNC_6(VAR_18);
  return -VAR_1;
 }

 FUNC_13(VAR_9, VAR_6, VAR_12->prog_len);
 FUNC_12(VAR_9, VAR_3, VAR_17);


 VAR_19 = FUNC_9(VAR_9, VAR_8);
 if (VAR_19)
  FUNC_1(VAR_11,
       "FW command error while loading BPF");

 FUNC_5(VAR_9->dp.dev, VAR_17, VAR_12->prog_len * sizeof(u64),
    VAR_0);
 FUNC_6(VAR_18);

 return VAR_19;
}
