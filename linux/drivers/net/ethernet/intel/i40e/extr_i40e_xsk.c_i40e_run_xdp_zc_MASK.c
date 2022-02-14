
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct xdp_umem {int dummy; } ;
struct xdp_buff {int handle; scalar_t__ data_hard_start; scalar_t__ data; } ;
struct i40e_ring {size_t queue_index; int netdev; TYPE_1__* vsi; int xdp_prog; struct xdp_umem* xsk_umem; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_2__ {struct i40e_ring** xdp_rings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bpf_prog* FUNC_0 (int ) ;





 int FUNC_1 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct xdp_buff*,struct i40e_ring*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,struct bpf_prog*,int) ;
 int FUNC_7 (int ,struct xdp_buff*,struct bpf_prog*) ;
 int FUNC_8 (struct xdp_umem*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct i40e_ring *VAR_3, struct xdp_buff *VAR_4)
{
 struct xdp_umem *VAR_5 = VAR_3->xsk_umem;
 int VAR_6, VAR_7 = VAR_1;
 struct i40e_ring *VAR_8;
 struct bpf_prog *VAR_9;
 u64 VAR_10;
 u32 VAR_11;

 FUNC_4();



 VAR_9 = FUNC_0(VAR_3->xdp_prog);
 VAR_11 = FUNC_1(VAR_9, VAR_4);
 VAR_10 = VAR_4->data - VAR_4->data_hard_start;

 VAR_4->handle = FUNC_8(VAR_5, VAR_4->handle, VAR_10);

 switch (VAR_11) {
 case 130:
  break;
 case 128:
  VAR_8 = VAR_3->vsi->xdp_rings[VAR_3->queue_index];
  VAR_7 = FUNC_3(VAR_4, VAR_8);
  break;
 case 129:
  VAR_6 = FUNC_7(VAR_3->netdev, VAR_4, VAR_9);
  VAR_7 = !VAR_6 ? VAR_2 : VAR_0;
  break;
 default:
  FUNC_2(VAR_11);

 case 132:
  FUNC_6(VAR_3->netdev, VAR_9, VAR_11);

 case 131:
  VAR_7 = VAR_0;
  break;
 }
 FUNC_5();
 return VAR_7;
}
