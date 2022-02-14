
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vxlan_fdb {int eth_addr; int remotes; int vni; int used; int updated; void* flags; void* state; } ;
struct vxlan_dev {int dummy; } ;
typedef void* __u16 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct vxlan_fdb* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int const*,int ) ;

__attribute__((used)) static struct vxlan_fdb *FUNC_3(struct vxlan_dev *VAR_3,
      const u8 *VAR_4, __u16 VAR_5,
      __be32 VAR_6, __u16 VAR_7)
{
 struct vxlan_fdb *VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return ((void*)0);
 VAR_8->state = VAR_5;
 VAR_8->flags = VAR_7;
 VAR_8->updated = VAR_8->used = VAR_2;
 VAR_8->vni = VAR_6;
 FUNC_0(&VAR_8->remotes);
 FUNC_2(VAR_8->eth_addr, VAR_4, VAR_0);

 return VAR_8;
}
