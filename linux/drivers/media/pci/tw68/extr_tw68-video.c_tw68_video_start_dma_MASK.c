
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw68_dev {int pci_irqmask; int board_virqmask; TYPE_1__* fmt; int field; int height; int width; } ;
struct tw68_buf {int dma; } ;
struct TYPE_2__ {int twformat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tw68_dev*,int ,int ,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct tw68_dev *VAR_7, struct tw68_buf *VAR_8)
{

 FUNC_0(VAR_7, VAR_7->width, VAR_7->height, VAR_7->field);





 FUNC_2(VAR_1, VAR_2);
 FUNC_4(VAR_3, VAR_8->dma);

 FUNC_4(VAR_6, VAR_7->board_virqmask);

 FUNC_1(VAR_1, 0xff, VAR_7->fmt->twformat |
  VAR_0 | VAR_2 | VAR_4);
 VAR_7->pci_irqmask |= VAR_7->board_virqmask;
 FUNC_3(VAR_5, VAR_7->pci_irqmask);
 return 0;
}
