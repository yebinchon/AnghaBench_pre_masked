
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_mmcif_host {int sd_error; int dma_active; int mrq; int addr; scalar_t__ ccs_enable; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct sh_mmcif_host*,int ,int) ;
 int FUNC_2 (struct sh_mmcif_host*) ;
 struct device* FUNC_3 (struct sh_mmcif_host*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_10, void *VAR_11)
{
 struct sh_mmcif_host *VAR_12 = VAR_11;
 struct device *VAR_13 = FUNC_3(VAR_12);
 u32 VAR_14, VAR_15;

 VAR_14 = FUNC_4(VAR_12->addr, VAR_8);
 VAR_15 = FUNC_4(VAR_12->addr, VAR_9);
 if (VAR_12->ccs_enable)
  FUNC_5(VAR_12->addr, VAR_8, ~(VAR_14 & VAR_15));
 else
  FUNC_5(VAR_12->addr, VAR_8, VAR_1 | ~(VAR_14 & VAR_15));
 FUNC_1(VAR_12, VAR_9, VAR_14 & VAR_7);

 if (VAR_14 & ~VAR_7)
  FUNC_0(VAR_13, "IRQ state = 0x%08x incompletely cleared\n",
   VAR_14);

 if (VAR_14 & VAR_4 || VAR_14 & ~VAR_0) {
  VAR_12->sd_error = 1;
  FUNC_0(VAR_13, "int err state = 0x%08x\n", VAR_14);
 }
 if (VAR_14 & ~(VAR_3 | VAR_2)) {
  if (!VAR_12->mrq)
   FUNC_0(VAR_13, "NULL IRQ state = 0x%08x\n", VAR_14);
  if (!VAR_12->dma_active)
   return VAR_6;
  else if (VAR_12->sd_error)
   FUNC_2(VAR_12);
 } else {
  FUNC_0(VAR_13, "Unexpected IRQ 0x%x\n", VAR_14);
 }

 return VAR_5;
}
