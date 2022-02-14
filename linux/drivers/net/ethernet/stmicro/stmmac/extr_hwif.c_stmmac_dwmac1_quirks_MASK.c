
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {scalar_t__ synopsys_id; int extend_desc; int device; TYPE_1__* plat; struct mac_device_info* hw; } ;
struct mac_device_info {int * desc; } ;
struct TYPE_2__ {scalar_t__ enh_desc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct stmmac_priv*) ;

__attribute__((used)) static int FUNC_3(struct stmmac_priv *VAR_3)
{
 struct mac_device_info *VAR_4 = VAR_3->hw;

 if (VAR_3->plat->enh_desc) {
  FUNC_0(VAR_3->device, "Enhanced/Alternate descriptors\n");


  if (VAR_3->synopsys_id >= VAR_0) {
   FUNC_0(VAR_3->device, "Enabled extended descriptors\n");
   VAR_3->extend_desc = 1;
  } else {
   FUNC_1(VAR_3->device, "Extended descriptors not supported\n");
  }

  VAR_4->desc = &VAR_1;
 } else {
  FUNC_0(VAR_3->device, "Normal descriptors\n");
  VAR_4->desc = &VAR_2;
 }

 FUNC_2(VAR_3);
 return 0;
}
