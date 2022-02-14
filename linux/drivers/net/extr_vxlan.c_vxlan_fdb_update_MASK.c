
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
 struct vxlan_fdb* FUNC_0 (struct vxlan_dev*,int const*,int ) ;
 int FUNC_1 (int ,char*,int const*) ;
 int FUNC_2 (struct vxlan_dev*,int const*,union vxlan_addr*,int,int,int ,int ,int ,int ,int,int,struct netlink_ext_ack*) ;
 int FUNC_3 (struct vxlan_dev*,union vxlan_addr*,int,int,int ,int ,int ,int,struct vxlan_fdb*,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_4(struct vxlan_dev *VAR_4,
       const u8 *VAR_5, union vxlan_addr *VAR_6,
       __u16 VAR_7, __u16 VAR_8,
       __be16 VAR_9, __be32 VAR_10, __be32 VAR_11,
       __u32 VAR_12, __u16 VAR_13,
       bool VAR_14,
       struct netlink_ext_ack *VAR_15)
{
 struct vxlan_fdb *VAR_16;

 VAR_16 = FUNC_0(VAR_4, VAR_5, VAR_10);
 if (VAR_16) {
  if (VAR_8 & VAR_3) {
   FUNC_1(VAR_4->dev,
       "lost race to create %pM\n", VAR_5);
   return -VAR_0;
  }

  return FUNC_3(VAR_4, VAR_6, VAR_7, VAR_8, VAR_9,
       VAR_11, VAR_12, VAR_13, VAR_16,
       VAR_14, VAR_15);
 } else {
  if (!(VAR_8 & VAR_2))
   return -VAR_1;

  return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
            VAR_9, VAR_10, VAR_11, VAR_12,
            VAR_13, VAR_14, VAR_15);
 }
}
