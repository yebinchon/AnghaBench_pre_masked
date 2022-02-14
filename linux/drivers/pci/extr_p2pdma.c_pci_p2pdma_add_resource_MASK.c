
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {int flags; scalar_t__ start; scalar_t__ end; } ;
struct dev_pagemap {TYPE_2__ res; int ref; int type; } ;
struct pci_p2pdma_pagemap {scalar_t__ bus_offset; struct pci_dev* provider; struct dev_pagemap pgmap; } ;
struct pci_dev {int dev; TYPE_1__* p2pdma; } ;
struct TYPE_4__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct dev_pagemap*) ;
 struct pci_p2pdma_pagemap* FUNC_4 (int *,int,int ) ;
 void* FUNC_5 (int *,struct dev_pagemap*) ;
 int FUNC_6 (int *,struct dev_pagemap*) ;
 int FUNC_7 (int ,unsigned long,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*,char*,TYPE_2__*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int) ;
 scalar_t__ FUNC_12 (struct pci_dev*,int) ;
 scalar_t__ FUNC_13 (struct pci_dev*,int) ;
 int FUNC_14 (TYPE_2__*) ;

int FUNC_15(struct pci_dev *VAR_5, int VAR_6, size_t VAR_7,
       u64 VAR_8)
{
 struct pci_p2pdma_pagemap *VAR_9;
 struct dev_pagemap *VAR_10;
 void *VAR_11;
 int VAR_12;

 if (!(FUNC_11(VAR_5, VAR_6) & VAR_3))
  return -VAR_0;

 if (VAR_8 >= FUNC_12(VAR_5, VAR_6))
  return -VAR_0;

 if (!VAR_7)
  VAR_7 = FUNC_12(VAR_5, VAR_6) - VAR_8;

 if (VAR_7 + VAR_8 > FUNC_12(VAR_5, VAR_6))
  return -VAR_0;

 if (!VAR_5->p2pdma) {
  VAR_12 = FUNC_10(VAR_5);
  if (VAR_12)
   return VAR_12;
 }

 VAR_9 = FUNC_4(&VAR_5->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = &VAR_9->pgmap;
 VAR_10->res.start = FUNC_13(VAR_5, VAR_6) + VAR_8;
 VAR_10->res.end = VAR_10->res.start + VAR_7 - 1;
 VAR_10->res.flags = FUNC_11(VAR_5, VAR_6);
 VAR_10->type = VAR_4;

 VAR_9->provider = VAR_5;
 VAR_9->bus_offset = FUNC_8(VAR_5, VAR_6) -
  FUNC_13(VAR_5, VAR_6);

 VAR_11 = FUNC_5(&VAR_5->dev, VAR_10);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  goto pgmap_free;
 }

 VAR_12 = FUNC_7(VAR_5->p2pdma->pool, (unsigned long)VAR_11,
   FUNC_8(VAR_5, VAR_6) + VAR_8,
   FUNC_14(&VAR_10->res), FUNC_2(&VAR_5->dev),
   VAR_10->ref);
 if (VAR_12)
  goto pages_free;

 FUNC_9(VAR_5, "added peer-to-peer DMA memory %pR\n",
   &VAR_10->res);

 return 0;

pages_free:
 FUNC_6(&VAR_5->dev, VAR_10);
pgmap_free:
 FUNC_3(&VAR_5->dev, VAR_10);
 return VAR_12;
}
