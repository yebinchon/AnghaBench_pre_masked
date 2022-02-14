
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_dp {scalar_t__ fl_bufsz; scalar_t__ num_tx_rings; int xdp_prog; } ;
struct nfp_net {scalar_t__ max_tx_rings; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct nfp_net *VAR_2, struct nfp_net_dp *VAR_3,
       struct netlink_ext_ack *VAR_4)
{

 if (!VAR_3->xdp_prog)
  return 0;
 if (VAR_3->fl_bufsz > VAR_1) {
  FUNC_0(VAR_4, "MTU too large w/ XDP enabled");
  return -VAR_0;
 }
 if (VAR_3->num_tx_rings > VAR_2->max_tx_rings) {
  FUNC_0(VAR_4, "Insufficient number of TX rings w/ XDP enabled");
  return -VAR_0;
 }

 return 0;
}
