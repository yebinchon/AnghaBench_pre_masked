
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vxlan_fdb {int hlist; } ;
struct vxlan_dev {int addrcnt; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct vxlan_dev*,int const*,int ) ;

__attribute__((used)) static void FUNC_2(struct vxlan_dev *VAR_0, const u8 *VAR_1,
        __be32 VAR_2, struct vxlan_fdb *VAR_3)
{
 ++VAR_0->addrcnt;
 FUNC_0(&VAR_3->hlist,
      FUNC_1(VAR_0, VAR_1, VAR_2));
}
