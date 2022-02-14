
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nfp_flower_tp_ports {int dummy; } ;
struct nfp_flower_meta_tci {int dummy; } ;
struct nfp_flower_mac_mpls {int dummy; } ;
struct nfp_flower_ipv6 {int dummy; } ;
struct TYPE_4__ {void* dst; } ;
struct nfp_flower_ipv4_udp_tun {TYPE_2__ ipv4; } ;
struct TYPE_3__ {void* dst; } ;
struct nfp_flower_ipv4_gre_tun {TYPE_1__ ipv4; } ;
struct nfp_flower_ipv4 {int dummy; } ;
struct nfp_flower_in_port {int dummy; } ;
struct nfp_flower_ext_meta {int dummy; } ;
struct nfp_fl_payload {void* nfp_tun_ipv4_addr; int * mask_data; int * unmasked_data; } ;
struct nfp_fl_key_ls {int key_layer; int key_layer_two; int key_size; } ;
struct nfp_app {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct flow_cls_offload {int dummy; } ;
typedef enum nfp_flower_tun_type { ____Placeholder_nfp_flower_tun_type } nfp_flower_tun_type ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct nfp_flower_ext_meta*,int) ;
 int FUNC_2 (int *,int *,struct flow_cls_offload*) ;
 int FUNC_3 (struct nfp_flower_ipv4*,struct nfp_flower_ipv4*,struct flow_cls_offload*) ;
 int FUNC_4 (void*,void*,struct flow_cls_offload*) ;
 int FUNC_5 (void*,void*,struct flow_cls_offload*) ;
 int FUNC_6 (struct nfp_flower_ipv6*,struct nfp_flower_ipv6*,struct flow_cls_offload*) ;
 int FUNC_7 (struct nfp_flower_mac_mpls*,struct nfp_flower_mac_mpls*,struct flow_cls_offload*) ;
 int FUNC_8 (struct nfp_flower_meta_tci*,struct nfp_flower_meta_tci*,struct flow_cls_offload*,int) ;
 int FUNC_9 (struct nfp_flower_in_port*,int ,int,int,struct netlink_ext_ack*) ;
 int FUNC_10 (struct nfp_flower_tp_ports*,struct nfp_flower_tp_ports*,struct flow_cls_offload*) ;
 int FUNC_11 (struct nfp_app*,struct net_device*) ;
 int FUNC_12 (struct nfp_app*,void*) ;

int FUNC_13(struct nfp_app *VAR_9,
      struct flow_cls_offload *VAR_10,
      struct nfp_fl_key_ls *VAR_11,
      struct net_device *VAR_12,
      struct nfp_fl_payload *VAR_13,
      enum nfp_flower_tun_type VAR_14,
      struct netlink_ext_ack *VAR_15)
{
 u32 VAR_16;
 int VAR_17;
 u8 *VAR_18;
 u8 *VAR_19;

 VAR_16 = FUNC_11(VAR_9, VAR_12);

 FUNC_0(VAR_13->unmasked_data, 0, VAR_11->key_size);
 FUNC_0(VAR_13->mask_data, 0, VAR_11->key_size);

 VAR_18 = VAR_13->unmasked_data;
 VAR_19 = VAR_13->mask_data;

 FUNC_8((struct nfp_flower_meta_tci *)VAR_18,
        (struct nfp_flower_meta_tci *)VAR_19,
        VAR_10, VAR_11->key_layer);
 VAR_18 += sizeof(struct nfp_flower_meta_tci);
 VAR_19 += sizeof(struct nfp_flower_meta_tci);


 if (VAR_3 & VAR_11->key_layer) {
  FUNC_1((struct nfp_flower_ext_meta *)VAR_18,
         VAR_11->key_layer_two);
  FUNC_1((struct nfp_flower_ext_meta *)VAR_19,
         VAR_11->key_layer_two);
  VAR_18 += sizeof(struct nfp_flower_ext_meta);
  VAR_19 += sizeof(struct nfp_flower_ext_meta);
 }


 VAR_17 = FUNC_9((struct nfp_flower_in_port *)VAR_18,
          VAR_16, 0, VAR_14, VAR_15);
 if (VAR_17)
  return VAR_17;


 VAR_17 = FUNC_9((struct nfp_flower_in_port *)VAR_19,
          VAR_16, 1, VAR_14, VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_18 += sizeof(struct nfp_flower_in_port);
 VAR_19 += sizeof(struct nfp_flower_in_port);

 if (VAR_6 & VAR_11->key_layer) {
  FUNC_7((struct nfp_flower_mac_mpls *)VAR_18,
           (struct nfp_flower_mac_mpls *)VAR_19,
           VAR_10);
  VAR_18 += sizeof(struct nfp_flower_mac_mpls);
  VAR_19 += sizeof(struct nfp_flower_mac_mpls);
 }

 if (VAR_7 & VAR_11->key_layer) {
  FUNC_10((struct nfp_flower_tp_ports *)VAR_18,
      (struct nfp_flower_tp_ports *)VAR_19,
      VAR_10);
  VAR_18 += sizeof(struct nfp_flower_tp_ports);
  VAR_19 += sizeof(struct nfp_flower_tp_ports);
 }

 if (VAR_4 & VAR_11->key_layer) {
  FUNC_3((struct nfp_flower_ipv4 *)VAR_18,
     (struct nfp_flower_ipv4 *)VAR_19,
     VAR_10);
  VAR_18 += sizeof(struct nfp_flower_ipv4);
  VAR_19 += sizeof(struct nfp_flower_ipv4);
 }

 if (VAR_5 & VAR_11->key_layer) {
  FUNC_6((struct nfp_flower_ipv6 *)VAR_18,
     (struct nfp_flower_ipv6 *)VAR_19,
     VAR_10);
  VAR_18 += sizeof(struct nfp_flower_ipv6);
  VAR_19 += sizeof(struct nfp_flower_ipv6);
 }

 if (VAR_11->key_layer_two & VAR_2) {
  __be32 VAR_20;

  FUNC_4((void *)VAR_18, (void *)VAR_19, VAR_10);
  VAR_20 = ((struct nfp_flower_ipv4_gre_tun *)VAR_18)->ipv4.dst;
  VAR_18 += sizeof(struct nfp_flower_ipv4_gre_tun);
  VAR_19 += sizeof(struct nfp_flower_ipv4_gre_tun);




  VAR_13->nfp_tun_ipv4_addr = VAR_20;
  FUNC_12(VAR_9, VAR_20);
 }

 if (VAR_11->key_layer & VAR_8 ||
     VAR_11->key_layer_two & VAR_0) {
  __be32 VAR_21;

  FUNC_5((void *)VAR_18, (void *)VAR_19, VAR_10);
  VAR_21 = ((struct nfp_flower_ipv4_udp_tun *)VAR_18)->ipv4.dst;
  VAR_18 += sizeof(struct nfp_flower_ipv4_udp_tun);
  VAR_19 += sizeof(struct nfp_flower_ipv4_udp_tun);




  VAR_13->nfp_tun_ipv4_addr = VAR_21;
  FUNC_12(VAR_9, VAR_21);

  if (VAR_11->key_layer_two & VAR_1) {
   VAR_17 = FUNC_2(VAR_18, VAR_19, VAR_10);
   if (VAR_17)
    return VAR_17;
  }
 }

 return 0;
}
