
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tunnel_cfg ;
struct vxlan_sock {int flags; int hlist; int refcnt; struct socket* sock; int * vni_list; } ;
struct vxlan_net {int sock_lock; } ;
struct udp_tunnel_sock_cfg {int encap_type; int gro_complete; int gro_receive; int * encap_destroy; int encap_err_lookup; int encap_rcv; struct vxlan_sock* sk_user_data; } ;
struct socket {int dummy; } ;
struct net {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 struct vxlan_sock* FUNC_0 (struct socket*) ;
 struct vxlan_sock* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct vxlan_sock*) ;
 struct vxlan_sock* FUNC_6 (int,int ) ;
 int FUNC_7 (struct udp_tunnel_sock_cfg*,int ,int) ;
 struct vxlan_net* FUNC_8 (struct net*,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct net*,struct socket*,struct udp_tunnel_sock_cfg*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct socket*,int ) ;
 int FUNC_14 (struct net*,int ) ;
 struct socket* FUNC_15 (struct net*,int,int ,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static struct vxlan_sock *FUNC_16(struct net *VAR_12, bool VAR_13,
           __be16 VAR_14, u32 VAR_15,
           int VAR_16)
{
 struct vxlan_net *VAR_17 = FUNC_8(VAR_12, VAR_10);
 struct vxlan_sock *VAR_18;
 struct socket *VAR_19;
 unsigned int VAR_20;
 struct udp_tunnel_sock_cfg VAR_21;

 VAR_18 = FUNC_6(sizeof(*VAR_18), VAR_1);
 if (!VAR_18)
  return FUNC_1(-VAR_0);

 for (VAR_20 = 0; VAR_20 < VAR_4; ++VAR_20)
  FUNC_2(&VAR_18->vni_list[VAR_20]);

 VAR_19 = FUNC_15(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
 if (FUNC_3(VAR_19)) {
  FUNC_5(VAR_18);
  return FUNC_0(VAR_19);
 }

 VAR_18->sock = VAR_19;
 FUNC_9(&VAR_18->refcnt, 1);
 VAR_18->flags = (VAR_15 & VAR_6);

 FUNC_11(&VAR_17->sock_lock);
 FUNC_4(&VAR_18->hlist, FUNC_14(VAR_12, VAR_14));
 FUNC_13(VAR_19,
          (VAR_18->flags & VAR_5) ?
          VAR_3 :
          VAR_2);
 FUNC_12(&VAR_17->sock_lock);


 FUNC_7(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.sk_user_data = VAR_18;
 VAR_21.encap_type = 1;
 VAR_21.encap_rcv = VAR_11;
 VAR_21.encap_err_lookup = VAR_7;
 VAR_21.encap_destroy = ((void*)0);
 VAR_21.gro_receive = VAR_9;
 VAR_21.gro_complete = VAR_8;

 FUNC_10(VAR_12, VAR_19, &VAR_21);

 return VAR_18;
}
