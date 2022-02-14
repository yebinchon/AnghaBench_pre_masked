
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vxlan_addr {int dummy; } vxlan_addr ;
struct vxlan_rdst {int offloaded; int list; int remote_ifindex; int remote_vni; int remote_port; union vxlan_addr remote_ip; int dst_cache; } ;
struct vxlan_fdb {int remotes; } ;
typedef int __u32 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (struct vxlan_rdst*) ;
 struct vxlan_rdst* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct vxlan_rdst* FUNC_4 (struct vxlan_fdb*,union vxlan_addr*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct vxlan_fdb *VAR_2,
       union vxlan_addr *VAR_3, __be16 VAR_4, __be32 VAR_5,
       __u32 VAR_6, struct vxlan_rdst **VAR_7)
{
 struct vxlan_rdst *VAR_8;

 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  return 0;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 if (FUNC_0(&VAR_8->dst_cache, VAR_1)) {
  FUNC_1(VAR_8);
  return -VAR_0;
 }

 VAR_8->remote_ip = *VAR_3;
 VAR_8->remote_port = VAR_4;
 VAR_8->offloaded = 0;
 VAR_8->remote_vni = VAR_5;
 VAR_8->remote_ifindex = VAR_6;

 FUNC_3(&VAR_8->list, &VAR_2->remotes);

 *VAR_7 = VAR_8;
 return 1;
}
