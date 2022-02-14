
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx88_dmaqueue {scalar_t__ count; } ;
struct cx88_core {int pci_irqmask; } ;
struct TYPE_2__ {int dma; } ;
struct cx88_buffer {TYPE_1__ risc; } ;
struct cx8800_dev {struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct cx88_core*,int *,int ,int ) ;
 int * VAR_11 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct cx8800_dev *VAR_12,
    struct cx88_dmaqueue *VAR_13,
    struct cx88_buffer *VAR_14)
{
 struct cx88_core *VAR_15 = VAR_12->core;


 FUNC_0(VAR_12->core, &VAR_11[VAR_8],
    VAR_9, VAR_14->risc.dma);

 FUNC_2(VAR_4, (1 << 18) |
      (1 << 15) |
      (1 << 11));


 FUNC_2(VAR_3, VAR_0);
 VAR_13->count = 0;


 FUNC_1(VAR_2, VAR_15->pci_irqmask | VAR_7);
 FUNC_1(VAR_6, 0x0f0088);


 FUNC_1(VAR_10, 0x18);


 FUNC_1(VAR_1, (1 << 5));
 FUNC_1(VAR_5, 0x88);

 return 0;
}
