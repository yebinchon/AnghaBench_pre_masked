
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_priv {struct bpf_prog* _xdp_prog; int peer; } ;
struct skb_shared_info {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {unsigned int hard_header_len; unsigned int mtu; scalar_t__ real_num_rx_queues; scalar_t__ real_num_tx_queues; int flags; unsigned int max_mtu; int hw_features; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 unsigned int VAR_6 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_7 ;
 int FUNC_2 (struct bpf_prog*) ;
 struct veth_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_8, struct bpf_prog *VAR_9,
   struct netlink_ext_ack *VAR_10)
{
 struct veth_priv *VAR_11 = FUNC_3(VAR_8);
 struct bpf_prog *VAR_12;
 struct net_device *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_12 = VAR_11->_xdp_prog;
 VAR_11->_xdp_prog = VAR_9;
 VAR_13 = FUNC_5(VAR_11->peer);

 if (VAR_9) {
  if (!VAR_13) {
   FUNC_0(VAR_10, "Cannot set XDP when peer is detached");
   VAR_15 = -VAR_1;
   goto err;
  }

  VAR_14 = VAR_6 - VAR_7 -
     VAR_13->hard_header_len -
     FUNC_1(sizeof(struct skb_shared_info));
  if (VAR_13->mtu > VAR_14) {
   FUNC_0(VAR_10, "Peer MTU is too large to set XDP");
   VAR_15 = -VAR_2;
   goto err;
  }

  if (VAR_8->real_num_rx_queues < VAR_13->real_num_tx_queues) {
   FUNC_0(VAR_10, "XDP expects number of rx queues not less than peer tx queues");
   VAR_15 = -VAR_0;
   goto err;
  }

  if (VAR_8->flags & VAR_4) {
   VAR_15 = FUNC_7(VAR_8);
   if (VAR_15) {
    FUNC_0(VAR_10, "Setup for XDP failed");
    goto err;
   }
  }

  if (!VAR_12) {
   VAR_13->hw_features &= ~VAR_5;
   VAR_13->max_mtu = VAR_14;
  }
 }

 if (VAR_12) {
  if (!VAR_9) {
   if (VAR_8->flags & VAR_4)
    FUNC_6(VAR_8);

   if (VAR_13) {
    VAR_13->hw_features |= VAR_5;
    VAR_13->max_mtu = VAR_3;
   }
  }
  FUNC_2(VAR_12);
 }

 if ((!!VAR_12 ^ !!VAR_9) && VAR_13)
  FUNC_4(VAR_13);

 return 0;
err:
 VAR_11->_xdp_prog = VAR_12;

 return VAR_15;
}
