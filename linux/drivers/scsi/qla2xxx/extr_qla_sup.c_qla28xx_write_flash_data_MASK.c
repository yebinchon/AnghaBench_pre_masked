
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int ulong ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int u64 ;
struct secure_flash_update_block {int dummy; } ;
struct TYPE_21__ {scalar_t__ fac_supported; int secure_fw; scalar_t__ secure_adapter; } ;
struct qla_hw_data {int fdt_block_size; TYPE_1__* pdev; TYPE_2__ flags; } ;
struct qla_flt_region {scalar_t__ code; scalar_t__ attribute; } ;
struct TYPE_22__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_20__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *,int,scalar_t__*,int ) ;
 int FUNC_2 (int *,int,void*,scalar_t__) ;
 int FUNC_3 (struct qla_hw_data*,int) ;
 int FUNC_4 (void*,int*,int) ;
 int FUNC_5 (int ,TYPE_3__*,int,char*,int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (scalar_t__,TYPE_3__*,int,char*,...) ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int*,int,int,int *) ;
 int FUNC_11 (TYPE_3__*,int,struct qla_flt_region*) ;
 int FUNC_12 (TYPE_3__*,int ,scalar_t__,int,scalar_t__,int) ;
 int FUNC_13 (TYPE_3__*,scalar_t__,int ,int) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*,int,int ) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*,int ,int) ;
 int FUNC_19 (TYPE_3__*,int ) ;
 int FUNC_20 (int ,int *) ;

