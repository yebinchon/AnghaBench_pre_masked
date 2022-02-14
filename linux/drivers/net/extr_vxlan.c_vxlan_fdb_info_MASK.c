
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int sa_family; } ;
struct TYPE_10__ {TYPE_1__ sa; } ;
struct vxlan_rdst {scalar_t__ remote_port; scalar_t__ remote_vni; scalar_t__ remote_ifindex; TYPE_4__ remote_ip; scalar_t__ offloaded; } ;
struct nda_cacheinfo {scalar_t__ ndm_refcnt; void* ndm_updated; scalar_t__ ndm_confirmed; void* ndm_used; } ;
struct vxlan_fdb {scalar_t__ vni; scalar_t__ updated; scalar_t__ used; struct nda_cacheinfo eth_addr; int flags; int state; } ;
struct TYPE_9__ {scalar_t__ dst_port; int flags; } ;
struct TYPE_8__ {scalar_t__ remote_vni; } ;
struct vxlan_dev {TYPE_3__ cfg; TYPE_2__ default_dst; int net; TYPE_6__* dev; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct ndmsg {int ndm_type; int ndm_flags; int ndm_ifindex; int ndm_state; int ndm_family; } ;
typedef int ci ;
struct TYPE_11__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (struct nda_cacheinfo) ;
 unsigned long VAR_16 ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ndmsg*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int,struct nda_cacheinfo*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,struct nlmsghdr*) ;
 struct ndmsg* FUNC_11 (struct nlmsghdr*) ;
 int FUNC_12 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_13 (struct sk_buff*,int ,int ,int,int,unsigned int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_4__*) ;
 scalar_t__ FUNC_16 (struct sk_buff*,int ,TYPE_4__*) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_17, struct vxlan_dev *VAR_18,
     const struct vxlan_fdb *VAR_19,
     u32 VAR_20, u32 VAR_21, int VAR_22, unsigned int VAR_23,
     const struct vxlan_rdst *VAR_24)
{
 unsigned long VAR_25 = VAR_16;
 struct nda_cacheinfo VAR_26;
 struct nlmsghdr *VAR_27;
 struct ndmsg *VAR_28;
 bool VAR_29, VAR_30;

 VAR_27 = FUNC_13(VAR_17, VAR_20, VAR_21, VAR_22, sizeof(*VAR_28), VAR_23);
 if (VAR_27 == ((void*)0))
  return -VAR_2;

 VAR_28 = FUNC_11(VAR_27);
 FUNC_4(VAR_28, 0, sizeof(*VAR_28));

 VAR_30 = VAR_29 = 1;

 if (VAR_22 == VAR_13) {
  VAR_29 = !FUNC_15(&VAR_24->remote_ip);
  VAR_30 = !FUNC_2(VAR_19->eth_addr);
  VAR_28->ndm_family = VAR_29 ? VAR_24->remote_ip.sa.sa_family : VAR_1;
 } else
  VAR_28->ndm_family = VAR_0;
 VAR_28->ndm_state = VAR_19->state;
 VAR_28->ndm_ifindex = VAR_18->dev->ifindex;
 VAR_28->ndm_flags = VAR_19->flags;
 if (VAR_24->offloaded)
  VAR_28->ndm_flags |= VAR_12;
 VAR_28->ndm_type = VAR_14;

 if (!FUNC_5(FUNC_1(VAR_18->dev), VAR_18->net) &&
     FUNC_8(VAR_17, VAR_7,
   FUNC_14(FUNC_1(VAR_18->dev), VAR_18->net)))
  goto nla_put_failure;

 if (VAR_30 && FUNC_6(VAR_17, VAR_8, VAR_3, &VAR_19->eth_addr))
  goto nla_put_failure;

 if (VAR_29 && FUNC_16(VAR_17, VAR_5, &VAR_24->remote_ip))
  goto nla_put_failure;

 if (VAR_24->remote_port && VAR_24->remote_port != VAR_18->cfg.dst_port &&
     FUNC_7(VAR_17, VAR_9, VAR_24->remote_port))
  goto nla_put_failure;
 if (VAR_24->remote_vni != VAR_18->default_dst.remote_vni &&
     FUNC_9(VAR_17, VAR_11, FUNC_0(VAR_24->remote_vni)))
  goto nla_put_failure;
 if ((VAR_18->cfg.flags & VAR_15) && VAR_19->vni &&
     FUNC_9(VAR_17, VAR_10,
   FUNC_0(VAR_19->vni)))
  goto nla_put_failure;
 if (VAR_24->remote_ifindex &&
     FUNC_9(VAR_17, VAR_6, VAR_24->remote_ifindex))
  goto nla_put_failure;

 VAR_26.ndm_used = FUNC_3(VAR_25 - VAR_19->used);
 VAR_26.ndm_confirmed = 0;
 VAR_26.ndm_updated = FUNC_3(VAR_25 - VAR_19->updated);
 VAR_26.ndm_refcnt = 0;

 if (FUNC_6(VAR_17, VAR_4, sizeof(VAR_26), &VAR_26))
  goto nla_put_failure;

 FUNC_12(VAR_17, VAR_27);
 return 0;

nla_put_failure:
 FUNC_10(VAR_17, VAR_27);
 return -VAR_2;
}
