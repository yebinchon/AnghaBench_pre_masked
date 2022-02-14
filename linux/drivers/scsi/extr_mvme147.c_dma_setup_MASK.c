
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int this_residual; int ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; TYPE_2__* device; } ;
struct WD33C93_hostdata {int dma_dir; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {int dma_bcr; unsigned long dma_dadr; unsigned char dma_cntrl; } ;
struct TYPE_5__ {struct Scsi_Host* host; } ;


 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (unsigned long,int) ;
 TYPE_3__* VAR_0 ;
 struct WD33C93_hostdata* FUNC_2 (struct Scsi_Host*) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_1, int VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_1->device->host;
 struct WD33C93_hostdata *VAR_4 = FUNC_2(VAR_3);
 unsigned char VAR_5 = 0x01;
 unsigned long VAR_6 = FUNC_3(VAR_1->SCp.ptr);


 if (!VAR_2)
  VAR_5 |= 0x04;


 VAR_4->dma_dir = VAR_2;

 if (VAR_2) {

  FUNC_0(VAR_6, VAR_1->SCp.this_residual);
 } else {

  FUNC_1(VAR_6, VAR_1->SCp.this_residual);
 }


 VAR_0->dma_bcr = VAR_1->SCp.this_residual | (1 << 24);
 VAR_0->dma_dadr = VAR_6;
 VAR_0->dma_cntrl = VAR_5;


 return 0;
}
