
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cx88_dmaqueue {scalar_t__ count; } ;
struct cx88_core {int pci_irqmask; int field; int height; int width; } ;
struct TYPE_3__ {int dma; } ;
struct cx88_buffer {TYPE_1__ risc; int bpl; } ;
struct cx8800_dev {TYPE_2__* fmt; struct cx88_core* core; } ;
struct TYPE_4__ {int cxformat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct cx88_core*,int ,int ,int ) ;
 int FUNC_1 (struct cx88_core*,int *,int ,int ) ;
 int * VAR_11 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct cx8800_dev *VAR_12,
      struct cx88_dmaqueue *VAR_13,
      struct cx88_buffer *VAR_14)
{
 struct cx88_core *VAR_15 = VAR_12->core;


 FUNC_1(VAR_15, &VAR_11[VAR_9],
    VAR_14->bpl, VAR_14->risc.dma);
 FUNC_0(VAR_15, VAR_15->width, VAR_15->height, VAR_15->field);
 FUNC_3(VAR_2, VAR_12->fmt->cxformat | VAR_0);


 FUNC_3(VAR_5, VAR_1);
 VAR_13->count = 0;


 FUNC_2(VAR_4, VAR_15->pci_irqmask | VAR_8);
 FUNC_2(VAR_7, 0x0f0011);


 FUNC_2(VAR_10, 0x06);


 FUNC_2(VAR_3, (1 << 5));
 FUNC_2(VAR_6, 0x11);

 return 0;
}
