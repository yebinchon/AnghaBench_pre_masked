
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_frame {int dummy; } ;
struct net_device {int dummy; } ;
struct i40e_vsi {unsigned int num_queue_pairs; struct i40e_ring** xdp_rings; int state; struct i40e_pf* back; } ;
struct i40e_ring {int dummy; } ;
struct i40e_pf {int state; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (struct i40e_ring*) ;
 int FUNC_2 (struct xdp_frame*,struct i40e_ring*) ;
 struct i40e_netdev_priv* FUNC_3 (struct net_device*) ;
 unsigned int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct xdp_frame*) ;

int FUNC_8(struct net_device *VAR_8, int VAR_9, struct xdp_frame **VAR_10,
    u32 VAR_11)
{
 struct i40e_netdev_priv *VAR_12 = FUNC_3(VAR_8);
 unsigned int VAR_13 = FUNC_4();
 struct i40e_vsi *VAR_14 = VAR_12->vsi;
 struct i40e_pf *VAR_15 = VAR_14->back;
 struct i40e_ring *VAR_16;
 int VAR_17 = 0;
 int VAR_18;

 if (FUNC_5(VAR_7, VAR_14->state))
  return -VAR_1;

 if (!FUNC_0(VAR_14) || VAR_13 >= VAR_14->num_queue_pairs ||
     FUNC_5(VAR_6, VAR_15->state))
  return -VAR_2;

 if (FUNC_6(VAR_11 & ~VAR_4))
  return -VAR_0;

 VAR_16 = VAR_14->xdp_rings[VAR_13];

 for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++) {
  struct xdp_frame *VAR_19 = VAR_10[VAR_18];
  int VAR_20;

  VAR_20 = FUNC_2(VAR_19, VAR_16);
  if (VAR_20 != VAR_3) {
   FUNC_7(VAR_19);
   VAR_17++;
  }
 }

 if (FUNC_6(VAR_11 & VAR_5))
  FUNC_1(VAR_16);

 return VAR_9 - VAR_17;
}
