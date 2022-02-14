
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vxlan_sock {int dummy; } ;
struct vxlan_dev {int dummy; } ;
struct net {int dummy; } ;
typedef int sa_family_t ;
typedef int __be32 ;
typedef int __be16 ;


 struct vxlan_sock* FUNC_0 (struct net*,int ,int ,int ,int) ;
 struct vxlan_dev* FUNC_1 (struct vxlan_sock*,int,int ) ;

__attribute__((used)) static struct vxlan_dev *FUNC_2(struct net *VAR_0, int VAR_1,
     __be32 VAR_2, sa_family_t VAR_3,
     __be16 VAR_4, u32 VAR_5)
{
 struct vxlan_sock *VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_3, VAR_4, VAR_5, VAR_1);
 if (!VAR_6)
  return ((void*)0);

 return FUNC_1(VAR_6, VAR_1, VAR_2);
}
