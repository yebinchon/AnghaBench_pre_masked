
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_12__ {int version; int max_flowrings; int max_submissionrings; int max_completionrings; struct brcmf_pcie_ringbuf* flowrings; struct brcmf_pcie_ringbuf** commonrings; scalar_t__ ring_info_addr; } ;
struct brcmf_pciedev_info {int dma_idx_sz; int idxbuf_sz; TYPE_6__ shared; scalar_t__ tcm; scalar_t__ idxbuf_dmahandle; int read_ptr; int write_ptr; int idxbuf; TYPE_1__* pdev; } ;
struct brcmf_pcie_ringbuf {int w_idx_addr; int r_idx_addr; int id; int commonring; struct brcmf_pciedev_info* devinfo; } ;
struct TYPE_11__ {void* high_addr; void* low_addr; } ;
struct TYPE_10__ {void* high_addr; void* low_addr; } ;
struct TYPE_9__ {void* high_addr; void* low_addr; } ;
struct TYPE_8__ {void* high_addr; void* low_addr; } ;
struct brcmf_pcie_dhi_ringinfo {int ringmem; TYPE_5__ d2h_r_idx_hostaddr; TYPE_4__ d2h_w_idx_hostaddr; TYPE_3__ h2d_r_idx_hostaddr; TYPE_2__ h2d_w_idx_hostaddr; int h2d_r_idx_ptr; int h2d_w_idx_ptr; int d2h_r_idx_ptr; int d2h_w_idx_ptr; int max_flowrings; int max_completionrings; int max_submissionrings; } ;
struct brcmf_bus {int dummy; } ;
typedef int ringinfo ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,struct brcmf_pcie_ringbuf*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct brcmf_bus*,char*) ;
 struct brcmf_pcie_ringbuf* FUNC_3 (struct brcmf_pciedev_info*,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct brcmf_pciedev_info*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_5 (int) ;
 struct brcmf_bus* FUNC_6 (int *) ;
 int FUNC_7 (int *,int,scalar_t__*,int ) ;
 struct brcmf_pcie_ringbuf* FUNC_8 (int,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct brcmf_pcie_dhi_ringinfo*,scalar_t__,int) ;
 int FUNC_12 (scalar_t__,struct brcmf_pcie_dhi_ringinfo*,int) ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct brcmf_pciedev_info *VAR_17)
{
 struct brcmf_bus *VAR_18 = FUNC_6(&VAR_17->pdev->dev);
 struct brcmf_pcie_ringbuf *VAR_19;
 struct brcmf_pcie_ringbuf *VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u64 VAR_27;
 u32 VAR_28;
 u8 VAR_29;
 struct brcmf_pcie_dhi_ringinfo VAR_30;
 u16 VAR_31;
 u16 VAR_32;
 u16 VAR_33;

 FUNC_11(&VAR_30, VAR_17->tcm + VAR_17->shared.ring_info_addr,
        sizeof(VAR_30));
 if (VAR_17->shared.version >= 6) {
  VAR_32 = FUNC_9(VAR_30.max_submissionrings);
  VAR_31 = FUNC_9(VAR_30.max_flowrings);
  VAR_33 = FUNC_9(VAR_30.max_completionrings);
 } else {
  VAR_32 = FUNC_9(VAR_30.max_flowrings);
  VAR_31 = VAR_32 -
    VAR_3;
  VAR_33 = VAR_2;
 }

 if (VAR_17->dma_idx_sz != 0) {
  VAR_28 = (VAR_32 + VAR_33) *
   VAR_17->dma_idx_sz * 2;
  VAR_17->idxbuf = FUNC_7(&VAR_17->pdev->dev, VAR_28,
           &VAR_17->idxbuf_dmahandle,
           VAR_6);
  if (!VAR_17->idxbuf)
   VAR_17->dma_idx_sz = 0;
 }

 if (VAR_17->dma_idx_sz == 0) {
  VAR_21 = FUNC_10(VAR_30.d2h_w_idx_ptr);
  VAR_22 = FUNC_10(VAR_30.d2h_r_idx_ptr);
  VAR_23 = FUNC_10(VAR_30.h2d_w_idx_ptr);
  VAR_24 = FUNC_10(VAR_30.h2d_r_idx_ptr);
  VAR_29 = sizeof(u32);
  VAR_17->write_ptr = VAR_16;
  VAR_17->read_ptr = VAR_9;
  FUNC_1(VAR_7, "Using TCM indices\n");
 } else {
  FUNC_13(VAR_17->idxbuf, 0, VAR_28);
  VAR_17->idxbuf_sz = VAR_28;
  VAR_29 = VAR_17->dma_idx_sz;
  VAR_17->write_ptr = VAR_15;
  VAR_17->read_ptr = VAR_8;

  VAR_23 = 0;
  VAR_27 = (u64)VAR_17->idxbuf_dmahandle;
  VAR_30.h2d_w_idx_hostaddr.low_addr =
   FUNC_5(VAR_27 & 0xffffffff);
  VAR_30.h2d_w_idx_hostaddr.high_addr =
   FUNC_5(VAR_27 >> 32);

  VAR_24 = VAR_23 +
    VAR_32 * VAR_29;
  VAR_27 += VAR_32 * VAR_29;
  VAR_30.h2d_r_idx_hostaddr.low_addr =
   FUNC_5(VAR_27 & 0xffffffff);
  VAR_30.h2d_r_idx_hostaddr.high_addr =
   FUNC_5(VAR_27 >> 32);

  VAR_21 = VAR_24 +
    VAR_32 * VAR_29;
  VAR_27 += VAR_32 * VAR_29;
  VAR_30.d2h_w_idx_hostaddr.low_addr =
   FUNC_5(VAR_27 & 0xffffffff);
  VAR_30.d2h_w_idx_hostaddr.high_addr =
   FUNC_5(VAR_27 >> 32);

  VAR_22 = VAR_21 +
    VAR_33 * VAR_29;
  VAR_27 += VAR_33 * VAR_29;
  VAR_30.d2h_r_idx_hostaddr.low_addr =
   FUNC_5(VAR_27 & 0xffffffff);
  VAR_30.d2h_r_idx_hostaddr.high_addr =
   FUNC_5(VAR_27 >> 32);

  FUNC_12(VAR_17->tcm + VAR_17->shared.ring_info_addr,
       &VAR_30, sizeof(VAR_30));
  FUNC_1(VAR_7, "Using host memory indices\n");
 }

 VAR_25 = FUNC_10(VAR_30.ringmem);

 for (VAR_26 = 0; VAR_26 < VAR_3; VAR_26++) {
  VAR_19 = FUNC_3(VAR_17, VAR_26, VAR_25);
  if (!VAR_19)
   goto fail;
  VAR_19->w_idx_addr = VAR_23;
  VAR_19->r_idx_addr = VAR_24;
  VAR_19->id = VAR_26;
  VAR_17->shared.commonrings[VAR_26] = VAR_19;

  VAR_23 += VAR_29;
  VAR_24 += VAR_29;
  VAR_25 += VAR_4;
 }

 for (VAR_26 = VAR_3;
      VAR_26 < VAR_1; VAR_26++) {
  VAR_19 = FUNC_3(VAR_17, VAR_26, VAR_25);
  if (!VAR_19)
   goto fail;
  VAR_19->w_idx_addr = VAR_21;
  VAR_19->r_idx_addr = VAR_22;
  VAR_19->id = VAR_26;
  VAR_17->shared.commonrings[VAR_26] = VAR_19;

  VAR_21 += VAR_29;
  VAR_22 += VAR_29;
  VAR_25 += VAR_4;
 }

 VAR_17->shared.max_flowrings = VAR_31;
 VAR_17->shared.max_submissionrings = VAR_32;
 VAR_17->shared.max_completionrings = VAR_33;
 VAR_20 = FUNC_8(VAR_31, sizeof(*VAR_19), VAR_6);
 if (!VAR_20)
  goto fail;

 FUNC_1(VAR_7, "Nr of flowrings is %d\n", VAR_31);

 for (VAR_26 = 0; VAR_26 < VAR_31; VAR_26++) {
  VAR_19 = &VAR_20[VAR_26];
  VAR_19->devinfo = VAR_17;
  VAR_19->id = VAR_26 + VAR_0;
  FUNC_0(&VAR_19->commonring,
          VAR_10,
          VAR_11,
          VAR_12,
          VAR_13,
          VAR_14,
          VAR_19);
  VAR_19->w_idx_addr = VAR_23;
  VAR_19->r_idx_addr = VAR_24;
  VAR_23 += VAR_29;
  VAR_24 += VAR_29;
 }
 VAR_17->shared.flowrings = VAR_20;

 return 0;

fail:
 FUNC_2(VAR_18, "Allocating ring buffers failed\n");
 FUNC_4(VAR_17);
 return -VAR_5;
}
