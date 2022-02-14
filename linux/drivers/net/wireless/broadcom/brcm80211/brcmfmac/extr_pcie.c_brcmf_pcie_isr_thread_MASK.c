
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_pciedev_info {int in_irq; scalar_t__ state; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct brcmf_pciedev_info*,int) ;
 int FUNC_2 (struct brcmf_pciedev_info*) ;
 int FUNC_3 (struct brcmf_pciedev_info*) ;
 int FUNC_4 (struct brcmf_pciedev_info*,int ) ;
 int FUNC_5 (struct brcmf_pciedev_info*,int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct brcmf_pciedev_info *VAR_9 = (struct brcmf_pciedev_info *)VAR_8;
 u32 VAR_10;

 VAR_9->in_irq = 1;
 VAR_10 = FUNC_4(VAR_9, VAR_4);
 FUNC_0(VAR_6, "Enter %x\n", VAR_10);
 if (VAR_10) {
  FUNC_5(VAR_9, VAR_4,
           VAR_10);
  if (VAR_10 & (VAR_2 |
         VAR_3))
   FUNC_2(VAR_9);
  if (VAR_10 & VAR_1) {
   if (VAR_9->state == VAR_0)
    FUNC_6(
       &VAR_9->pdev->dev);
  }
 }
 FUNC_1(VAR_9, 0);
 if (VAR_9->state == VAR_0)
  FUNC_3(VAR_9);
 VAR_9->in_irq = 0;
 return VAR_5;
}
