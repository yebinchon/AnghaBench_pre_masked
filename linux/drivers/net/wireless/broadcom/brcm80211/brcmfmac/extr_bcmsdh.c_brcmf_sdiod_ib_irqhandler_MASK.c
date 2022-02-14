
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {int dev; } ;
struct brcmf_sdio_dev {int bus; } ;
struct TYPE_2__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct brcmf_bus* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sdio_func *VAR_1)
{
 struct brcmf_bus *VAR_2 = FUNC_2(&VAR_1->dev);
 struct brcmf_sdio_dev *VAR_3 = VAR_2->bus_priv.sdio;

 FUNC_0(VAR_0, "IB intr triggered\n");

 FUNC_1(VAR_3->bus);
}
