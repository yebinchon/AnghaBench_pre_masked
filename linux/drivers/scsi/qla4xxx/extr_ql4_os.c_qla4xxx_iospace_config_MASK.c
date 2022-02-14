
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {unsigned long pio_address; unsigned long pio_length; int reg; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 unsigned long FUNC_2 (int ,int) ;
 unsigned long FUNC_3 (int ,int) ;
 unsigned long FUNC_4 (int ,int) ;
 int FUNC_5 (int ,struct scsi_qla_host*,char*) ;

int FUNC_6(struct scsi_qla_host *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;

 VAR_8 = FUNC_4(VAR_7->pdev, 0);
 VAR_9 = FUNC_3(VAR_7->pdev, 0);
 VAR_10 = FUNC_2(VAR_7->pdev, 0);
 if (VAR_10 & VAR_2) {
  if (VAR_9 < VAR_6) {
   FUNC_5(VAR_5, VAR_7,
    "Invalid PCI I/O region size\n");
   VAR_8 = 0;
  }
 } else {
  FUNC_5(VAR_5, VAR_7, "region #0 not a PIO resource\n");
  VAR_8 = 0;
 }


 VAR_11 = FUNC_4(VAR_7->pdev, 1);
 VAR_12 = FUNC_3(VAR_7->pdev, 1);
 VAR_13 = FUNC_2(VAR_7->pdev, 1);

 if (!(VAR_13 & VAR_3)) {
  FUNC_5(VAR_4, VAR_7,
      "region #0 not an MMIO resource, aborting\n");

  goto iospace_error_exit;
 }

 if (VAR_12 < VAR_6) {
  FUNC_5(VAR_4, VAR_7,
      "Invalid PCI mem region size, aborting\n");
  goto iospace_error_exit;
 }

 if (FUNC_1(VAR_7->pdev, VAR_0)) {
  FUNC_5(VAR_5, VAR_7,
      "Failed to reserve PIO/MMIO regions\n");

  goto iospace_error_exit;
 }

 VAR_7->pio_address = VAR_8;
 VAR_7->pio_length = VAR_9;
 VAR_7->reg = FUNC_0(VAR_11, VAR_6);
 if (!VAR_7->reg) {
  FUNC_5(VAR_4, VAR_7,
      "cannot remap MMIO, aborting\n");

  goto iospace_error_exit;
 }

 return 0;

iospace_error_exit:
 return -VAR_1;
}
