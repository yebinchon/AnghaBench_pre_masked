
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct alcor_sdmmc_host {int sg_count; scalar_t__ sg; int dev; struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pci_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct alcor_pci_priv*,scalar_t__,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct alcor_sdmmc_host *VAR_1)
{
 struct alcor_pci_priv *VAR_2 = VAR_1->alcor_pci;
 u32 VAR_3;

 if (!VAR_1->sg_count)
  return;

 if (!VAR_1->sg) {
  FUNC_1(VAR_1->dev, "have blocks, but no SG\n");
  return;
 }

 if (!FUNC_3(VAR_1->sg)) {
  FUNC_1(VAR_1->dev, "DMA SG len == 0\n");
  return;
 }


 VAR_3 = (u32)FUNC_2(VAR_1->sg);

 FUNC_0(VAR_2, VAR_3, VAR_0);
 VAR_1->sg = FUNC_4(VAR_1->sg);
 VAR_1->sg_count--;
}
