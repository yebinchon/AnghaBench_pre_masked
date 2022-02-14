
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct wmi_pmc_cmd {int mem_base; void* ring_size; int op; int member_0; } ;
struct wil6210_vif {int mid; } ;
struct pmc_ctx {int num_descriptors; int descriptor_size; int last_cmd_status; int lock; TYPE_3__* descriptors; struct vring_tx_desc* pring_va; int pring_pa; } ;
struct wil6210_priv {int dma_addr_size; int main_ndev; struct pmc_ctx pmc; } ;
struct TYPE_5__ {void* addr_high; int addr_low; } ;
struct TYPE_6__ {int d0; void* length; scalar_t__ status; TYPE_1__ addr; } ;
struct vring_tx_desc {TYPE_2__ dma; } ;
struct device {int dummy; } ;
struct desc_alloc_info {int dummy; } ;
typedef int pmc_cmd ;
struct TYPE_7__ {struct vring_tx_desc* va; int pa; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (struct device*,int,int *,int ) ;
 int FUNC_6 (struct device*,int,struct vring_tx_desc*,int ) ;
 int FUNC_7 (struct device*,int ) ;
 TYPE_3__* FUNC_8 (int,int,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct wil6210_vif* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct wil6210_priv*,char*,...) ;
 int FUNC_17 (struct wil6210_priv*,char*,...) ;
 scalar_t__ FUNC_18 (struct pmc_ctx*) ;
 struct device* FUNC_19 (struct wil6210_priv*) ;
 int FUNC_20 (struct wil6210_priv*,int ,int ,struct wmi_pmc_cmd*,int) ;

void FUNC_21(struct wil6210_priv *VAR_9,
     int VAR_10,
     int VAR_11)
{
 u32 VAR_12;
 struct pmc_ctx *VAR_13 = &VAR_9->pmc;
 struct device *VAR_14 = FUNC_19(VAR_9);
 struct wil6210_vif *VAR_15 = FUNC_13(VAR_9->main_ndev);
 struct wmi_pmc_cmd VAR_16 = {0};
 int VAR_17 = -VAR_1;

 FUNC_11(&VAR_13->lock);

 if (FUNC_18(VAR_13)) {

  FUNC_17(VAR_9, "ERROR pmc is already allocated\n");
  goto no_release_err;
 }
 if ((VAR_10 <= 0) || (VAR_11 <= 0)) {
  FUNC_17(VAR_9,
   "Invalid params num_descriptors(%d), descriptor_size(%d)\n",
   VAR_10, VAR_11);
  VAR_17 = -VAR_0;
  goto no_release_err;
 }

 if (VAR_10 > (1 << VAR_6)) {
  FUNC_17(VAR_9,
   "num_descriptors(%d) exceeds max ring size %d\n",
   VAR_10, 1 << VAR_6);
  VAR_17 = -VAR_0;
  goto no_release_err;
 }

 if (VAR_10 > VAR_3 / VAR_11) {
  FUNC_17(VAR_9,
   "Overflow in num_descriptors(%d)*descriptor_size(%d)\n",
   VAR_10, VAR_11);
  VAR_17 = -VAR_0;
  goto no_release_err;
 }

 VAR_13->num_descriptors = VAR_10;
 VAR_13->descriptor_size = VAR_11;

 FUNC_16(VAR_9, "pmc_alloc: %d descriptors x %d bytes each\n",
       VAR_10, VAR_11);


 VAR_13->descriptors = FUNC_8(VAR_10,
      sizeof(struct desc_alloc_info),
      VAR_2);
 if (!VAR_13->descriptors) {
  FUNC_17(VAR_9, "ERROR allocating pmc skb list\n");
  goto no_release_err;
 }

 FUNC_16(VAR_9, "pmc_alloc: allocated descriptors info list %p\n",
       VAR_13->descriptors);
 if (VAR_9->dma_addr_size > 32)
  FUNC_7(VAR_14, FUNC_1(32));

 VAR_13->pring_va = FUNC_5(VAR_14,
   sizeof(struct vring_tx_desc) * VAR_10,
   &VAR_13->pring_pa,
   VAR_2);

 if (VAR_9->dma_addr_size > 32)
  FUNC_7(VAR_14,
       FUNC_1(VAR_9->dma_addr_size));

 FUNC_16(VAR_9,
       "pmc_alloc: allocated pring %p => %pad. %zd x %d = total %zd bytes\n",
       VAR_13->pring_va, &VAR_13->pring_pa,
       sizeof(struct vring_tx_desc),
       VAR_10,
       sizeof(struct vring_tx_desc) * VAR_10);

 if (!VAR_13->pring_va) {
  FUNC_17(VAR_9, "ERROR allocating pmc pring\n");
  goto release_pmc_skb_list;
 }





 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  struct vring_tx_desc *VAR_18 = &VAR_13->pring_va[VAR_12];
  struct vring_tx_desc VAR_19 = {}, *VAR_20 = &VAR_19;
  int VAR_21 = 0;

  VAR_13->descriptors[VAR_12].va = FUNC_5(VAR_14,
   VAR_11,
   &VAR_13->descriptors[VAR_12].pa,
   VAR_2);

  if (FUNC_14(!VAR_13->descriptors[VAR_12].va)) {
   FUNC_17(VAR_9, "ERROR allocating pmc descriptor %d", VAR_12);
   goto release_pmc_skbs;
  }

  for (VAR_21 = 0; VAR_21 < VAR_11 / sizeof(u32); VAR_21++) {
   u32 *VAR_22 = (u32 *)VAR_13->descriptors[VAR_12].va + VAR_21;
   *VAR_22 = VAR_4 | VAR_21;
  }


  VAR_20->dma.addr.addr_low =
   FUNC_3(FUNC_10(VAR_13->descriptors[VAR_12].pa));
  VAR_20->dma.addr.addr_high =
   FUNC_2((u16)FUNC_15(VAR_13->descriptors[VAR_12].pa));
  VAR_20->dma.status = 0;
  VAR_20->dma.length = FUNC_2(VAR_11);
  VAR_20->dma.d0 = FUNC_0(9) | VAR_5;
  *VAR_18 = *VAR_20;
 }

