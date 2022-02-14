
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct NCR5380_hostdata {TYPE_1__* host; } ;
struct TYPE_6__ {int dma_mode_status; unsigned long fdc_acces_seccount; } ;
struct TYPE_5__ {int dma_ctrl; } ;
struct TYPE_4__ {int host_no; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (unsigned long,unsigned long,int) ;
 int VAR_7 ;
 int FUNC_5 (int ,char*,int ,void*,unsigned long,unsigned long,int) ;
 int FUNC_6 (int ,void*,unsigned long) ;
 TYPE_3__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_7 (int) ;
 unsigned long FUNC_8 (void*) ;

__attribute__((used)) static unsigned long FUNC_9(struct NCR5380_hostdata *VAR_10,
       void *VAR_11, unsigned long VAR_12,
       int VAR_13)
{
 unsigned long VAR_14 = FUNC_8(VAR_11);

 FUNC_5(VAR_0, "scsi%d: setting up dma, data = %p, phys = %lx, count = %ld, dir = %d\n",
         VAR_10->host->host_no, VAR_11, VAR_14, VAR_12, VAR_13);

 if (!FUNC_0() && !FUNC_3(VAR_14)) {





  if (VAR_13)
   FUNC_6(VAR_2, VAR_11, VAR_12);
  else
   VAR_3 = VAR_11;
  VAR_14 = VAR_4;
 }

 VAR_5 = VAR_14;
 FUNC_4(VAR_14, VAR_12, VAR_13);

 if (FUNC_0()) {
  VAR_9.dma_ctrl = VAR_13;
  FUNC_2(VAR_6, VAR_14);
  FUNC_2(VAR_7, VAR_12);
  VAR_9.dma_ctrl = VAR_13 | 2;
 } else {


  FUNC_1(VAR_14);


  VAR_13 <<= 8;
  VAR_8.dma_mode_status = 0x90 | VAR_13;
  VAR_8.dma_mode_status = 0x90 | (VAR_13 ^ 0x100);
  VAR_8.dma_mode_status = 0x90 | VAR_13;
  FUNC_7(40);


  VAR_8.fdc_acces_seccount = (VAR_12 + (VAR_13 ? 511 : 0)) >> 9;
  FUNC_7(40);
  VAR_8.dma_mode_status = 0x10 | VAR_13;
  FUNC_7(40);

  VAR_1 = 1;
 }

 return VAR_12;
}
