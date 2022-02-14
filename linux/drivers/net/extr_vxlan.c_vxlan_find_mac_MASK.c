
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vxlan_fdb {scalar_t__ used; } ;
struct vxlan_dev {int dummy; } ;
typedef int __be32 ;


 struct vxlan_fdb* FUNC_0 (struct vxlan_dev*,int const*,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static struct vxlan_fdb *FUNC_1(struct vxlan_dev *VAR_1,
     const u8 *VAR_2, __be32 VAR_3)
{
 struct vxlan_fdb *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 && VAR_4->used != VAR_0)
  VAR_4->used = VAR_0;

 return VAR_4;
}
