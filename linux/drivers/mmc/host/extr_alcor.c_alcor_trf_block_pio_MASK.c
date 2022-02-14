
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {size_t consumed; int * addr; int length; } ;
struct alcor_sdmmc_host {TYPE_2__ sg_miter; int blocks; int dev; TYPE_1__* data; scalar_t__ dma_on; struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pci_priv {scalar_t__ iobase; } ;
struct TYPE_4__ {int flags; size_t blksz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,size_t) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__,int *,size_t) ;
 int FUNC_3 (scalar_t__,int *,size_t) ;
 size_t FUNC_4 (int ,size_t) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(struct alcor_sdmmc_host *VAR_2, bool VAR_3)
{
 struct alcor_pci_priv *VAR_4 = VAR_2->alcor_pci;
 size_t VAR_5, VAR_6;
 u8 *VAR_7;

 if (!VAR_2->blocks)
  return;

 if (VAR_2->dma_on) {
  FUNC_1(VAR_2->dev, "configured DMA but got PIO request.\n");
  return;
 }

 if (!!(VAR_2->data->flags & VAR_1) != VAR_3) {
  FUNC_1(VAR_2->dev, "got unexpected direction %i != %i\n",
   !!(VAR_2->data->flags & VAR_1), VAR_3);
 }

 if (!FUNC_5(&VAR_2->sg_miter))
  return;

 VAR_5 = VAR_2->data->blksz;
 VAR_6 = FUNC_4(VAR_2->sg_miter.length, VAR_5);

 FUNC_0(VAR_2->dev, "PIO, %s block size: 0x%zx\n",
  VAR_3 ? "read" : "write", VAR_5);

 VAR_2->sg_miter.consumed = VAR_6;
 VAR_2->blocks--;

 VAR_7 = VAR_2->sg_miter.addr;

 if (VAR_3)
  FUNC_2(VAR_4->iobase + VAR_0, VAR_7, VAR_6 >> 2);
 else
  FUNC_3(VAR_4->iobase + VAR_0, VAR_7, VAR_6 >> 2);

 FUNC_6(&VAR_2->sg_miter);
}