 FUNC_16(VAR_9, "pmc_alloc: allocated successfully\n");

 VAR_16.op = VAR_7;
 VAR_16.ring_size = FUNC_2(VAR_13->num_descriptors);
 VAR_16.mem_base = FUNC_4(VAR_13->pring_pa);

 FUNC_16(VAR_9, "pmc_alloc: send WMI_PMC_CMD with ALLOCATE op\n");
 VAR_13->last_cmd_status = FUNC_20(VAR_9,
     VAR_8,
     VAR_15->mid,
     &VAR_16,
     sizeof(VAR_16));
 if (VAR_13->last_cmd_status) {
  FUNC_17(VAR_9,
   "WMI_PMC_CMD with ALLOCATE op failed with status %d",
   VAR_13->last_cmd_status);
  goto release_pmc_skbs;
 }

 FUNC_12(&VAR_13->lock);

 return;

release_pmc_skbs:
 FUNC_17(VAR_9, "exit on error: Releasing skbs...\n");
 for (VAR_12 = 0; VAR_12 < VAR_10 && VAR_13->descriptors[VAR_12].va; VAR_12++) {
  FUNC_6(VAR_14,
      VAR_11,
      VAR_13->descriptors[VAR_12].va,
      VAR_13->descriptors[VAR_12].pa);

  VAR_13->descriptors[VAR_12].va = ((void*)0);
 }
 FUNC_17(VAR_9, "exit on error: Releasing pring...\n");

 FUNC_6(VAR_14,
     sizeof(struct vring_tx_desc) * VAR_10,
     VAR_13->pring_va,
     VAR_13->pring_pa);

 VAR_13->pring_va = ((void*)0);

release_pmc_skb_list:
 FUNC_17(VAR_9, "exit on error: Releasing descriptors info list...\n");
 FUNC_9(VAR_13->descriptors);
 VAR_13->descriptors = ((void*)0);

no_release_err:
 VAR_13->last_cmd_status = VAR_17;
 FUNC_12(&VAR_13->lock);
}
