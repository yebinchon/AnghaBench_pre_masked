
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct vxlan_fdb {int dummy; } ;
struct TYPE_2__ {int remote_vni; } ;
struct vxlan_dev {TYPE_1__ default_dst; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 struct vxlan_fdb* FUNC_1 (struct vxlan_dev*,unsigned char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vxlan_fdb*) ;
 struct vxlan_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,struct vxlan_dev*,struct vxlan_fdb*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_3,
    struct nlattr *VAR_4[],
    struct net_device *VAR_5,
    const unsigned char *VAR_6,
    u16 VAR_7, u32 VAR_8, u32 VAR_9,
    struct netlink_ext_ack *VAR_10)
{
 struct vxlan_dev *VAR_11 = FUNC_4(VAR_5);
 struct vxlan_fdb *VAR_12;
 __be32 VAR_13;
 int VAR_14;

 if (VAR_4[VAR_1])
  VAR_13 = FUNC_2(FUNC_5(VAR_4[VAR_1]));
 else
  VAR_13 = VAR_11->default_dst.remote_vni;

 FUNC_6();

 VAR_12 = FUNC_1(VAR_11, VAR_6, VAR_13);
 if (!VAR_12) {
  FUNC_0(VAR_10, "Fdb entry not found");
  VAR_14 = -VAR_0;
  goto errout;
 }

 VAR_14 = FUNC_8(VAR_3, VAR_11, VAR_12, VAR_8, VAR_9,
        VAR_2, 0, FUNC_3(VAR_12));
errout:
 FUNC_7();
 return VAR_14;
}
