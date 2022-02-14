
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vxlan_addr {int dummy; } vxlan_addr ;
typedef int u8 ;
struct vxlan_fdb {int dummy; } ;
struct vxlan_dev {int dev; } ;
struct netlink_ext_ack {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vxlan_fdb*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int ,char*,int const*,union vxlan_addr*) ;
 int FUNC_4 (struct vxlan_dev*,int const*,union vxlan_addr*,int,int ,int ,int ,int ,int,struct vxlan_fdb**) ;
 int FUNC_5 (struct vxlan_dev*,struct vxlan_fdb*,int,int) ;
 int FUNC_6 (struct vxlan_dev*,int const*,int ,struct vxlan_fdb*) ;
 int FUNC_7 (struct vxlan_dev*,struct vxlan_fdb*,int ,int ,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_8(struct vxlan_dev *VAR_4,
       const u8 *VAR_5, union vxlan_addr *VAR_6,
       __u16 VAR_7, __u16 VAR_8,
       __be16 VAR_9, __be32 VAR_10, __be32 VAR_11,
       __u32 VAR_12, __u16 VAR_13,
       bool VAR_14,
       struct netlink_ext_ack *VAR_15)
{
 __u16 VAR_16 = (VAR_13 & ~VAR_2);
 struct vxlan_fdb *VAR_17;
 int VAR_18;


 if ((VAR_8 & VAR_1) &&
     (FUNC_1(VAR_5) || FUNC_2(VAR_5)))
  return -VAR_0;

 FUNC_3(VAR_4->dev, "add %pM -> %pIS\n", VAR_5, VAR_6);
 VAR_18 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9, VAR_10,
         VAR_11, VAR_12, VAR_16, &VAR_17);
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_6(VAR_4, VAR_5, VAR_10, VAR_17);
 VAR_18 = FUNC_7(VAR_4, VAR_17, FUNC_0(VAR_17), VAR_3,
         VAR_14, VAR_15);
 if (VAR_18)
  goto err_notify;

 return 0;

err_notify:
 FUNC_5(VAR_4, VAR_17, 0, 0);
 return VAR_18;
}
