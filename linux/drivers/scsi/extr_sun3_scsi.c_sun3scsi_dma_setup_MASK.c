
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct NCR5380_hostdata {int host; } ;
typedef scalar_t__ addr ;
struct TYPE_5__ {int fifo_count; unsigned long dma_addr_hi; unsigned long dma_addr_lo; int csr; scalar_t__ fifo_count_hi; scalar_t__ dma_count_lo; scalar_t__ dma_count_hi; } ;
struct TYPE_4__ {unsigned long addr_hi; unsigned long addr_lo; int count; int rsel; int mode_lo; int mode_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_3__* VAR_16 ;
 scalar_t__ FUNC_1 (unsigned long,int) ;
 scalar_t__ FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,char*,int,unsigned int) ;
 int * VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int,int ) ;
 TYPE_1__* VAR_19 ;

__attribute__((used)) static int FUNC_7(struct NCR5380_hostdata *VAR_20,
                              unsigned char *VAR_21, int VAR_22, int VAR_23)
{
 void *VAR_24;

 if(VAR_17 != ((void*)0))
  FUNC_3(VAR_17);




 VAR_24 = (void *)FUNC_1((unsigned long) VAR_21, VAR_22);


 VAR_17 = VAR_24;
 VAR_18 = VAR_22;


 VAR_16->fifo_count = 0;
 FUNC_6(VAR_13, VAR_7);


 VAR_16->csr &= ~VAR_0;
 VAR_16->csr |= VAR_0;



 if(VAR_23)
  VAR_16->csr |= VAR_2;
 else
  VAR_16->csr &= ~VAR_2;
 VAR_16->fifo_count = VAR_22;

 FUNC_6(VAR_13, VAR_7);


 VAR_16->csr &= ~VAR_0;
 VAR_16->csr |= VAR_0;

 if(VAR_16->fifo_count != VAR_22) {
  FUNC_5(VAR_3, VAR_20->host,
               "FIFO mismatch %04x not %04x\n",
               VAR_16->fifo_count, (unsigned int) VAR_22);
  FUNC_0(VAR_4, VAR_20->host);
 }


 VAR_19->addr_hi = (((unsigned long)(VAR_24) & 0xff0000) >> 8);
 VAR_19->addr_lo = ((unsigned long)(VAR_24) & 0xffff);
 VAR_19->count = VAR_22/2;
 VAR_19->mode_hi = VAR_10;
 if(VAR_23) {
  if(VAR_22 & 1)
   VAR_19->count++;
  VAR_19->mode_lo = VAR_12;
  VAR_19->rsel = VAR_15;
 } else {
  VAR_19->mode_lo = VAR_11;
  VAR_19->rsel = VAR_14;
 }


 FUNC_6(((FUNC_4(VAR_19) & 0xff0000) >> 8),
         VAR_5);

 FUNC_6((FUNC_4(VAR_19) & 0xffff), VAR_6);


 FUNC_6(0xd, VAR_9);


 FUNC_6(VAR_8, VAR_7);


        return VAR_22;

}
