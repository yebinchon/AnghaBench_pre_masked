
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct property {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct brcmfmac_sdio_pd {int oob_irq_supported; int oob_irq_nr; void* oob_irq_flags; void* drive_strength; } ;
struct TYPE_2__ {struct brcmfmac_sdio_pd sdio; } ;
struct brcmf_mp_device {int board_type; TYPE_1__ bus; } ;
typedef enum brcmf_bus_type { ____Placeholder_brcmf_bus_type } brcmf_bus_type ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device_node*,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*,char*) ;
 struct device_node* FUNC_5 (char*) ;
 struct property* FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct property*,int *) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,void**) ;

void FUNC_10(struct device *VAR_1, enum brcmf_bus_type VAR_2,
      struct brcmf_mp_device *VAR_3)
{
 struct brcmfmac_sdio_pd *VAR_4 = &VAR_3->bus.sdio;
 struct device_node *VAR_5, *VAR_6 = VAR_1->of_node;
 struct property *VAR_7;
 int VAR_8;
 u32 VAR_9;
 u32 VAR_10;


 VAR_5 = FUNC_5("/");
 if (VAR_5) {
  VAR_7 = FUNC_6(VAR_5, "compatible", ((void*)0));
  VAR_3->board_type = FUNC_8(VAR_7, ((void*)0));
  FUNC_7(VAR_5);
 }

 if (!VAR_6 || VAR_2 != VAR_0 ||
     !FUNC_4(VAR_6, "brcm,bcm4329-fmac"))
  return;

 if (FUNC_9(VAR_6, "brcm,drive-strength", &VAR_10) == 0)
  VAR_4->drive_strength = VAR_10;


 if (!FUNC_6(VAR_6, "interrupts", ((void*)0)))
  return;

 VAR_8 = FUNC_2(VAR_6, 0);
 if (!VAR_8) {
  FUNC_0("interrupt could not be mapped\n");
  return;
 }
 VAR_9 = FUNC_3(FUNC_1(VAR_8));

 VAR_4->oob_irq_supported = 1;
 VAR_4->oob_irq_nr = VAR_8;
 VAR_4->oob_irq_flags = VAR_9;
}
