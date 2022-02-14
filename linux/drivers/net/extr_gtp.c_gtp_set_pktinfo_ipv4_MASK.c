
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct rtable {int dummy; } ;
struct pdp_ctx {int dummy; } ;
struct net_device {int dummy; } ;
struct iphdr {int dummy; } ;
struct flowi4 {int dummy; } ;
struct gtp_pktinfo {struct net_device* dev; struct flowi4 fl4; struct rtable* rt; struct pdp_ctx* pctx; struct iphdr* iph; struct sock* sk; } ;



__attribute__((used)) static inline void FUNC_0(struct gtp_pktinfo *VAR_0,
     struct sock *VAR_1, struct iphdr *VAR_2,
     struct pdp_ctx *VAR_3, struct rtable *VAR_4,
     struct flowi4 *VAR_5,
     struct net_device *VAR_6)
{
 VAR_0->sk = VAR_1;
 VAR_0->iph = VAR_2;
 VAR_0->pctx = VAR_3;
 VAR_0->rt = VAR_4;
 VAR_0->fl4 = *VAR_5;
 VAR_0->dev = VAR_6;
}
