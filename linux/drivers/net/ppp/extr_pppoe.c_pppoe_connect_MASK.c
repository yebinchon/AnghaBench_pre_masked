
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_8__ {scalar_t__ sid; int dev; } ;
struct TYPE_6__ {TYPE_5__ pppoe; } ;
struct sockaddr_pppox {scalar_t__ sa_protocol; TYPE_1__ sa_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; } ;
struct TYPE_7__ {int mtu; int remote; scalar_t__ sid; int * ops; struct sock* private; scalar_t__ hdrlen; } ;
struct pppox_sock {struct net_device* pppoe_dev; scalar_t__ num; scalar_t__ pppoe_ifindex; TYPE_2__ pppoe_pa; TYPE_2__ chan; int * next; TYPE_2__ pppoe_relay; } ;
struct pppoe_net {int hash_lock; } ;
struct pppoe_hdr {int dummy; } ;
struct pppoe_addr {int dummy; } ;
struct net_device {int flags; int mtu; scalar_t__ hard_header_len; scalar_t__ ifindex; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct pppoe_net*,struct pppox_sock*) ;
 int FUNC_1 (struct pppoe_net*,scalar_t__,int ,scalar_t__) ;
 struct net_device* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (TYPE_2__*,TYPE_5__*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int VAR_9 ;
 struct pppoe_net* FUNC_9 (struct net*) ;
 struct pppox_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 struct net* FUNC_13 (struct sock*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct socket *VAR_10, struct sockaddr *VAR_11,
    int VAR_12, int VAR_13)
{
 struct sock *VAR_14 = VAR_10->sk;
 struct sockaddr_pppox *VAR_15 = (struct sockaddr_pppox *)VAR_11;
 struct pppox_sock *VAR_16 = FUNC_10(VAR_14);
 struct net_device *VAR_17 = ((void*)0);
 struct pppoe_net *VAR_18;
 struct net *VAR_19 = ((void*)0);
 int VAR_20;

 FUNC_5(VAR_14);

 VAR_20 = -VAR_2;

 if (VAR_12 != sizeof(struct sockaddr_pppox))
  goto end;

 if (VAR_15->sa_protocol != VAR_8)
  goto end;


 VAR_20 = -VAR_1;
 if ((VAR_14->sk_state & VAR_5) &&
      FUNC_14(VAR_15->sa_addr.pppoe.sid))
  goto end;


 VAR_20 = -VAR_0;
 if ((VAR_14->sk_state & VAR_6) &&
      !FUNC_14(VAR_15->sa_addr.pppoe.sid))
  goto end;

 VAR_20 = 0;


 if (FUNC_14(VAR_16->pppoe_pa.sid)) {
  FUNC_11(VAR_14);
  VAR_18 = FUNC_9(FUNC_13(VAR_14));
  FUNC_1(VAR_18, VAR_16->pppoe_pa.sid,
       VAR_16->pppoe_pa.remote, VAR_16->pppoe_ifindex);
  if (VAR_16->pppoe_dev) {
   FUNC_4(VAR_16->pppoe_dev);
   VAR_16->pppoe_dev = ((void*)0);
  }

  VAR_16->pppoe_ifindex = 0;
  FUNC_7(&VAR_16->pppoe_pa, 0, sizeof(VAR_16->pppoe_pa));
  FUNC_7(&VAR_16->pppoe_relay, 0, sizeof(VAR_16->pppoe_relay));
  FUNC_7(&VAR_16->chan, 0, sizeof(VAR_16->chan));
  VAR_16->next = ((void*)0);
  VAR_16->num = 0;

  VAR_14->sk_state = VAR_7;
 }


 if (FUNC_14(VAR_15->sa_addr.pppoe.sid)) {
  VAR_20 = -VAR_3;
  VAR_19 = FUNC_13(VAR_14);
  VAR_17 = FUNC_2(VAR_19, VAR_15->sa_addr.pppoe.dev);
  if (!VAR_17)
   goto err_put;

  VAR_16->pppoe_dev = VAR_17;
  VAR_16->pppoe_ifindex = VAR_17->ifindex;
  VAR_18 = FUNC_9(VAR_19);
  if (!(VAR_17->flags & VAR_4)) {
   goto err_put;
  }

  FUNC_6(&VAR_16->pppoe_pa,
         &VAR_15->sa_addr.pppoe,
         sizeof(struct pppoe_addr));

  FUNC_15(&VAR_18->hash_lock);
  VAR_20 = FUNC_0(VAR_18, VAR_16);
  FUNC_16(&VAR_18->hash_lock);
  if (VAR_20 < 0)
   goto err_put;

  VAR_16->chan.hdrlen = (sizeof(struct pppoe_hdr) +
       VAR_17->hard_header_len);

  VAR_16->chan.mtu = VAR_17->mtu - sizeof(struct pppoe_hdr) - 2;
  VAR_16->chan.private = VAR_14;
  VAR_16->chan.ops = &VAR_9;

  VAR_20 = FUNC_8(FUNC_3(VAR_17), &VAR_16->chan);
  if (VAR_20) {
   FUNC_1(VAR_18, VAR_16->pppoe_pa.sid,
        VAR_16->pppoe_pa.remote, VAR_16->pppoe_ifindex);
   goto err_put;
  }

  VAR_14->sk_state = VAR_5;
 }

 VAR_16->num = VAR_15->sa_addr.pppoe.sid;

end:
 FUNC_12(VAR_14);
 return VAR_20;
err_put:
 if (VAR_16->pppoe_dev) {
  FUNC_4(VAR_16->pppoe_dev);
  VAR_16->pppoe_dev = ((void*)0);
 }
 goto end;
}
