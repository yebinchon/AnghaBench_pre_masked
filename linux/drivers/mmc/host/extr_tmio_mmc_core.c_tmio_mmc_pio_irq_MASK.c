
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tmio_mmc_host {int sg_off; TYPE_1__* sg_ptr; scalar_t__ dma_on; struct mmc_data* data; } ;
struct mmc_data {unsigned int blksz; int flags; } ;
struct TYPE_3__ {unsigned int length; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (TYPE_1__*,unsigned long*) ;
 int FUNC_3 (TYPE_1__*,unsigned long*,void*) ;
 int FUNC_4 (struct tmio_mmc_host*) ;
 int FUNC_5 (struct tmio_mmc_host*,unsigned short*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct tmio_mmc_host *VAR_0)
{
 struct mmc_data *VAR_1 = VAR_0->data;
 void *VAR_2;
 unsigned short *VAR_3;
 unsigned int VAR_4;
 unsigned long VAR_5;

 if (VAR_0->dma_on) {
  FUNC_1("PIO IRQ in DMA mode!\n");
  return;
 } else if (!VAR_1) {
  FUNC_0("Spurious PIO IRQ\n");
  return;
 }

 VAR_2 = FUNC_2(VAR_0->sg_ptr, &VAR_5);
 VAR_3 = (unsigned short *)(VAR_2 + VAR_0->sg_off);

 VAR_4 = VAR_0->sg_ptr->length - VAR_0->sg_off;
 if (VAR_4 > VAR_1->blksz)
  VAR_4 = VAR_1->blksz;

 FUNC_0("count: %08x offset: %08x flags %08x\n",
   VAR_4, VAR_0->sg_off, VAR_1->flags);


 FUNC_5(VAR_0, VAR_3, VAR_4);

 VAR_0->sg_off += VAR_4;

 FUNC_3(VAR_0->sg_ptr, &VAR_5, VAR_2);

 if (VAR_0->sg_off == VAR_0->sg_ptr->length)
  FUNC_4(VAR_0);
}
