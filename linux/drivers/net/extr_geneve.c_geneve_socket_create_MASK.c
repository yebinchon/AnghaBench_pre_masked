
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tunnel_cfg ;
struct udp_tunnel_sock_cfg {int encap_type; int * encap_destroy; int encap_err_lookup; int encap_rcv; int gro_complete; int gro_receive; struct geneve_sock* sk_user_data; } ;
struct socket {int dummy; } ;
struct net {int dummy; } ;
struct geneve_sock {int refcnt; int list; struct socket* sock; int * vni_list; } ;
struct geneve_net {int sock_list; } ;
typedef int __be16 ;


 int VAR_0 ;
 struct geneve_sock* FUNC_0 (struct socket*) ;
 struct geneve_sock* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct socket* FUNC_4 (struct net*,int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct geneve_sock*) ;
 struct geneve_sock* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct udp_tunnel_sock_cfg*,int ,int) ;
 struct geneve_net* FUNC_9 (struct net*,int ) ;
 int FUNC_10 (struct net*,struct socket*,struct udp_tunnel_sock_cfg*) ;
 int FUNC_11 (struct socket*,int ) ;

__attribute__((used)) static struct geneve_sock *FUNC_12(struct net *VAR_9, __be16 VAR_10,
      bool VAR_11, bool VAR_12)
{
 struct geneve_net *VAR_13 = FUNC_9(VAR_9, VAR_6);
 struct geneve_sock *VAR_14;
 struct socket *VAR_15;
 struct udp_tunnel_sock_cfg VAR_16;
 int VAR_17;

 VAR_14 = FUNC_6(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return FUNC_1(-VAR_0);

 VAR_15 = FUNC_4(VAR_9, VAR_11, VAR_10, VAR_12);
 if (FUNC_3(VAR_15)) {
  FUNC_5(VAR_14);
  return FUNC_0(VAR_15);
 }

 VAR_14->sock = VAR_15;
 VAR_14->refcnt = 1;
 for (VAR_17 = 0; VAR_17 < VAR_3; ++VAR_17)
  FUNC_2(&VAR_14->vni_list[VAR_17]);


 FUNC_11(VAR_14->sock, VAR_2);


 FUNC_8(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.sk_user_data = VAR_14;
 VAR_16.encap_type = 1;
 VAR_16.gro_receive = VAR_5;
 VAR_16.gro_complete = VAR_4;
 VAR_16.encap_rcv = VAR_8;
 VAR_16.encap_err_lookup = VAR_7;
 VAR_16.encap_destroy = ((void*)0);
 FUNC_10(VAR_9, VAR_15, &VAR_16);
 FUNC_7(&VAR_14->list, &VAR_13->sock_list);
 return VAR_14;
}
