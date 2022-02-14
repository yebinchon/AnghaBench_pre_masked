
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlanhdr {int vx_flags; int vx_vni; } ;
struct vxlan_sock {int dummy; } ;
struct vxlan_dev {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {TYPE_1__* dev; } ;
typedef int __be32 ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 struct vxlan_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct vxlanhdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 struct vxlan_dev* FUNC_5 (struct vxlan_sock*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct vxlan_dev *VAR_6;
 struct vxlan_sock *VAR_7;
 struct vxlanhdr *VAR_8;
 __be32 VAR_9;

 if (!FUNC_0(VAR_5, FUNC_2(VAR_5) + VAR_3))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_5);

 if (!(VAR_8->vx_flags & VAR_2))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4);
 if (!VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_8->vx_vni);
 VAR_6 = FUNC_5(VAR_7, VAR_5->dev->ifindex, VAR_9);
 if (!VAR_6)
  return -VAR_1;

 return 0;
}
