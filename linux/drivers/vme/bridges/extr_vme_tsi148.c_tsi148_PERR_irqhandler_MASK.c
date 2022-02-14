
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {int parent; struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,int ,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct vme_bridge *VAR_7)
{
 struct tsi148_driver *VAR_8;

 VAR_8 = VAR_7->driver_priv;

 FUNC_0(VAR_7->parent, "PCI Exception at address: 0x%08x:%08x, "
  "attributes: %08x\n",
  FUNC_1(VAR_8->base + VAR_3),
  FUNC_1(VAR_8->base + VAR_0),
  FUNC_1(VAR_8->base + VAR_1));

 FUNC_0(VAR_7->parent, "PCI-X attribute reg: %08x, PCI-X split "
  "completion reg: %08x\n",
  FUNC_1(VAR_8->base + VAR_4),
  FUNC_1(VAR_8->base + VAR_5));

 FUNC_2(VAR_2, VAR_8->base + VAR_1);

 return VAR_6;
}
