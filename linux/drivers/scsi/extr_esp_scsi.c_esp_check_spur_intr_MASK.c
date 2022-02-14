
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esp {int rev; int sreg; int ireg; int host; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dma_error ) (struct esp*) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (struct esp*) ;

__attribute__((used)) static int FUNC_2(struct esp *VAR_3)
{
 switch (VAR_3->rev) {
 case 129:
 case 128:



  VAR_3->sreg &= ~VAR_1;
  break;

 default:
  if (!(VAR_3->sreg & VAR_1)) {
   if (VAR_3->ireg & VAR_0)
    return 1;




   if (!VAR_3->ops->dma_error(VAR_3)) {
    FUNC_0(VAR_2, VAR_3->host,
          "Spurious irq, sreg=%02x.\n",
          VAR_3->sreg);
    return -1;
   }

   FUNC_0(VAR_2, VAR_3->host, "DMA error\n");


   return -1;
  }
  break;
 }

 return 0;
}
