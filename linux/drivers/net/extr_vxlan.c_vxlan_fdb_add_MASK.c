
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sa_family; } ;
union vxlan_addr {TYPE_4__ sa; } ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ sa_family; } ;
struct TYPE_6__ {TYPE_1__ sa; } ;
struct TYPE_7__ {TYPE_2__ remote_ip; } ;
struct vxlan_dev {int * hash_lock; TYPE_3__ default_dst; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int ndm_state; int ndm_flags; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (struct vxlan_dev*,unsigned char const*,int ) ;
 struct vxlan_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nlattr**,struct vxlan_dev*,union vxlan_addr*,int *,int *,int *,size_t*) ;
 int FUNC_6 (struct vxlan_dev*,unsigned char const*,union vxlan_addr*,int,int ,int ,int ,int ,size_t,int,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_7(struct ndmsg *VAR_6, struct nlattr *VAR_7[],
    struct net_device *VAR_8,
    const unsigned char *VAR_9, u16 VAR_10, u16 VAR_11,
    struct netlink_ext_ack *VAR_12)
{
 struct vxlan_dev *VAR_13 = FUNC_1(VAR_8);

 union vxlan_addr VAR_14;
 __be16 VAR_15;
 __be32 VAR_16, VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 int VAR_20;

 if (!(VAR_6->ndm_state & (VAR_4|VAR_5))) {
  FUNC_2("RTM_NEWNEIGH with invalid state %#x\n",
   VAR_6->ndm_state);
  return -VAR_1;
 }

 if (VAR_7[VAR_2] == ((void*)0))
  return -VAR_1;

 VAR_20 = FUNC_5(VAR_7, VAR_13, &VAR_14, &VAR_15, &VAR_16, &VAR_17, &VAR_18);
 if (VAR_20)
  return VAR_20;

 if (VAR_13->default_dst.remote_ip.sa.sa_family != VAR_14.sa.sa_family)
  return -VAR_0;

 VAR_19 = FUNC_0(VAR_13, VAR_9, VAR_16);
 FUNC_3(&VAR_13->hash_lock[VAR_19]);
 VAR_20 = FUNC_6(VAR_13, VAR_9, &VAR_14, VAR_6->ndm_state, VAR_11,
          VAR_15, VAR_16, VAR_17, VAR_18,
          VAR_6->ndm_flags | VAR_3,
          1, VAR_12);
 FUNC_4(&VAR_13->hash_lock[VAR_19]);

 return VAR_20;
}
