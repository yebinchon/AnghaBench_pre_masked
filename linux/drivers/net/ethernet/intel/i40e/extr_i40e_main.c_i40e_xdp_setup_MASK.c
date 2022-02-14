
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_vsi {int rx_buf_len; int num_queue_pairs; TYPE_3__* netdev; TYPE_2__** xdp_rings; int xdp_prog; TYPE_1__** rx_rings; struct i40e_pf* back; } ;
struct i40e_pf {int dummy; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_6__ {int mtu; } ;
struct TYPE_5__ {scalar_t__ xsk_umem; } ;
struct TYPE_4__ {int xdp_prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (struct i40e_pf*,int) ;
 int FUNC_4 (struct i40e_pf*,int,int) ;
 int FUNC_5 (TYPE_3__*,int,int ) ;
 struct bpf_prog* FUNC_6 (int *,struct bpf_prog*) ;

__attribute__((used)) static int FUNC_7(struct i40e_vsi *VAR_5,
     struct bpf_prog *VAR_6)
{
 int VAR_7 = VAR_5->netdev->mtu + VAR_2 + VAR_1 + VAR_3;
 struct i40e_pf *VAR_8 = VAR_5->back;
 struct bpf_prog *VAR_9;
 bool VAR_10;
 int VAR_11;


 if (VAR_7 > VAR_5->rx_buf_len)
  return -VAR_0;

 if (!FUNC_2(VAR_5) && !VAR_6)
  return 0;


 VAR_10 = (FUNC_2(VAR_5) != !!VAR_6);

 if (VAR_10)
  FUNC_3(VAR_8, 1);

 VAR_9 = FUNC_6(&VAR_5->xdp_prog, VAR_6);

 if (VAR_10)
  FUNC_4(VAR_8, 1, 1);

 for (VAR_11 = 0; VAR_11 < VAR_5->num_queue_pairs; VAR_11++)
  FUNC_0(VAR_5->rx_rings[VAR_11]->xdp_prog, VAR_5->xdp_prog);

 if (VAR_9)
  FUNC_1(VAR_9);




 if (VAR_10 && VAR_6)
  for (VAR_11 = 0; VAR_11 < VAR_5->num_queue_pairs; VAR_11++)
   if (VAR_5->xdp_rings[VAR_11]->xsk_umem)
    (void)FUNC_5(VAR_5->netdev, VAR_11,
            VAR_4);

 return 0;
}
