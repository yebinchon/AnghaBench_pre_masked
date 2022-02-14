
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfp_flower_tp_ports {int dummy; } ;
struct nfp_flower_meta_tci {int nfp_flow_key_layer; int tci; } ;
struct nfp_flower_merge_check {int ipv6; int ipv4; int l4; int l2; int tci; } ;
struct nfp_flower_mac_mpls {int dummy; } ;
struct nfp_flower_ipv6 {int dummy; } ;
struct nfp_flower_ipv4 {int dummy; } ;
struct nfp_flower_in_port {int dummy; } ;
struct nfp_flower_ext_meta {int dummy; } ;
struct nfp_fl_payload {int* mask_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (struct nfp_flower_merge_check*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nfp_fl_payload *VAR_7,
    struct nfp_flower_merge_check *VAR_8,
    bool VAR_9)
{
 struct nfp_flower_meta_tci *VAR_10;
 u8 *VAR_11 = VAR_7->mask_data;
 u8 VAR_12, VAR_13;

 FUNC_1(VAR_8, 0, sizeof(struct nfp_flower_merge_check));

 VAR_10 = (struct nfp_flower_meta_tci *)VAR_11;
 VAR_12 = VAR_10->nfp_flow_key_layer;

 if (VAR_12 & ~VAR_6 && !VAR_9)
  return -VAR_0;

 VAR_8->tci = VAR_10->tci;
 VAR_11 += sizeof(struct nfp_flower_meta_tci);

 if (VAR_12 & VAR_1)
  VAR_11 += sizeof(struct nfp_flower_ext_meta);

 VAR_11 += sizeof(struct nfp_flower_in_port);

 if (VAR_12 & VAR_4) {
  VAR_13 = sizeof(struct nfp_flower_mac_mpls);
  FUNC_0(&VAR_8->l2, VAR_11, VAR_13);
  VAR_11 += VAR_13;
 }

 if (VAR_12 & VAR_5) {
  VAR_13 = sizeof(struct nfp_flower_tp_ports);
  FUNC_0(&VAR_8->l4, VAR_11, VAR_13);
  VAR_11 += VAR_13;
 }

 if (VAR_12 & VAR_2) {
  VAR_13 = sizeof(struct nfp_flower_ipv4);
  FUNC_0(&VAR_8->ipv4, VAR_11, VAR_13);
 }

 if (VAR_12 & VAR_3) {
  VAR_13 = sizeof(struct nfp_flower_ipv6);
  FUNC_0(&VAR_8->ipv6, VAR_11, VAR_13);
 }

 return 0;
}
