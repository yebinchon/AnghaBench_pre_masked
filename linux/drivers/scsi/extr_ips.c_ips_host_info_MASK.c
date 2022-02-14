
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_11__ {unsigned long count; } ;
struct TYPE_10__ {unsigned long count; } ;
struct TYPE_9__ {unsigned long count; } ;
struct TYPE_15__ {int ad_type; unsigned long max_cmds; unsigned long num_ioctl; TYPE_3__ copp_waitlist; TYPE_2__ scb_activelist; TYPE_1__ scb_waitlist; TYPE_6__* enq; TYPE_5__* nvram; TYPE_4__* pcidev; scalar_t__ mem_ptr; int mem_len; scalar_t__ mem_addr; int io_len; scalar_t__ io_addr; } ;
typedef TYPE_7__ ips_ha_t ;
struct TYPE_14__ {unsigned long ucMaxPhysicalDevices; int * BootBlkVersion; int * CodeBlkVersion; } ;
struct TYPE_13__ {scalar_t__* bios_low; int * bios_high; int signature; int adapter_type; } ;
struct TYPE_12__ {unsigned long irq; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 unsigned long* VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,unsigned long,...) ;
 int FUNC_4 (struct seq_file*,char) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static int
FUNC_6(ips_ha_t *VAR_5, struct seq_file *VAR_6)
{
 FUNC_0("ips_host_info", 1);

 FUNC_5(VAR_6, "\nIBM ServeRAID General Information:\n\n");

 if ((FUNC_2(VAR_5->nvram->signature) == VAR_1) &&
     (FUNC_1(VAR_5->nvram->adapter_type) != 0))
  FUNC_3(VAR_6, "\tController Type                   : %s\n",
     VAR_4[VAR_5->ad_type - 1]);
 else
  FUNC_5(VAR_6, "\tController Type                   : Unknown\n");

 if (VAR_5->io_addr)
  FUNC_3(VAR_6,
     "\tIO region                         : 0x%x (%d bytes)\n",
     VAR_5->io_addr, VAR_5->io_len);

 if (VAR_5->mem_addr) {
  FUNC_3(VAR_6,
     "\tMemory region                     : 0x%x (%d bytes)\n",
     VAR_5->mem_addr, VAR_5->mem_len);
  FUNC_3(VAR_6,
     "\tShared memory address             : 0x%lx\n",
     (unsigned long)VAR_5->mem_ptr);
 }

 FUNC_3(VAR_6, "\tIRQ number                        : %d\n", VAR_5->pcidev->irq);




 if (FUNC_2(VAR_5->nvram->signature) == VAR_1) {
 if (VAR_5->nvram->bios_low[3] == 0) {
  FUNC_3(VAR_6,
     "\tBIOS Version                      : %c%c%c%c%c%c%c\n",
     VAR_5->nvram->bios_high[0], VAR_5->nvram->bios_high[1],
     VAR_5->nvram->bios_high[2], VAR_5->nvram->bios_high[3],
     VAR_5->nvram->bios_low[0], VAR_5->nvram->bios_low[1],
     VAR_5->nvram->bios_low[2]);

        } else {
  FUNC_3(VAR_6,
     "\tBIOS Version                      : %c%c%c%c%c%c%c%c\n",
     VAR_5->nvram->bios_high[0], VAR_5->nvram->bios_high[1],
     VAR_5->nvram->bios_high[2], VAR_5->nvram->bios_high[3],
     VAR_5->nvram->bios_low[0], VAR_5->nvram->bios_low[1],
     VAR_5->nvram->bios_low[2], VAR_5->nvram->bios_low[3]);
        }

    }

    if (VAR_5->enq->CodeBlkVersion[7] == 0) {
        FUNC_3(VAR_6,
    "\tFirmware Version                  : %c%c%c%c%c%c%c\n",
    VAR_5->enq->CodeBlkVersion[0], VAR_5->enq->CodeBlkVersion[1],
    VAR_5->enq->CodeBlkVersion[2], VAR_5->enq->CodeBlkVersion[3],
    VAR_5->enq->CodeBlkVersion[4], VAR_5->enq->CodeBlkVersion[5],
    VAR_5->enq->CodeBlkVersion[6]);
    } else {
 FUNC_3(VAR_6,
    "\tFirmware Version                  : %c%c%c%c%c%c%c%c\n",
    VAR_5->enq->CodeBlkVersion[0], VAR_5->enq->CodeBlkVersion[1],
    VAR_5->enq->CodeBlkVersion[2], VAR_5->enq->CodeBlkVersion[3],
    VAR_5->enq->CodeBlkVersion[4], VAR_5->enq->CodeBlkVersion[5],
    VAR_5->enq->CodeBlkVersion[6], VAR_5->enq->CodeBlkVersion[7]);
    }

    if (VAR_5->enq->BootBlkVersion[7] == 0) {
        FUNC_3(VAR_6,
    "\tBoot Block Version                : %c%c%c%c%c%c%c\n",
    VAR_5->enq->BootBlkVersion[0], VAR_5->enq->BootBlkVersion[1],
    VAR_5->enq->BootBlkVersion[2], VAR_5->enq->BootBlkVersion[3],
    VAR_5->enq->BootBlkVersion[4], VAR_5->enq->BootBlkVersion[5],
    VAR_5->enq->BootBlkVersion[6]);
    } else {
        FUNC_3(VAR_6,
    "\tBoot Block Version                : %c%c%c%c%c%c%c%c\n",
    VAR_5->enq->BootBlkVersion[0], VAR_5->enq->BootBlkVersion[1],
    VAR_5->enq->BootBlkVersion[2], VAR_5->enq->BootBlkVersion[3],
    VAR_5->enq->BootBlkVersion[4], VAR_5->enq->BootBlkVersion[5],
    VAR_5->enq->BootBlkVersion[6], VAR_5->enq->BootBlkVersion[7]);
    }

 FUNC_3(VAR_6, "\tDriver Version                    : %s%s\n",
    VAR_2, VAR_3);

 FUNC_3(VAR_6, "\tDriver Build                      : %d\n",
    VAR_0);

 FUNC_3(VAR_6, "\tMax Physical Devices              : %d\n",
    VAR_5->enq->ucMaxPhysicalDevices);
 FUNC_3(VAR_6, "\tMax Active Commands               : %d\n",
    VAR_5->max_cmds);
 FUNC_3(VAR_6, "\tCurrent Queued Commands           : %d\n",
    VAR_5->scb_waitlist.count);
 FUNC_3(VAR_6, "\tCurrent Active Commands           : %d\n",
    VAR_5->scb_activelist.count - VAR_5->num_ioctl);
 FUNC_3(VAR_6, "\tCurrent Queued PT Commands        : %d\n",
    VAR_5->copp_waitlist.count);
 FUNC_3(VAR_6, "\tCurrent Active PT Commands        : %d\n",
    VAR_5->num_ioctl);

 FUNC_4(VAR_6, '\n');

 return 0;
}
