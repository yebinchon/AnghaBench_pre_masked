
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct resource {int dummy; } ;
struct nfp_bar {int index; int * iomem; scalar_t__ bitsize; int refcnt; scalar_t__ base; scalar_t__ mask; struct nfp6000_pcie* nfp; scalar_t__ barcfg; struct resource* resource; } ;
struct TYPE_8__ {int ** expl; int * em; int * csr; } ;
struct TYPE_6__ {int master_id; int signal_ref; TYPE_1__* group; int * data; int mutex; } ;
struct nfp6000_pcie {int bars; struct nfp_bar* bar; int dev; TYPE_4__ iomem; TYPE_2__ expl; TYPE_3__* pdev; } ;
typedef int status_msg ;
struct TYPE_7__ {int device; int devfn; struct resource* resource; } ;
struct TYPE_5__ {int* free; int * addr; scalar_t__ bitsize; } ;


 int FUNC_0 (struct nfp_bar*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int const VAR_3 ;
 int const FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int const FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;




 int FUNC_5 (int *) ;
 int VAR_14 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,char*,char*,int,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 void* FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct nfp6000_pcie*,struct nfp_bar*,int const) ;
 scalar_t__ FUNC_13 (struct nfp_bar*) ;
 int FUNC_14 (struct nfp_bar*) ;
 int FUNC_15 (struct resource*) ;
 int FUNC_16 (char*,int,char*,...) ;
 int FUNC_17 (struct nfp_bar*,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_18(struct nfp6000_pcie *VAR_15, u16 VAR_16)
{
 const u32 VAR_17 =
  FUNC_3(
   VAR_9) |
  VAR_3;
 const u32 VAR_18 =
  FUNC_3(
   VAR_4) |
  VAR_3 |
  FUNC_4(
   VAR_2);
 const u32 VAR_19[4] = {
  FUNC_3(
   VAR_5),
  FUNC_3(
   VAR_6),
  FUNC_3(
   VAR_7),
  FUNC_3(
   VAR_8),
 };
 char VAR_20[196] = {};
 int VAR_21, VAR_22, VAR_23;
 struct nfp_bar *VAR_24;
 int VAR_25;
 char *VAR_26, *VAR_27;

 VAR_26 = VAR_20 +
  FUNC_16(VAR_20, sizeof(VAR_20) - 1, "RESERVED BARs: ");
 VAR_27 = VAR_20 + sizeof(VAR_20) - 1;

 VAR_24 = &VAR_15->bar[0];
 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_15->bar); VAR_21++, VAR_24++) {
  struct resource *VAR_28;

  VAR_28 = &VAR_15->pdev->resource[(VAR_21 >> 3) * 2];


  if (!(FUNC_15(VAR_28) & VAR_1)) {
   VAR_24--;
   continue;
  }

  VAR_24->resource = VAR_28;
  VAR_24->barcfg = 0;

  VAR_24->nfp = VAR_15;
  VAR_24->index = VAR_21;
  VAR_24->mask = FUNC_13(VAR_24) - 1;
  VAR_24->bitsize = FUNC_8(VAR_24->mask);
  VAR_24->base = 0;
  VAR_24->iomem = ((void*)0);
 }

 VAR_15->bars = VAR_24 - &VAR_15->bar[0];
 if (VAR_15->bars < 8) {
  FUNC_6(VAR_15->dev, "No usable BARs found!\n");
  return -VAR_0;
 }

 VAR_23 = VAR_15->bars;



 FUNC_11(&VAR_15->expl.mutex);

 VAR_15->expl.master_id = ((FUNC_1(VAR_16) & 3) + 4)
  << 4;
 VAR_15->expl.signal_ref = 0x10;


 VAR_24 = &VAR_15->bar[0];
 if (FUNC_13(VAR_24) >= VAR_13)
  VAR_24->iomem = FUNC_9(FUNC_14(VAR_24),
          FUNC_13(VAR_24));
 if (VAR_24->iomem) {
  int VAR_29;

  VAR_26 += FUNC_16(VAR_26, VAR_27 - VAR_26, "0.0: General/MSI-X SRAM, ");
  FUNC_5(&VAR_24->refcnt);
  VAR_23--;

  FUNC_12(VAR_15, VAR_24, VAR_17);

  VAR_15->expl.data = VAR_24->iomem + VAR_12 + 0x1000;

  switch (VAR_15->pdev->device) {
  case 131:
   VAR_29 = VAR_15->pdev->devfn & 7;
   VAR_15->iomem.csr = VAR_24->iomem + FUNC_2(VAR_29);
   break;
  case 130:
  case 129:
  case 128:
   VAR_15->iomem.csr = VAR_24->iomem + FUNC_2(0);
   break;
  default:
   FUNC_6(VAR_15->dev, "Unsupported device ID: %04hx!\n",
    VAR_15->pdev->device);
   VAR_22 = -VAR_0;
   goto err_unmap_bar0;
  }
  VAR_15->iomem.em = VAR_24->iomem + VAR_10;
 }

 switch (VAR_15->pdev->device) {
 case 131:
  VAR_25 = 1;
  break;
 case 130:
 case 129:
 case 128:
  VAR_25 = 4;
  break;
 default:
  FUNC_6(VAR_15->dev, "Unsupported device ID: %04hx!\n",
   VAR_15->pdev->device);
  VAR_22 = -VAR_0;
  goto err_unmap_bar0;
 }


 VAR_24 = &VAR_15->bar[1];
 VAR_26 += FUNC_16(VAR_26, VAR_27 - VAR_26, "0.1: PCIe XPB/MSI-X PBA, ");
 FUNC_5(&VAR_24->refcnt);
 VAR_23--;

 FUNC_12(VAR_15, VAR_24, VAR_18);


 for (VAR_21 = 0; VAR_21 < 4; VAR_21++) {
  int VAR_30;

  if (VAR_21 >= VAR_11 || VAR_21 >= VAR_25) {
   VAR_15->expl.group[VAR_21].bitsize = 0;
   continue;
  }

  VAR_24 = &VAR_15->bar[4 + VAR_21];
  VAR_24->iomem = FUNC_9(FUNC_14(VAR_24),
          FUNC_13(VAR_24));
  if (VAR_24->iomem) {
   VAR_26 += FUNC_16(VAR_26, VAR_27 - VAR_26,
     "0.%d: Explicit%d, ", 4 + VAR_21, VAR_21);
   FUNC_5(&VAR_24->refcnt);
   VAR_23--;

   VAR_15->expl.group[VAR_21].bitsize = VAR_24->bitsize;
   VAR_15->expl.group[VAR_21].addr = VAR_24->iomem;
   FUNC_12(VAR_15, VAR_24, VAR_19[VAR_21]);

   for (VAR_30 = 0; VAR_30 < 4; VAR_30++)
    VAR_15->expl.group[VAR_21].free[VAR_30] = 1;
  }
  VAR_15->iomem.expl[VAR_21] = VAR_24->iomem;
 }


 FUNC_17(&VAR_15->bar[0], VAR_15->bars, sizeof(VAR_15->bar[0]),
      VAR_14, ((void*)0));

 FUNC_7(VAR_15->dev, "%sfree: %d/%d\n", VAR_20, VAR_23, VAR_15->bars);

 return 0;

err_unmap_bar0:
 if (VAR_15->bar[0].iomem)
  FUNC_10(VAR_15->bar[0].iomem);
 return VAR_22;
}
