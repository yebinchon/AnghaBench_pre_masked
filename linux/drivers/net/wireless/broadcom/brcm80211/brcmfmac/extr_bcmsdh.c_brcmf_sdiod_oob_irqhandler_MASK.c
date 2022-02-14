
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_sdio_dev {int irq_en; int bus; } ;
struct TYPE_2__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct brcmf_bus* FUNC_2 (void*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct brcmf_bus *VAR_4 = FUNC_2(VAR_3);
 struct brcmf_sdio_dev *VAR_5 = VAR_4->bus_priv.sdio;

 FUNC_0(VAR_0, "OOB intr triggered\n");




 if (VAR_5->irq_en) {
  FUNC_3(VAR_2);
  VAR_5->irq_en = 0;
 }

 FUNC_1(VAR_5->bus);

 return VAR_1;
}