__attribute__((used)) static int
FUNC_21(scsi_qla_host_t *VAR_16, uint32_t *VAR_17, uint32_t VAR_18,
    uint32_t VAR_19)
{
 struct qla_hw_data *VAR_20 = VAR_16->hw;
 ulong VAR_21;
 ulong VAR_22 = VAR_9;
 uint32_t VAR_23, VAR_24, VAR_25;
 void *VAR_26 = ((void*)0);
 dma_addr_t VAR_27;
 int VAR_28;
 struct secure_flash_update_block *VAR_29;
 dma_addr_t VAR_30;
 uint32_t VAR_31 = VAR_18 << 2;
 uint32_t VAR_32 = 0;
 struct qla_flt_region VAR_33;
 bool VAR_34 = 0;
 uint32_t VAR_35, VAR_36 = 0;
 uint32_t *VAR_37 = ((void*)0);


 VAR_28 = FUNC_11(VAR_16, VAR_31, &VAR_33);

 if (VAR_28 != VAR_12) {
  FUNC_6(VAR_15, VAR_16, 0xffff,
      "Invalid address %x - not a region start address\n",
      VAR_31);
  goto done;
 }


 VAR_26 = FUNC_1(&VAR_20->pdev->dev, VAR_10,
     &VAR_27, VAR_6);
 if (!VAR_26) {
  FUNC_6(VAR_15, VAR_16, 0x7095,
      "Failed allocate burst (%x bytes)\n", VAR_10);
  VAR_28 = VAR_11;
  goto done;
 }





 if (VAR_20->flags.secure_adapter && VAR_33.attribute) {

  FUNC_6(VAR_15 + VAR_14, VAR_16, 0xffff,
      "Region %x is secure\n", VAR_33.code);

  if (VAR_33.code == VAR_4 ||
      VAR_33.code == VAR_5) {
   VAR_37 = VAR_17;


   VAR_35 = FUNC_0(VAR_37[3]);
   VAR_36 = FUNC_0(VAR_37[9]);

   VAR_32 = VAR_35;
   VAR_37 += VAR_35;


   VAR_35 = FUNC_0(VAR_37[3]);

   VAR_32 += VAR_35;
   VAR_37 += VAR_35;


   VAR_35 = FUNC_0(VAR_37[2]);


   VAR_32 += VAR_35;
   VAR_37 += VAR_35;

   if (VAR_36 & VAR_0) {

    VAR_35 = FUNC_0(VAR_37[2]);


    VAR_32 += VAR_35;
    VAR_37 += VAR_35;
   }
  } else {
   FUNC_6(VAR_15 + VAR_14, VAR_16, 0xffff,
       "Secure region %x not supported\n",
       VAR_33.code);
   VAR_28 = VAR_11;
   goto done;
  }

  VAR_29 = FUNC_1(&VAR_20->pdev->dev,
   sizeof(struct secure_flash_update_block), &VAR_30,
   VAR_6);
  if (!VAR_29) {
   FUNC_6(VAR_15, VAR_16, 0xffff,
       "Unable to allocate memory for SFUB\n");
   VAR_28 = VAR_11;
   goto done;
  }

  VAR_28 = FUNC_10(VAR_16, VAR_17, VAR_19,
   VAR_32, (uint8_t *)VAR_29);

  if (VAR_28 != VAR_12)
   goto done;

  FUNC_6(VAR_15 + VAR_14, VAR_16, 0xffff,
      "SFUB extract and verify successful\n");
 }

 VAR_24 = (VAR_20->fdt_block_size >> 2) - 1;
 VAR_23 = ~VAR_24;


 VAR_28 = FUNC_19(VAR_16, VAR_1);
 if (VAR_28 != VAR_12) {
  FUNC_6(VAR_15, VAR_16, 0xffff,
      "Unable to lock flash semaphore.");
  goto done;
 }

 FUNC_6(VAR_15 + VAR_14, VAR_16, 0x7095,
     "Unprotect flash...\n");
 VAR_28 = FUNC_9(VAR_16);
 if (VAR_28) {
  FUNC_19(VAR_16, VAR_2);
  FUNC_6(VAR_15, VAR_16, 0x7096, "Failed unprotect flash\n");
  goto done;
 }

 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++, VAR_18++) {
  VAR_25 = (VAR_18 & VAR_23) << 2;


  if (!(VAR_18 & VAR_24)) {
   FUNC_6(VAR_15 + VAR_14, VAR_16, 0x7095,
       "Erase sector %#x...\n", VAR_18);
   VAR_28 = FUNC_7(VAR_16, VAR_25);
   if (VAR_28) {
    FUNC_5(VAR_13, VAR_16, 0x7007,
        "Failed erase sector %#x\n", VAR_18);
    goto write_protect;
   }
  }
 }

 if (VAR_20->flags.secure_adapter) {





  if (!VAR_20->flags.secure_fw) {
   FUNC_6(VAR_15 + VAR_14, VAR_16, 0xffff,
       "Disable Write and Release Semaphore.");
   VAR_28 = FUNC_8(VAR_16);
   if (VAR_28 != VAR_12) {
    FUNC_19(VAR_16,
     VAR_2);
    FUNC_6(VAR_15, VAR_16, 0xffff,
        "Unable to protect flash.");
    goto done;
   }

   FUNC_6(VAR_15 + VAR_14, VAR_16, 0xffff,
       "Reset chip to ROM.");
   FUNC_20(VAR_7, &VAR_16->dpc_flags);
   FUNC_20(VAR_8, &VAR_16->dpc_flags);
   FUNC_17(VAR_16);
   VAR_28 = FUNC_14(VAR_16);
   if (VAR_28 != VAR_12) {
    FUNC_6(VAR_15, VAR_16, 0xffff,
        "Unable to reset to ROM code.");
    goto done;
   }
   VAR_34 = 1;
   VAR_20->flags.fac_supported = 0;

   FUNC_6(VAR_15 + VAR_14, VAR_16, 0xffff,
       "Lock Semaphore");
   VAR_28 = FUNC_18(VAR_16,
       VAR_3, 0x00020002);
   if (VAR_28 != VAR_12) {
    FUNC_6(VAR_15, VAR_16, 0xffff,
        "Unable to lock flash semaphore.");
    goto done;
   }


   FUNC_6(VAR_15 + VAR_14, VAR_16, 0xffff,
       "Enable Write.");
   VAR_28 = FUNC_16(VAR_16, 0x7ffd0101, 0);
   if (VAR_28) {
    FUNC_6(VAR_15, VAR_16, 0x7096,
        "Failed unprotect flash\n");
    goto done;
   }
  }


  if (VAR_33.attribute && VAR_32) {
   FUNC_6(VAR_15 + VAR_14, VAR_16, 0xffff,
       "Sending Secure Flash MB Cmd\n");
   VAR_28 = FUNC_12(VAR_16, 0, VAR_33.code,
    VAR_32, VAR_30,
    sizeof(struct secure_flash_update_block));
   if (VAR_28 != VAR_12) {
    FUNC_6(VAR_15, VAR_16, 0xffff,
        "Secure Flash MB Cmd failed %x.", VAR_28);
    goto write_protect;
   }
  }

 }


 VAR_18 = VAR_31 >> 2;

 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++, VAR_18++, VAR_17++) {
  VAR_25 = (VAR_18 & VAR_23) << 2;


  if (VAR_19 - VAR_21 < VAR_22)
   VAR_22 = VAR_19 - VAR_21;


  FUNC_4(VAR_26, VAR_17, VAR_22 << 2);


  FUNC_6(VAR_15 + VAR_14, VAR_16, 0x7095,
      "Write burst (%#lx dwords)...\n", VAR_22);
  VAR_28 = FUNC_13(VAR_16, VAR_27,
      FUNC_3(VAR_20, VAR_18), VAR_22);
  if (VAR_28 != VAR_12) {
   FUNC_6(VAR_15, VAR_16, 0x7097,
       "Failed burst write at %x (%p/%#llx)...\n",
       FUNC_3(VAR_20, VAR_18), VAR_26,
       (u64)VAR_27);
   break;
  }

  VAR_21 += VAR_22 - 1;
  VAR_18 += VAR_22 - 1;
  VAR_17 += VAR_22 - 1;
  continue;
 }

write_protect:
 FUNC_6(VAR_15 + VAR_14, VAR_16, 0x7095,
     "Protect flash...\n");
 VAR_28 = FUNC_8(VAR_16);
 if (VAR_28) {
  FUNC_19(VAR_16, VAR_2);
  FUNC_6(VAR_15, VAR_16, 0x7099,
      "Failed protect flash\n");
 }

 if (VAR_34 == 1) {

  FUNC_20(VAR_7, &VAR_16->dpc_flags);
  FUNC_17(VAR_16);

  VAR_28 = FUNC_15(VAR_16);
  if (VAR_28 != VAR_12)
   FUNC_6(VAR_15, VAR_16, 0xffff,
       "Adapter did not come out of reset\n");
 }

done:
 if (VAR_26)
  FUNC_2(&VAR_20->pdev->dev,
      VAR_10, VAR_26, VAR_27);

 return VAR_28;
}
