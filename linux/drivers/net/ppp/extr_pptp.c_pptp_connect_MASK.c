
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_12__ {TYPE_2__ sin_addr; int call_id; } ;
struct TYPE_13__ {TYPE_5__ pptp; } ;
struct sockaddr_pppox {scalar_t__ sa_protocol; TYPE_6__ sa_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; } ;
struct rtable {int dst; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_11__ {TYPE_3__ sin_addr; } ;
struct pptp_opt {TYPE_5__ dst_addr; TYPE_4__ src_addr; } ;
struct pptp_gre_header {int dummy; } ;
struct TYPE_14__ {int hdrlen; scalar_t__ mtu; int * ops; struct sock* private; } ;
struct TYPE_8__ {struct pptp_opt pptp; } ;
struct pppox_sock {TYPE_7__ chan; TYPE_1__ proto; } ;
struct flowi4 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct rtable* FUNC_3 (int ,struct flowi4*,struct sock*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_7__*) ;
 struct pppox_sock* FUNC_7 (struct sock*) ;
 int VAR_10 ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,int *) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_11, struct sockaddr *VAR_12,
 int VAR_13, int VAR_14)
{
 struct sock *VAR_15 = VAR_11->sk;
 struct sockaddr_pppox *VAR_16 = (struct sockaddr_pppox *) VAR_12;
 struct pppox_sock *VAR_17 = FUNC_7(VAR_15);
 struct pptp_opt *VAR_18 = &VAR_17->proto.pptp;
 struct rtable *VAR_19;
 struct flowi4 VAR_20;
 int VAR_21 = 0;

 if (VAR_13 < sizeof(struct sockaddr_pppox))
  return -VAR_3;

 if (VAR_16->sa_protocol != VAR_9)
  return -VAR_3;

 if (FUNC_5(VAR_16->sa_addr.pptp.call_id, VAR_16->sa_addr.pptp.sin_addr.s_addr))
  return -VAR_0;

 FUNC_4(VAR_15);

 if (VAR_15->sk_state & VAR_5) {
  VAR_21 = -VAR_1;
  goto end;
 }


 if (VAR_15->sk_state & VAR_6) {
  VAR_21 = -VAR_0;
  goto end;
 }

 if (!VAR_18->src_addr.sin_addr.s_addr || !VAR_16->sa_addr.pptp.sin_addr.s_addr) {
  VAR_21 = -VAR_3;
  goto end;
 }

 VAR_17->chan.private = VAR_15;
 VAR_17->chan.ops = &VAR_10;

 VAR_19 = FUNC_3(FUNC_11(VAR_15), &VAR_20, VAR_15,
       VAR_18->dst_addr.sin_addr.s_addr,
       VAR_18->src_addr.sin_addr.s_addr,
       0, 0,
       VAR_4, FUNC_1(VAR_15), 0);
 if (FUNC_0(VAR_19)) {
  VAR_21 = -VAR_2;
  goto end;
 }
 FUNC_10(VAR_15, &VAR_19->dst);

 VAR_17->chan.mtu = FUNC_2(&VAR_19->dst);
 if (!VAR_17->chan.mtu)
  VAR_17->chan.mtu = VAR_7;
 VAR_17->chan.mtu -= VAR_8;

 VAR_17->chan.hdrlen = 2 + sizeof(struct pptp_gre_header);
 VAR_21 = FUNC_6(&VAR_17->chan);
 if (VAR_21) {
  FUNC_8("PPTP: failed to register PPP channel (%d)\n", VAR_21);
  goto end;
 }

 VAR_18->dst_addr = VAR_16->sa_addr.pptp;
 VAR_15->sk_state |= VAR_5;

 end:
 FUNC_9(VAR_15);
 return VAR_21;
}
