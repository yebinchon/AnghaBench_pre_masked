
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_go7007 {int top_dma; int top; int bottom_dma; int bottom; } ;
struct saa7134_dev {TYPE_1__* pci; int empress_dev; } ;
struct go7007 {int vidq; struct saa7134_go7007* hpi_context; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct go7007*,int ,int ) ;
 int FUNC_4 (char*,unsigned long) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 struct go7007* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct saa7134_dev *VAR_2,
      unsigned long VAR_3)
{
 struct go7007 *VAR_4 = FUNC_7(VAR_2->empress_dev);
 struct saa7134_go7007 *VAR_5 = VAR_4->hpi_context;

 if (!FUNC_6(&VAR_4->vidq))
  return;
 if (0 != (VAR_3 & 0x000f0000))
  FUNC_4("saa7134-go7007: irq: lost %ld\n",
    (VAR_3 >> 16) & 0x0f);
 if (VAR_3 & 0x100000) {
  FUNC_2(&VAR_2->pci->dev,
     VAR_5->bottom_dma, VAR_1, VAR_0);
  FUNC_3(VAR_4, VAR_5->bottom, VAR_1);
  FUNC_5(FUNC_1(5), VAR_5->bottom_dma);
 } else {
  FUNC_2(&VAR_2->pci->dev,
     VAR_5->top_dma, VAR_1, VAR_0);
  FUNC_3(VAR_4, VAR_5->top, VAR_1);
  FUNC_5(FUNC_0(5), VAR_5->top_dma);
 }
}
