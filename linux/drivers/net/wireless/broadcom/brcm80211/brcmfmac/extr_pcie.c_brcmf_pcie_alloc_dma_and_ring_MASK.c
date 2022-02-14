
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {scalar_t__ version; } ;
struct brcmf_pciedev_info {TYPE_2__* pdev; TYPE_1__ shared; } ;
struct brcmf_pcie_ringbuf {int commonring; struct brcmf_pciedev_info* devinfo; int dma_handle; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,size_t const,size_t const,void*) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int ,struct brcmf_pcie_ringbuf*) ;
 void* FUNC_2 (struct brcmf_pciedev_info*,size_t,size_t,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct brcmf_pciedev_info*,size_t,size_t const) ;
 size_t* VAR_10 ;
 size_t* VAR_11 ;
 size_t const* VAR_12 ;
 int FUNC_4 (int *,size_t,void*,int ) ;
 struct brcmf_pcie_ringbuf* FUNC_5 (int,int ) ;

__attribute__((used)) static struct brcmf_pcie_ringbuf *
FUNC_6(struct brcmf_pciedev_info *VAR_13, u32 VAR_14,
         u32 VAR_15)
{
 void *VAR_16;
 dma_addr_t VAR_17;
 struct brcmf_pcie_ringbuf *VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 const u32 *VAR_21;

 if (VAR_13->shared.version < VAR_0)
  VAR_21 = VAR_11;
 else
  VAR_21 = VAR_10;

 VAR_19 = VAR_12[VAR_14] * VAR_21[VAR_14];
 VAR_16 = FUNC_2(VAR_13, VAR_19,
   VAR_15 + VAR_3,
   &VAR_17);
 if (!VAR_16)
  return ((void*)0);

 VAR_20 = VAR_15 + VAR_2;
 FUNC_3(VAR_13, VAR_20, VAR_12[VAR_14]);
 VAR_20 = VAR_15 + VAR_1;
 FUNC_3(VAR_13, VAR_20, VAR_21[VAR_14]);

 VAR_18 = FUNC_5(sizeof(*VAR_18), VAR_4);
 if (!VAR_18) {
  FUNC_4(&VAR_13->pdev->dev, VAR_19, VAR_16,
      VAR_17);
  return ((void*)0);
 }
 FUNC_0(&VAR_18->commonring, VAR_12[VAR_14],
    VAR_21[VAR_14], VAR_16);
 VAR_18->dma_handle = VAR_17;
 VAR_18->devinfo = VAR_13;
 FUNC_1(&VAR_18->commonring,
         VAR_5,
         VAR_6,
         VAR_7,
         VAR_8,
         VAR_9, VAR_18);

 return (VAR_18);
}
