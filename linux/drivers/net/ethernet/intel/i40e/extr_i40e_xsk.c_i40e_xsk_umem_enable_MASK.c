
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct xdp_umem_fq_reuse {int dummy; } ;
struct xdp_umem {int dummy; } ;
struct net_device {scalar_t__ real_num_rx_queues; scalar_t__ real_num_tx_queues; } ;
struct i40e_vsi {scalar_t__ type; scalar_t__ num_queue_pairs; struct net_device* netdev; int af_xdp_zc_qps; TYPE_1__** rx_rings; } ;
struct TYPE_2__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (struct i40e_vsi*,scalar_t__) ;
 int FUNC_2 (struct i40e_vsi*,scalar_t__) ;
 int FUNC_3 (struct i40e_vsi*,struct xdp_umem*) ;
 int FUNC_4 (struct net_device*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 struct xdp_umem_fq_reuse* FUNC_8 (int ) ;
 int FUNC_9 (struct xdp_umem*,struct xdp_umem_fq_reuse*) ;

__attribute__((used)) static int FUNC_10(struct i40e_vsi *VAR_4, struct xdp_umem *VAR_5,
    u16 VAR_6)
{
 struct net_device *VAR_7 = VAR_4->netdev;
 struct xdp_umem_fq_reuse *VAR_8;
 bool VAR_9;
 int VAR_10;

 if (VAR_4->type != VAR_2)
  return -VAR_0;

 if (VAR_6 >= VAR_4->num_queue_pairs)
  return -VAR_0;

 if (VAR_6 >= VAR_7->real_num_rx_queues ||
     VAR_6 >= VAR_7->real_num_tx_queues)
  return -VAR_0;

 VAR_8 = FUNC_8(VAR_4->rx_rings[0]->count);
 if (!VAR_8)
  return -VAR_1;

 FUNC_7(FUNC_9(VAR_5, VAR_8));

 VAR_10 = FUNC_3(VAR_4, VAR_5);
 if (VAR_10)
  return VAR_10;

 FUNC_6(VAR_6, VAR_4->af_xdp_zc_qps);

 VAR_9 = FUNC_5(VAR_4->netdev) && FUNC_0(VAR_4);

 if (VAR_9) {
  VAR_10 = FUNC_1(VAR_4, VAR_6);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_2(VAR_4, VAR_6);
  if (VAR_10)
   return VAR_10;


  VAR_10 = FUNC_4(VAR_4->netdev, VAR_6, VAR_3);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
