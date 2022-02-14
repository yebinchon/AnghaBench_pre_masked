
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int fdt_block_size; int flash_data_off; TYPE_1__* pdev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *,int,scalar_t__*,int ) ;
 int FUNC_2 (int *,int,void*,scalar_t__) ;
 int FUNC_3 (void*,int*,int) ;
 int FUNC_4 (int ,struct scsi_qla_host*,int,char*,int,int) ;
 int VAR_4 ;
 int FUNC_5 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_5 ;
 int FUNC_6 (struct scsi_qla_host*,scalar_t__,int,int) ;
 int FUNC_7 (struct qla_hw_data*,int) ;
 int FUNC_8 (struct qla_hw_data*) ;
 int FUNC_9 (struct qla_hw_data*) ;
 int FUNC_10 (struct qla_hw_data*,int,int ) ;

__attribute__((used)) static int
FUNC_11(struct scsi_qla_host *VAR_6, uint32_t *VAR_7,
 uint32_t VAR_8, uint32_t VAR_9)
{
 int VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 dma_addr_t VAR_13;
 void *VAR_14 = ((void*)0);
 int VAR_15 = 0;
 struct qla_hw_data *VAR_16 = VAR_6->hw;

 VAR_10 = -1;


 if (VAR_15 && !(VAR_8 & 0xfff) &&
     VAR_9 > VAR_1) {
  VAR_14 = FUNC_1(&VAR_16->pdev->dev, VAR_2,
      &VAR_13, VAR_0);
  if (!VAR_14) {
   FUNC_5(VAR_5, VAR_6, 0xb01b,
       "Unable to allocate memory "
       "for optrom burst write (%x KB).\n",
       VAR_2 / 1024);
  }
 }

 VAR_12 = VAR_16->fdt_block_size - 1;

 VAR_10 = FUNC_9(VAR_16);
 if (VAR_10) {
  FUNC_5(VAR_5, VAR_6, 0xb01c,
      "Unable to unprotect flash for update.\n");
  goto write_done;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++, VAR_8 += 4, VAR_7++) {

  if ((VAR_8 & VAR_12) == 0) {

   VAR_10 = FUNC_7(VAR_16, VAR_8);
   if (VAR_10) {
    FUNC_5(VAR_5, VAR_6, 0xb01d,
        "Unable to erase sector: address=%x.\n",
        VAR_8);
    break;
   }
  }


  if (VAR_14 && (VAR_11 + VAR_1) <= VAR_9) {

   FUNC_3(VAR_14, VAR_7, VAR_2);

   VAR_10 = FUNC_6(VAR_6, VAR_13,
       (VAR_16->flash_data_off | VAR_8),
       VAR_1);
   if (VAR_10 != VAR_3) {
    FUNC_5(VAR_5, VAR_6, 0xb01e,
        "Unable to burst-write optrom segment "
        "(%x/%x/%llx).\n", VAR_10,
        (VAR_16->flash_data_off | VAR_8),
        (unsigned long long)VAR_13);
    FUNC_5(VAR_5, VAR_6, 0xb01f,
        "Reverting to slow-write.\n");

    FUNC_2(&VAR_16->pdev->dev,
        VAR_2, VAR_14, VAR_13);
    VAR_14 = ((void*)0);
   } else {
    VAR_11 += VAR_1 - 1;
    VAR_8 += VAR_1 - 1;
    VAR_7 += VAR_1 - 1;
    continue;
   }
  }

  VAR_10 = FUNC_10(VAR_16, VAR_8,
      FUNC_0(*VAR_7));
  if (VAR_10) {
   FUNC_4(VAR_4, VAR_6, 0xb020,
       "Unable to program flash address=%x data=%x.\n",
       VAR_8, *VAR_7);
   break;
  }
 }

 VAR_10 = FUNC_8(VAR_16);
 if (VAR_10)
  FUNC_5(VAR_5, VAR_6, 0xb021,
      "Unable to protect flash after update.\n");
write_done:
 if (VAR_14)
  FUNC_2(&VAR_16->pdev->dev,
      VAR_2, VAR_14, VAR_13);
 return VAR_10;
}
