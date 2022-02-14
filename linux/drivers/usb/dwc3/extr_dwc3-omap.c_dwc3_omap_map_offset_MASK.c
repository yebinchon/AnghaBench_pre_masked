
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc3_omap {int debug_offset; int utmi_otg_offset; int irqmisc_offset; int irq0_offset; int irq_eoi_offset; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static void FUNC_1(struct dwc3_omap *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev->of_node;
 if (FUNC_0(VAR_6, "ti,am437x-dwc3")) {
  VAR_5->irq_eoi_offset = VAR_1;
  VAR_5->irq0_offset = VAR_2;
  VAR_5->irqmisc_offset = VAR_3;
  VAR_5->utmi_otg_offset = VAR_4;
  VAR_5->debug_offset = VAR_0;
 }
}
