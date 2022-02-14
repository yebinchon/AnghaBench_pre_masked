
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ScsiReqBlk {int dummy; } ;
struct DeviceCtlBlk {int dummy; } ;
struct AdapterCtlBlk {unsigned long io_port_base; unsigned int irq_level; int io_port_len; int srb_array; int dcb_map; int scsi_host; int eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct AdapterCtlBlk*) ;
 int FUNC_1 (struct AdapterCtlBlk*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct AdapterCtlBlk*) ;
 scalar_t__ FUNC_4 (struct AdapterCtlBlk*) ;
 int FUNC_5 (struct AdapterCtlBlk*) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,struct AdapterCtlBlk*,int ,int ,int,int,int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int,struct AdapterCtlBlk*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (long,int ) ;
 scalar_t__ FUNC_12 (unsigned int,int ,int ,int ,struct AdapterCtlBlk*) ;
 int FUNC_13 (unsigned long,int ,int ) ;
 int FUNC_14 (struct AdapterCtlBlk*) ;

__attribute__((used)) static int FUNC_15(struct AdapterCtlBlk *VAR_7, unsigned long VAR_8,
   u32 VAR_9, unsigned int VAR_10)
{
 if (!FUNC_13(VAR_8, VAR_9, VAR_1)) {
  FUNC_8(VAR_4, "Failed to reserve IO region 0x%lx\n", VAR_8);
  goto failed;
 }

 VAR_7->io_port_base = VAR_8;
 VAR_7->io_port_len = VAR_9;

 if (FUNC_12(VAR_10, VAR_6, VAR_2, VAR_1, VAR_7)) {

  FUNC_8(VAR_5, "Failed to register IRQ\n");
  goto failed;
 }

 VAR_7->irq_level = VAR_10;


 FUNC_6(&VAR_7->eeprom, VAR_8);
  FUNC_10(&VAR_7->eeprom);


 FUNC_1(VAR_7);


  FUNC_3(VAR_7);

 if (FUNC_4(VAR_7)) {
  FUNC_8(VAR_3, "Memory allocation for SG tables failed\n");
  goto failed;
 }
 FUNC_2(VAR_7->scsi_host);
 FUNC_0(VAR_7);
 FUNC_14(VAR_7);

 FUNC_7(VAR_0,
  "adapter_init: acb=%p, pdcb_map=%p psrb_array=%p "
  "size{acb=0x%04x dcb=0x%04x srb=0x%04x}\n",
  VAR_7, VAR_7->dcb_map, VAR_7->srb_array, sizeof(struct AdapterCtlBlk),
  sizeof(struct DeviceCtlBlk), sizeof(struct ScsiReqBlk));
 return 0;

failed:
 if (VAR_7->irq_level)
  FUNC_9(VAR_7->irq_level, VAR_7);
 if (VAR_7->io_port_base)
  FUNC_11(VAR_7->io_port_base, VAR_7->io_port_len);
 FUNC_5(VAR_7);

 return 1;
}
