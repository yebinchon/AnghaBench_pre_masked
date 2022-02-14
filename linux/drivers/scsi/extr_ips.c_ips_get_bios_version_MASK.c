
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {int type; int total_packets; int buffer_addr; scalar_t__ packet_num; int count; scalar_t__ direction; int command_id; void* op_code; } ;
struct TYPE_16__ {TYPE_2__ flashfw; } ;
struct TYPE_17__ {int data_len; int basic_status; TYPE_3__ cmd; void** cdb; int timeout; } ;
typedef TYPE_4__ ips_scb_t ;
struct TYPE_18__ {char* bios_version; int* ioctl_data; int max_cmds; int ioctl_busaddr; TYPE_4__* scbs; scalar_t__ io_addr; TYPE_1__* pcidev; scalar_t__ mem_ptr; } ;
typedef TYPE_5__ ips_ha_t ;
struct TYPE_14__ {scalar_t__ device; scalar_t__ revision; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*,int ,int) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_15(ips_ha_t * VAR_9, int VAR_10)
{
 ips_scb_t *VAR_11;
 int VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;
 uint8_t *VAR_16;

 FUNC_2("ips_get_bios_version", 1);

 VAR_13 = 0;
 VAR_14 = 0;

 FUNC_12(VAR_9->bios_version, "       ?", 8);

 if (VAR_9->pcidev->device == VAR_1) {
  if (FUNC_1(VAR_9)) {



   FUNC_14(0, VAR_9->mem_ptr + VAR_4);
   if (VAR_9->pcidev->revision == VAR_6)
    FUNC_13(25);

   if (FUNC_11(VAR_9->mem_ptr + VAR_5) != 0x55)
    return;

   FUNC_14(1, VAR_9->mem_ptr + VAR_4);
   if (VAR_9->pcidev->revision == VAR_6)
    FUNC_13(25);

   if (FUNC_11(VAR_9->mem_ptr + VAR_5) != 0xAA)
    return;


   FUNC_14(0x1FF, VAR_9->mem_ptr + VAR_4);
   if (VAR_9->pcidev->revision == VAR_6)
    FUNC_13(25);

   VAR_13 = FUNC_11(VAR_9->mem_ptr + VAR_5);


   FUNC_14(0x1FE, VAR_9->mem_ptr + VAR_4);
   if (VAR_9->pcidev->revision == VAR_6)
    FUNC_13(25);
   VAR_14 = FUNC_11(VAR_9->mem_ptr + VAR_5);


   FUNC_14(0x1FD, VAR_9->mem_ptr + VAR_4);
   if (VAR_9->pcidev->revision == VAR_6)
    FUNC_13(25);
   VAR_15 = FUNC_11(VAR_9->mem_ptr + VAR_5);

  } else {



   FUNC_10(0, VAR_9->io_addr + VAR_4);
   if (VAR_9->pcidev->revision == VAR_6)
    FUNC_13(25);

   if (FUNC_6(VAR_9->io_addr + VAR_5) != 0x55)
    return;

   FUNC_10(1, VAR_9->io_addr + VAR_4);
   if (VAR_9->pcidev->revision == VAR_6)
    FUNC_13(25);

   if (FUNC_6(VAR_9->io_addr + VAR_5) != 0xAA)
    return;


   FUNC_10(0x1FF, VAR_9->io_addr + VAR_4);
   if (VAR_9->pcidev->revision == VAR_6)
    FUNC_13(25);

   VAR_13 = FUNC_6(VAR_9->io_addr + VAR_5);


   FUNC_10(0x1FE, VAR_9->io_addr + VAR_4);
   if (VAR_9->pcidev->revision == VAR_6)
    FUNC_13(25);

   VAR_14 = FUNC_6(VAR_9->io_addr + VAR_5);


   FUNC_10(0x1FD, VAR_9->io_addr + VAR_4);
   if (VAR_9->pcidev->revision == VAR_6)
    FUNC_13(25);

   VAR_15 = FUNC_6(VAR_9->io_addr + VAR_5);

  }
 } else {


  VAR_16 = VAR_9->ioctl_data;

  FUNC_9(VAR_16, 0, 0x1000);

  VAR_11 = &VAR_9->scbs[VAR_9->max_cmds - 1];

  FUNC_7(VAR_9, VAR_11);

  VAR_11->timeout = VAR_8;
  VAR_11->cdb[0] = VAR_0;

  VAR_11->cmd.flashfw.op_code = VAR_0;
  VAR_11->cmd.flashfw.command_id = FUNC_0(VAR_9, VAR_11);
  VAR_11->cmd.flashfw.type = 1;
  VAR_11->cmd.flashfw.direction = 0;
  VAR_11->cmd.flashfw.count = FUNC_3(0x800);
  VAR_11->cmd.flashfw.total_packets = 1;
  VAR_11->cmd.flashfw.packet_num = 0;
  VAR_11->data_len = 0x1000;
  VAR_11->cmd.flashfw.buffer_addr = VAR_9->ioctl_busaddr;


  if (((VAR_12 =
        FUNC_8(VAR_9, VAR_11, VAR_8,
        VAR_10)) == VAR_2)
      || (VAR_12 == VAR_7)
      || ((VAR_11->basic_status & VAR_3) > 1)) {


   return;
  }

  if ((VAR_16[0xC0] == 0x55) && (VAR_16[0xC1] == 0xAA)) {
   VAR_13 = VAR_16[0x1ff + 0xC0];
   VAR_14 = VAR_16[0x1fe + 0xC0];
   VAR_15 = VAR_16[0x1fd + 0xC0];
  } else {
   return;
  }
 }

 VAR_9->bios_version[0] = FUNC_4(VAR_13);
 VAR_9->bios_version[1] = '.';
 VAR_9->bios_version[2] = FUNC_5(VAR_13);
 VAR_9->bios_version[3] = FUNC_5(VAR_15);
 VAR_9->bios_version[4] = '.';
 VAR_9->bios_version[5] = FUNC_4(VAR_14);
 VAR_9->bios_version[6] = FUNC_5(VAR_14);
 VAR_9->bios_version[7] = 0;
}
