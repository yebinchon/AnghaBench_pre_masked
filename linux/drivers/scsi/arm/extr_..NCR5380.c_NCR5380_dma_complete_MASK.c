
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {int host_no; } ;
struct NCR5380_hostdata {int read_overruns; int dma_len; TYPE_2__* connected; } ;
struct TYPE_3__ {unsigned char phase; int this_residual; int ptr; } ;
struct TYPE_4__ {TYPE_1__ SCp; int request; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct NCR5380_hostdata*) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (struct Scsi_Host*,unsigned char*,int*,unsigned char**) ;
 int FUNC_4 (int ,int ) ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,struct Scsi_Host*,char*,...) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (int ) ;
 struct NCR5380_hostdata* FUNC_8 (struct Scsi_Host*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct Scsi_Host *VAR_13)
{
 struct NCR5380_hostdata *VAR_14 = FUNC_8(VAR_13);
 int VAR_15;
 unsigned char **VAR_16;
 int *VAR_17;
 int VAR_18 = 0, VAR_19 = 0;
 unsigned char VAR_20;

 if (VAR_14->read_overruns) {
  VAR_20 = VAR_14->connected->SCp.phase;
  if (VAR_20 & VAR_11) {
   FUNC_10(10);
   if ((FUNC_2(VAR_2) &
        (VAR_1 | VAR_0)) ==
       (VAR_1 | VAR_0)) {
    VAR_18 = FUNC_2(VAR_5);
    VAR_19 = 1;
    FUNC_5(VAR_8, VAR_13, "read overrun handled\n");
   }
  }
 }
 FUNC_4(VAR_6, VAR_7);
 FUNC_4(VAR_4, VAR_3);
 FUNC_2(VAR_10);

 VAR_15 = VAR_14->dma_len - FUNC_1(VAR_14);
 VAR_14->dma_len = 0;

 VAR_16 = (unsigned char **)&VAR_14->connected->SCp.ptr;
 VAR_17 = &VAR_14->connected->SCp.this_residual;
 *VAR_16 += VAR_15;
 *VAR_17 -= VAR_15;

 if (VAR_14->read_overruns) {
  int VAR_21, VAR_22;

  if ((FUNC_2(VAR_12) & VAR_9) == VAR_20 && (VAR_20 & VAR_11)) {
   VAR_21 = VAR_22 = VAR_14->read_overruns;
   if (VAR_19) {
    FUNC_5(VAR_8, VAR_13,
             "Got an input overrun, using saved byte\n");
    *(*VAR_16)++ = VAR_18;
    (*VAR_17)--;
    VAR_21--;
    VAR_22--;
   }
   if (VAR_22 > 0) {
    FUNC_5(VAR_8, VAR_13,
             "Doing %d byte PIO to 0x%p\n", VAR_21, *VAR_16);
    FUNC_3(VAR_13, &VAR_20, &VAR_21, VAR_16);
    *VAR_17 -= VAR_22 - VAR_21;
   }
  }
 }
}
