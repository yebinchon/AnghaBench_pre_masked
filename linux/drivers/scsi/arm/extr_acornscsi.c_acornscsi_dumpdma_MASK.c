
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int scsi_xferred; int this_residual; int ptr; } ;
struct TYPE_12__ {TYPE_3__ SCp; } ;
struct TYPE_10__ {int transferred; int start_addr; } ;
struct TYPE_13__ {TYPE_4__ scsi; TYPE_2__ dma; TYPE_1__* host; } ;
struct TYPE_9__ {int host_no; } ;
typedef TYPE_5__ AS_Host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static
void FUNC_3(AS_Host *VAR_4, char *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_4, VAR_1);
 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = FUNC_1(VAR_4, VAR_2) << 8 |
        FUNC_1(VAR_4, VAR_3);

 FUNC_2("scsi%d: %s: DMAC %02x @%06x+%04x msk %02x, ",
  VAR_4->host->host_no, VAR_5,
  VAR_6, VAR_7, (VAR_8 + 1) & 0xffff,
  FUNC_1(VAR_4, VAR_0));

 FUNC_2("DMA @%06x, ", VAR_4->dma.start_addr);
 FUNC_2("BH @%p +%04x, ", VAR_4->scsi.SCp.ptr,
  VAR_4->scsi.SCp.this_residual);
 FUNC_2("DT @+%04x ST @+%04x", VAR_4->dma.transferred,
  VAR_4->scsi.SCp.scsi_xferred);
 FUNC_2("\n");
}
