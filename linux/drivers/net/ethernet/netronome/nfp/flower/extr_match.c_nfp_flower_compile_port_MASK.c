
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_flower_in_port {void* in_port; } ;
struct netlink_ext_ack {int dummy; } ;
typedef enum nfp_flower_tun_type { ____Placeholder_nfp_flower_tun_type } nfp_flower_tun_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct nfp_flower_in_port *VAR_2, u32 VAR_3,
   bool VAR_4, enum nfp_flower_tun_type VAR_5,
   struct netlink_ext_ack *VAR_6)
{
 if (VAR_4) {
  VAR_2->in_port = FUNC_1(~0);
  return 0;
 }

 if (VAR_5) {
  VAR_2->in_port = FUNC_1(VAR_1 | VAR_5);
 } else {
  if (!VAR_3) {
   FUNC_0(VAR_6, "unsupported offload: invalid ingress interface for match offload");
   return -VAR_0;
  }
  VAR_2->in_port = FUNC_1(VAR_3);
 }

 return 0;
}
