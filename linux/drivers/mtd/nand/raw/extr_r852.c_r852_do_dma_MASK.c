
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void uint8_t ;
struct r852_device {int dma_dir; int dma_stage; void* bounce_buffer; int irqlock; int phys_bounce_buffer; int phys_dma_addr; TYPE_1__* pci_dev; int dma_state; int dma_done; scalar_t__ dma_error; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,void*,int,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (struct r852_device*,int) ;
 int FUNC_5 (struct r852_device*) ;
 int FUNC_6 (struct r852_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct r852_device *VAR_5, uint8_t *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 unsigned long VAR_9;
 int VAR_10;

 VAR_5->dma_error = 0;


 VAR_5->dma_dir = VAR_7;
 VAR_5->dma_stage = 1;
 FUNC_7(&VAR_5->dma_done);

 FUNC_0("doing dma %s ", VAR_7 ? "read" : "write");



 VAR_5->dma_state = VAR_7 ? VAR_1 : VAR_2;


 if ((unsigned long)VAR_6 & (VAR_4-1))
  VAR_8 = 1;

 if (!VAR_8) {
  VAR_5->phys_dma_addr = FUNC_1(&VAR_5->pci_dev->dev, VAR_6,
   VAR_4,
   VAR_7 ? VAR_0 : VAR_3);
  if (FUNC_2(&VAR_5->pci_dev->dev, VAR_5->phys_dma_addr))
   VAR_8 = 1;
 }

 if (VAR_8) {
  FUNC_0("dma: using bounce buffer");
  VAR_5->phys_dma_addr = VAR_5->phys_bounce_buffer;
  if (!VAR_7)
   FUNC_3(VAR_5->bounce_buffer, VAR_6, VAR_4);
 }


 FUNC_8(&VAR_5->irqlock, VAR_9);
 FUNC_5(VAR_5);
 FUNC_9(&VAR_5->irqlock, VAR_9);


 VAR_10 = FUNC_6(VAR_5);

 if (VAR_10) {
  FUNC_4(VAR_5, VAR_10);
  return;
 }

 if (VAR_7 && VAR_8)
  FUNC_3((void *)VAR_6, VAR_5->bounce_buffer, VAR_4);
}
