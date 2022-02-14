
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdp_buff {int data_hard_start; } ;
struct sk_buff {int dummy; } ;
struct i40e_ring {size_t queue_index; int netdev; TYPE_1__* vsi; int xdp_prog; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_2__ {struct i40e_ring** xdp_rings; } ;


 struct sk_buff* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bpf_prog* FUNC_1 (int ) ;





 int FUNC_2 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct xdp_buff*,struct i40e_ring*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,struct bpf_prog*,int) ;
 int FUNC_9 (int ,struct xdp_buff*,struct bpf_prog*) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct i40e_ring *VAR_3,
        struct xdp_buff *VAR_4)
{
 int VAR_5, VAR_6 = VAR_1;
 struct i40e_ring *VAR_7;
 struct bpf_prog *VAR_8;
 u32 VAR_9;

 FUNC_6();
 VAR_8 = FUNC_1(VAR_3->xdp_prog);

 if (!VAR_8)
  goto xdp_out;

 FUNC_5(VAR_4->data_hard_start);

 VAR_9 = FUNC_2(VAR_8, VAR_4);
 switch (VAR_9) {
 case 130:
  break;
 case 128:
  VAR_7 = VAR_3->vsi->xdp_rings[VAR_3->queue_index];
  VAR_6 = FUNC_4(VAR_4, VAR_7);
  break;
 case 129:
  VAR_5 = FUNC_9(VAR_3->netdev, VAR_4, VAR_8);
  VAR_6 = !VAR_5 ? VAR_2 : VAR_0;
  break;
 default:
  FUNC_3(VAR_9);

 case 132:
  FUNC_8(VAR_3->netdev, VAR_8, VAR_9);

 case 131:
  VAR_6 = VAR_0;
  break;
 }
xdp_out:
 FUNC_7();
 return FUNC_0(-VAR_6);
}
