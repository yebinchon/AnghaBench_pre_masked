
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rtsx_pcr {int id; int rtsx_resv_buf_addr; int host_cmds_addr; int host_sg_tbl_addr; int msi_en; int remap_addr; int * rtsx_resv_buf; struct pci_dev* pci; int irq; int idle_work; int carddet_work; scalar_t__ card_removed; scalar_t__ card_inserted; int * host_sg_tbl_ptr; int * host_cmds_ptr; struct rtsx_pcr* pcr; } ;
struct pcr_handle {int id; int rtsx_resv_buf_addr; int host_cmds_addr; int host_sg_tbl_addr; int msi_en; int remap_addr; int * rtsx_resv_buf; struct pci_dev* pci; int irq; int idle_work; int carddet_work; scalar_t__ card_removed; scalar_t__ card_inserted; int * host_sg_tbl_ptr; int * host_cmds_ptr; struct pcr_handle* pcr; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; scalar_t__ revision; scalar_t__ device; scalar_t__ vendor; } ;
struct TYPE_4__ {int pdata_size; struct rtsx_pcr* platform_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct rtsx_pcr*,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int FUNC_4 (int *,char*,int ,int,int,int) ;
 int FUNC_5 (int *,struct rtsx_pcr*) ;
 int * FUNC_6 (int *,int ,int*,int ) ;
 int FUNC_7 (int *,int ,int *,int) ;
 int FUNC_8 (int ,void*) ;
 int FUNC_9 (int *,struct rtsx_pcr*,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct rtsx_pcr*) ;
 struct rtsx_pcr* FUNC_15 (int,int ) ;
 int FUNC_16 (int *,int,TYPE_1__*,int,int *,int ,int *) ;
 int FUNC_17 (int) ;
 int VAR_7 ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*,int ) ;
 int FUNC_25 (struct pci_dev*,int) ;
 int FUNC_26 (struct pci_dev*,int) ;
 int FUNC_27 (struct pci_dev*,int ) ;
 int FUNC_28 (struct pci_dev*) ;
 int FUNC_29 (struct rtsx_pcr*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_30 (struct rtsx_pcr*) ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_31 (int *,int ) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int ) ;

__attribute__((used)) static int FUNC_35(struct pci_dev *VAR_13,
     const struct pci_device_id *VAR_14)
{
 struct rtsx_pcr *VAR_15;
 struct pcr_handle *VAR_16;
 u32 VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21 = 0;

 FUNC_4(&(VAR_13->dev),
  ": Realtek PCI-E Card Reader found at %s [%04x:%04x] (rev %x)\n",
  FUNC_22(VAR_13), (int)VAR_13->vendor, (int)VAR_13->device,
  (int)VAR_13->revision);

 VAR_19 = FUNC_27(VAR_13, FUNC_2(32));
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_20(VAR_13);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_24(VAR_13, VAR_0);
 if (VAR_19)
  goto disable;

 VAR_15 = FUNC_15(sizeof(*VAR_15), VAR_3);
 if (!VAR_15) {
  VAR_19 = -VAR_1;
  goto release_pci;
 }

 VAR_16 = FUNC_15(sizeof(*VAR_16), VAR_3);
 if (!VAR_16) {
  VAR_19 = -VAR_1;
  goto free_pcr;
 }
 VAR_16->pcr = VAR_15;

 FUNC_10(VAR_3);
 FUNC_32(&VAR_11);
 VAR_19 = FUNC_9(&VAR_10, VAR_15, 0, 0, VAR_4);
 if (VAR_19 >= 0)
  VAR_15->id = VAR_19;
 FUNC_33(&VAR_11);
 FUNC_11();
 if (VAR_19 < 0)
  goto free_handle;

 VAR_15->pci = VAR_13;
 FUNC_5(&VAR_13->dev, VAR_16);

 if (FUNC_1(VAR_15, 0x525A))
  VAR_21 = 1;
 VAR_18 = FUNC_25(VAR_13, VAR_21);
 VAR_17 = FUNC_26(VAR_13, VAR_21);
 VAR_15->remap_addr = FUNC_12(VAR_17, VAR_18);
 if (!VAR_15->remap_addr) {
  VAR_19 = -VAR_1;
  goto free_handle;
 }

 VAR_15->rtsx_resv_buf = FUNC_6(&(VAR_13->dev),
   VAR_6, &(VAR_15->rtsx_resv_buf_addr),
   VAR_3);
 if (VAR_15->rtsx_resv_buf == ((void*)0)) {
  VAR_19 = -VAR_2;
  goto unmap;
 }
 VAR_15->host_cmds_ptr = VAR_15->rtsx_resv_buf;
 VAR_15->host_cmds_addr = VAR_15->rtsx_resv_buf_addr;
 VAR_15->host_sg_tbl_ptr = VAR_15->rtsx_resv_buf + VAR_5;
 VAR_15->host_sg_tbl_addr = VAR_15->rtsx_resv_buf_addr + VAR_5;

 VAR_15->card_inserted = 0;
 VAR_15->card_removed = 0;
 FUNC_3(&VAR_15->carddet_work, VAR_8);
 FUNC_3(&VAR_15->idle_work, VAR_9);

 VAR_15->msi_en = VAR_7;
 if (VAR_15->msi_en) {
  VAR_19 = FUNC_21(VAR_13);
  if (VAR_19)
   VAR_15->msi_en = 0;
 }

 VAR_19 = FUNC_29(VAR_15);
 if (VAR_19 < 0)
  goto disable_msi;

 FUNC_28(VAR_13);
 FUNC_34(VAR_15->irq);

 VAR_19 = FUNC_30(VAR_15);
 if (VAR_19 < 0)
  goto disable_irq;

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_12); VAR_20++) {
  VAR_12[VAR_20].platform_data = VAR_16;
  VAR_12[VAR_20].pdata_size = sizeof(*VAR_16);
 }
 VAR_19 = FUNC_16(&VAR_13->dev, VAR_15->id, VAR_12,
   FUNC_0(VAR_12), ((void*)0), 0, ((void*)0));
 if (VAR_19 < 0)
  goto disable_irq;

 FUNC_31(&VAR_15->idle_work, FUNC_17(200));

 return 0;

disable_irq:
 FUNC_8(VAR_15->irq, (void *)VAR_15);
disable_msi:
 if (VAR_15->msi_en)
  FUNC_19(VAR_15->pci);
 FUNC_7(&(VAR_15->pci->dev), VAR_6,
   VAR_15->rtsx_resv_buf, VAR_15->rtsx_resv_buf_addr);
unmap:
 FUNC_13(VAR_15->remap_addr);
free_handle:
 FUNC_14(VAR_16);
free_pcr:
 FUNC_14(VAR_15);
release_pci:
 FUNC_23(VAR_13);
disable:
 FUNC_18(VAR_13);

 return VAR_19;
}
