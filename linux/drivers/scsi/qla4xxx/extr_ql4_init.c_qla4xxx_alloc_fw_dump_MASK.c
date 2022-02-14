
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {int host_no; int fw_dump_tmplt_size; int fw_dump_capture_mask; int fw_dump_size; TYPE_1__* pdev; scalar_t__ fw_dump; scalar_t__ fw_dump_tmplt_hdr; int flags; } ;
struct qla4_8xxx_minidump_template_hdr {int capture_debug_level; int driver_capture_mask; int num_of_entries; scalar_t__* capture_size_array; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 void* FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int *,int,void*,int ) ;
 int FUNC_4 (scalar_t__,void*,int) ;
 int FUNC_5 (int ,struct scsi_qla_host*,char*,...) ;
 int VAR_5 ;
 int FUNC_6 (struct scsi_qla_host*,struct qla4_8xxx_minidump_template_hdr*) ;
 int FUNC_7 (struct scsi_qla_host*,int ) ;
 int FUNC_8 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct scsi_qla_host *VAR_6)
{
 int VAR_7;
 uint32_t VAR_8;
 int VAR_9, VAR_10;
 void *VAR_11;
 dma_addr_t VAR_12;
 struct qla4_8xxx_minidump_template_hdr *VAR_13;
 int VAR_14;

 if (VAR_6->fw_dump) {
  FUNC_5(VAR_3, VAR_6,
      "Firmware dump previously allocated.\n");
  return;
 }

 VAR_7 = FUNC_8(VAR_6);
 if (VAR_7 != VAR_4) {
  FUNC_5(VAR_2, VAR_6,
      "scsi%ld: Failed to get template size\n",
      VAR_6->host_no);
  return;
 }

 FUNC_1(VAR_0, &VAR_6->flags);


 VAR_11 = FUNC_2(&VAR_6->pdev->dev, VAR_6->fw_dump_tmplt_size,
        &VAR_12, VAR_1);
 if (!VAR_11) {
  FUNC_5(VAR_2, VAR_6,
      "scsi%ld: Failed to allocate DMA memory\n",
      VAR_6->host_no);
  return;
 }


 VAR_7 = FUNC_7(VAR_6, VAR_12);
 if (VAR_7 != VAR_4) {
  FUNC_5(VAR_2, VAR_6,
      "scsi%ld: Failed to get minidump template\n",
      VAR_6->host_no);
  goto alloc_cleanup;
 }

 VAR_13 = (struct qla4_8xxx_minidump_template_hdr *)VAR_11;

 VAR_14 = FUNC_6(VAR_6, VAR_13);

 VAR_8 = VAR_13->capture_debug_level;


 if ((VAR_5 >= 0x3 && VAR_5 <= 0x7F) ||
     (VAR_5 == 0xFF && VAR_14)) {
  VAR_6->fw_dump_capture_mask = VAR_5;
 } else {
  if (VAR_5 == 0xFF)
   FUNC_5(VAR_2, VAR_6, "Falling back to default capture mask, as PEX DMA is not supported\n");
  VAR_6->fw_dump_capture_mask = VAR_8;
 }

 VAR_13->driver_capture_mask = VAR_6->fw_dump_capture_mask;

 FUNC_0(FUNC_5(VAR_2, VAR_6, "Minimum num of entries = %d\n",
     VAR_13->num_of_entries));
 FUNC_0(FUNC_5(VAR_2, VAR_6, "Dump template size  = %d\n",
     VAR_6->fw_dump_tmplt_size));
 FUNC_0(FUNC_5(VAR_2, VAR_6, "Selected Capture mask =0x%x\n",
     VAR_6->fw_dump_capture_mask));


 for (VAR_9 = 0x2, VAR_10 = 1; (VAR_9 & 0xFF);
      VAR_9 <<= 1, VAR_10++) {
  if (VAR_9 & VAR_6->fw_dump_capture_mask)
   VAR_6->fw_dump_size += VAR_13->capture_size_array[VAR_10];
 }


 VAR_6->fw_dump_size += VAR_6->fw_dump_tmplt_size;
 VAR_6->fw_dump = FUNC_9(VAR_6->fw_dump_size);
 if (!VAR_6->fw_dump)
  goto alloc_cleanup;

 FUNC_0(FUNC_5(VAR_2, VAR_6,
     "Minidump Template Size = 0x%x KB\n",
     VAR_6->fw_dump_tmplt_size));
 FUNC_0(FUNC_5(VAR_2, VAR_6,
     "Total Minidump size = 0x%x KB\n", VAR_6->fw_dump_size));

 FUNC_4(VAR_6->fw_dump, VAR_11, VAR_6->fw_dump_tmplt_size);
 VAR_6->fw_dump_tmplt_hdr = VAR_6->fw_dump;

alloc_cleanup:
 FUNC_3(&VAR_6->pdev->dev, VAR_6->fw_dump_tmplt_size,
     VAR_11, VAR_12);
}
