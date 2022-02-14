
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct vxlan_dev {int cfg; } ;
struct TYPE_20__ {scalar_t__ sa_family; } ;
struct TYPE_19__ {void* sin6_addr; } ;
struct TYPE_17__ {void* s_addr; } ;
struct TYPE_18__ {TYPE_6__ sin_addr; } ;
struct TYPE_11__ {TYPE_9__ sa; TYPE_8__ sin6; TYPE_7__ sin; } ;
struct TYPE_15__ {scalar_t__ sa_family; } ;
struct TYPE_14__ {void* sin6_addr; } ;
struct TYPE_12__ {void* s_addr; } ;
struct TYPE_13__ {TYPE_1__ sin_addr; } ;
struct TYPE_16__ {TYPE_4__ sa; TYPE_3__ sin6; TYPE_2__ sin; } ;
struct vxlan_config {scalar_t__ vni; int label; void* df; void* mtu; int flags; int dst_port; void* port_max; void* port_min; void* addrmax; void* age_interval; void* ttl; void* tos; void* remote_ifindex; TYPE_10__ saddr; TYPE_5__ remote_ip; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ifla_vxlan_port_range {int high; int low; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr*,char*) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (struct vxlan_config*,int *,int) ;
 int FUNC_4 (struct vxlan_config*,int ,int) ;
 struct vxlan_dev* FUNC_5 (struct net_device*) ;
 struct ifla_vxlan_port_range* FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*) ;
 void* FUNC_9 (struct nlattr*) ;
 void* FUNC_10 (struct nlattr*) ;
 void* FUNC_11 (struct nlattr*) ;
 void* FUNC_12 (struct nlattr*) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (struct vxlan_config*,struct nlattr**,size_t,int ,int,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_15(struct nlattr *VAR_51[], struct nlattr *VAR_52[],
    struct net_device *VAR_53, struct vxlan_config *VAR_54,
    bool VAR_55, struct netlink_ext_ack *VAR_56)
{
 struct vxlan_dev *VAR_57 = FUNC_5(VAR_53);
 int VAR_58 = 0;

 FUNC_4(VAR_54, 0, sizeof(*VAR_54));


 if (VAR_55)
  FUNC_3(VAR_54, &VAR_57->cfg, sizeof(*VAR_54));

 if (VAR_52[VAR_13]) {
  __be32 VAR_59 = FUNC_2(FUNC_11(VAR_52[VAR_13]));

  if (VAR_55 && (VAR_59 != VAR_54->vni)) {
   FUNC_1(VAR_56, VAR_51[VAR_13], "Cannot change VNI");
   return -VAR_3;
  }
  VAR_54->vni = FUNC_2(FUNC_11(VAR_52[VAR_13]));
 }

 if (VAR_52[VAR_11]) {
  if (VAR_55 && (VAR_54->remote_ip.sa.sa_family != VAR_0)) {
   FUNC_1(VAR_56, VAR_51[VAR_11], "New group address family does not match old group");
   return -VAR_3;
  }

  VAR_54->remote_ip.sin.sin_addr.s_addr = FUNC_10(VAR_52[VAR_11]);
  VAR_54->remote_ip.sa.sa_family = VAR_0;
 } else if (VAR_52[VAR_12]) {
  if (!FUNC_0(VAR_2)) {
   FUNC_1(VAR_56, VAR_51[VAR_12], "IPv6 support not enabled in the kernel");
   return -VAR_4;
  }

  if (VAR_55 && (VAR_54->remote_ip.sa.sa_family != VAR_1)) {
   FUNC_1(VAR_56, VAR_51[VAR_12], "New group address family does not match old group");
   return -VAR_3;
  }

  VAR_54->remote_ip.sin6.sin6_addr = FUNC_9(VAR_52[VAR_12]);
  VAR_54->remote_ip.sa.sa_family = VAR_1;
 }

 if (VAR_52[VAR_20]) {
  if (VAR_55 && (VAR_54->saddr.sa.sa_family != VAR_0)) {
   FUNC_1(VAR_56, VAR_51[VAR_20], "New local address family does not match old");
   return -VAR_3;
  }

  VAR_54->saddr.sin.sin_addr.s_addr = FUNC_10(VAR_52[VAR_20]);
  VAR_54->saddr.sa.sa_family = VAR_0;
 } else if (VAR_52[VAR_21]) {
  if (!FUNC_0(VAR_2)) {
   FUNC_1(VAR_56, VAR_51[VAR_21], "IPv6 support not enabled in the kernel");
   return -VAR_4;
  }

  if (VAR_55 && (VAR_54->saddr.sa.sa_family != VAR_1)) {
   FUNC_1(VAR_56, VAR_51[VAR_21], "New local address family does not match old");
   return -VAR_3;
  }


  VAR_54->saddr.sin6.sin6_addr = FUNC_9(VAR_52[VAR_21]);
  VAR_54->saddr.sa.sa_family = VAR_1;
 }

 if (VAR_52[VAR_19])
  VAR_54->remote_ifindex = FUNC_11(VAR_52[VAR_19]);

 if (VAR_52[VAR_29])
  VAR_54->tos = FUNC_12(VAR_52[VAR_29]);

 if (VAR_52[VAR_30])
  VAR_54->ttl = FUNC_12(VAR_52[VAR_30]);

 if (VAR_52[VAR_31]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_31,
        VAR_47, VAR_55, 0,
        VAR_56);
  if (VAR_58)
   return VAR_58;

 }

 if (VAR_52[VAR_16])
  VAR_54->label = FUNC_8(VAR_52[VAR_16]) &
        VAR_35;

 if (VAR_52[VAR_17]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_17,
        VAR_41, VAR_55, 1,
        VAR_56);
  if (VAR_58)
   return VAR_58;
 } else if (!VAR_55) {

  VAR_54->flags |= VAR_41;
 }

 if (VAR_52[VAR_6])
  VAR_54->age_interval = FUNC_11(VAR_52[VAR_6]);

 if (VAR_52[VAR_24]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_24,
        VAR_42, VAR_55, 0,
        VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_52[VAR_28]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_28,
        VAR_46, VAR_55, 0,
        VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_52[VAR_14]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_14,
        VAR_39, VAR_55, 0,
        VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_52[VAR_15]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_15,
        VAR_40, VAR_55, 0,
        VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_52[VAR_18]) {
  if (VAR_55) {
   FUNC_1(VAR_56, VAR_51[VAR_18],
         "Cannot change limit");
   return -VAR_3;
  }
  VAR_54->addrmax = FUNC_11(VAR_52[VAR_18]);
 }

 if (VAR_52[VAR_7]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_7,
        VAR_36, VAR_55, 0,
        VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_52[VAR_23]) {
  if (!VAR_55) {
   const struct ifla_vxlan_port_range *VAR_60
    = FUNC_6(VAR_52[VAR_23]);
   VAR_54->port_min = FUNC_13(VAR_60->low);
   VAR_54->port_max = FUNC_13(VAR_60->high);
  } else {
   FUNC_1(VAR_56, VAR_51[VAR_23],
         "Cannot change port range");
   return -VAR_3;
  }
 }

 if (VAR_52[VAR_22]) {
  if (VAR_55) {
   FUNC_1(VAR_56, VAR_51[VAR_22],
         "Cannot change port");
   return -VAR_3;
  }
  VAR_54->dst_port = FUNC_7(VAR_52[VAR_22]);
 }

 if (VAR_52[VAR_32]) {
  if (VAR_55) {
   FUNC_1(VAR_56, VAR_51[VAR_32],
         "Cannot change UDP_CSUM flag");
   return -VAR_3;
  }
  if (!FUNC_12(VAR_52[VAR_32]))
   VAR_54->flags |= VAR_50;
 }

 if (VAR_52[VAR_34]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_34,
        VAR_49, VAR_55,
        0, VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_52[VAR_33]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_33,
        VAR_48, VAR_55,
        0, VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_52[VAR_27]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_27,
        VAR_45, VAR_55, 0,
        VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_52[VAR_26]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_26,
        VAR_44, VAR_55, 0,
        VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_52[VAR_9]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_9,
        VAR_37, VAR_55, 0, VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_52[VAR_10]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_10,
        VAR_38, VAR_55, 0,
        VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_52[VAR_25]) {
  VAR_58 = FUNC_14(VAR_54, VAR_52, VAR_25,
        VAR_43, VAR_55,
        0, VAR_56);
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_51[VAR_5]) {
  if (VAR_55) {
   FUNC_1(VAR_56, VAR_51[VAR_5],
         "Cannot change mtu");
   return -VAR_3;
  }
  VAR_54->mtu = FUNC_11(VAR_51[VAR_5]);
 }

 if (VAR_52[VAR_8])
  VAR_54->df = FUNC_12(VAR_52[VAR_8]);

 return 0;
}
