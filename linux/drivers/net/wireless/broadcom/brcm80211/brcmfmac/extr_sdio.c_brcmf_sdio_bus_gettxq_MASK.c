
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktq {int dummy; } ;
struct device {int dummy; } ;
struct brcmf_sdio_dev {struct brcmf_sdio* bus; } ;
struct brcmf_sdio {struct pktq txq; } ;
struct TYPE_2__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;


 struct brcmf_bus* FUNC_0 (struct device*) ;

__attribute__((used)) static struct pktq *FUNC_1(struct device *VAR_0)
{
 struct brcmf_bus *VAR_1 = FUNC_0(VAR_0);
 struct brcmf_sdio_dev *VAR_2 = VAR_1->bus_priv.sdio;
 struct brcmf_sdio *VAR_3 = VAR_2->bus;

 return &VAR_3->txq;
}
