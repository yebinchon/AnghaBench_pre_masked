
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct vxlan_dev {TYPE_1__ cfg; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct vxlan_dev *VAR_1, const u8 *VAR_2, __be32 VAR_3)
{
 if (VAR_1->cfg.flags & VAR_0)
  return FUNC_1(VAR_2, VAR_3);
 else
  return FUNC_0(VAR_2);
}
