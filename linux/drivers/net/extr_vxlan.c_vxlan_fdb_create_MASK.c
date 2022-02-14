
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union vxlan_addr {int dummy; } vxlan_addr ;
typedef int u8 ;
struct vxlan_rdst {int dummy; } ;
struct vxlan_fdb {int dummy; } ;
struct TYPE_2__ {scalar_t__ addrmax; } ;
struct vxlan_dev {scalar_t__ addrcnt; int dev; TYPE_1__ cfg; } ;
typedef int __u32 ;
typedef int __u16 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vxlan_fdb*) ;
 int FUNC_1 (int ,char*,int const*,union vxlan_addr*) ;
 struct vxlan_fdb* FUNC_2 (struct vxlan_dev*,int const*,int ,int ,int ) ;
 int FUNC_3 (struct vxlan_fdb*,union vxlan_addr*,int ,int ,int ,struct vxlan_rdst**) ;

__attribute__((used)) static int FUNC_4(struct vxlan_dev *VAR_2,
       const u8 *VAR_3, union vxlan_addr *VAR_4,
       __u16 VAR_5, __be16 VAR_6, __be32 VAR_7,
       __be32 VAR_8, __u32 VAR_9, __u16 VAR_10,
       struct vxlan_fdb **VAR_11)
{
 struct vxlan_rdst *VAR_12 = ((void*)0);
 struct vxlan_fdb *VAR_13;
 int VAR_14;

 if (VAR_2->cfg.addrmax &&
     VAR_2->addrcnt >= VAR_2->cfg.addrmax)
  return -VAR_1;

 FUNC_1(VAR_2->dev, "add %pM -> %pIS\n", VAR_3, VAR_4);
 VAR_13 = FUNC_2(VAR_2, VAR_3, VAR_5, VAR_7, VAR_10);
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_3(VAR_13, VAR_4, VAR_6, VAR_8, VAR_9, &VAR_12);
 if (VAR_14 < 0) {
  FUNC_0(VAR_13);
  return VAR_14;
 }

 *VAR_11 = VAR_13;

 return 0;
}
