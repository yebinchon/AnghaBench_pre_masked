
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef scalar_t__ uint32_t ;
typedef int u64 ;
struct qla_hw_data {int fdt_block_size; TYPE_1__* pdev; } ;
struct TYPE_11__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int *,int ,scalar_t__*,int ) ;
 int FUNC_7 (int *,int ,void*,scalar_t__) ;
 int FUNC_8 (struct qla_hw_data*,scalar_t__) ;
 int FUNC_9 (void*,scalar_t__*,scalar_t__) ;
 int FUNC_10 (int ,TYPE_2__*,int,char*,scalar_t__,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (scalar_t__,TYPE_2__*,int,char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (TYPE_2__*,scalar_t__) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct qla_hw_data*,int ,int ) ;
 int FUNC_16 (TYPE_2__*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_17(scsi_qla_host_t *VAR_6, uint32_t *VAR_7, uint32_t VAR_8,
    uint32_t VAR_9)
{
 int VAR_10;
 ulong VAR_11;
 ulong VAR_12 = VAR_1;
 uint32_t VAR_13, VAR_14, VAR_15;
 dma_addr_t VAR_16;
 void *VAR_17 = ((void*)0);
 struct qla_hw_data *VAR_18 = VAR_6->hw;

 if (!FUNC_0(VAR_18) && !FUNC_3(VAR_18) && !FUNC_4(VAR_18) &&
     !FUNC_1(VAR_18) && !FUNC_2(VAR_18))
  goto next;


 VAR_17 = FUNC_6(&VAR_18->pdev->dev, VAR_2,
     &VAR_16, VAR_0);
 if (!VAR_17) {
  FUNC_11(VAR_5, VAR_6, 0x7095,
      "Failed allocate burst (%x bytes)\n", VAR_2);
 }

next:
 FUNC_11(VAR_5 + VAR_4, VAR_6, 0x7095,
     "Unprotect flash...\n");
 VAR_10 = FUNC_14(VAR_6);
 if (VAR_10) {
  FUNC_11(VAR_5, VAR_6, 0x7096,
      "Failed to unprotect flash.\n");
  goto done;
 }

 VAR_14 = (VAR_18->fdt_block_size >> 2) - 1;
 VAR_13 = ~VAR_14;
 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++, VAR_8++, VAR_7++) {
  VAR_15 = (VAR_8 & VAR_13) << 2;


  if (!(VAR_8 & VAR_14)) {
   FUNC_11(VAR_5 + VAR_4, VAR_6, 0x7095,
       "Erase sector %#x...\n", VAR_8);

   VAR_10 = FUNC_12(VAR_6, VAR_15);
   if (VAR_10) {
    FUNC_10(VAR_3, VAR_6, 0x7007,
        "Failed to erase sector %x.\n", VAR_8);
    break;
   }
  }

  if (VAR_17) {

   if (VAR_9 - VAR_11 < VAR_12)
    VAR_12 = VAR_9 - VAR_11;


   FUNC_9(VAR_17, VAR_7, VAR_12 << 2);


   FUNC_11(VAR_5 + VAR_4, VAR_6, 0x7095,
       "Write burst (%#lx dwords)...\n", VAR_12);
   VAR_10 = FUNC_16(VAR_6, VAR_16,
       FUNC_8(VAR_18, VAR_8), VAR_12);
   if (!VAR_10) {
    VAR_11 += VAR_12 - 1;
    VAR_8 += VAR_12 - 1;
    VAR_7 += VAR_12 - 1;
    continue;
   }

   FUNC_11(VAR_5, VAR_6, 0x7097,
       "Failed burst-write at %x (%p/%#llx)....\n",
       FUNC_8(VAR_18, VAR_8), VAR_17,
       (u64)VAR_16);

   FUNC_7(&VAR_18->pdev->dev,
       VAR_2, VAR_17, VAR_16);
   VAR_17 = ((void*)0);
   if (FUNC_1(VAR_18) || FUNC_2(VAR_18))
    break;
   FUNC_11(VAR_5, VAR_6, 0x7098,
       "Reverting to slow write...\n");
  }


  VAR_10 = FUNC_15(VAR_18,
      FUNC_8(VAR_18, VAR_8), FUNC_5(*VAR_7));
  if (VAR_10) {
   FUNC_10(VAR_3, VAR_6, 0x7006,
       "Failed slopw write %x (%x)\n", VAR_8, *VAR_7);
   break;
  }
 }

 FUNC_11(VAR_5 + VAR_4, VAR_6, 0x7095,
     "Protect flash...\n");
 VAR_10 = FUNC_13(VAR_6);
 if (VAR_10)
  FUNC_11(VAR_5, VAR_6, 0x7099,
      "Failed to protect flash\n");
done:
 if (VAR_17)
  FUNC_7(&VAR_18->pdev->dev,
      VAR_2, VAR_17, VAR_16);

 return VAR_10;
}
