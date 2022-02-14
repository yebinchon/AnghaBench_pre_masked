
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct pci_p2pdma_pagemap {int provider; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int pgmap; } ;




 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct pci_p2pdma_pagemap*,struct device*,struct scatterlist*,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct scatterlist*,int,int,unsigned long) ;
 int FUNC_4 (int ,struct pci_dev*) ;
 TYPE_1__* FUNC_5 (struct scatterlist*) ;
 struct pci_p2pdma_pagemap* FUNC_6 (int ) ;
 struct pci_dev* FUNC_7 (struct device*) ;

int FUNC_8(struct device *VAR_0, struct scatterlist *VAR_1,
  int VAR_2, enum dma_data_direction VAR_3, unsigned long VAR_4)
{
 struct pci_p2pdma_pagemap *VAR_5 =
  FUNC_6(FUNC_5(VAR_1)->pgmap);
 struct pci_dev *VAR_6;

 if (FUNC_0(!FUNC_2(VAR_0)))
  return 0;

 VAR_6 = FUNC_7(VAR_0);

 switch (FUNC_4(VAR_5->provider, VAR_6)) {
 case 128:
  return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 case 129:
  return FUNC_1(VAR_5, VAR_0, VAR_1, VAR_2);
 default:
  FUNC_0(1);
  return 0;
 }
}
