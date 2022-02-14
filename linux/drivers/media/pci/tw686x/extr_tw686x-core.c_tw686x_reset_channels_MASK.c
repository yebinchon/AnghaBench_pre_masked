
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct tw686x_dev {unsigned int pending_dma_en; unsigned int pending_dma_cmd; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 unsigned int FUNC_1 (struct tw686x_dev*,int ) ;
 int FUNC_2 (struct tw686x_dev*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct tw686x_dev *VAR_3, unsigned int VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 VAR_6 = FUNC_1(VAR_3, VAR_1);





 VAR_3->pending_dma_en |= VAR_5;
 VAR_3->pending_dma_cmd |= VAR_6;


 FUNC_2(VAR_3, VAR_0, VAR_5 & ~VAR_4);

 if ((VAR_5 & ~VAR_4) == 0) {
  FUNC_0(&VAR_3->pci_dev->dev, "reset: stopping DMA\n");
  VAR_6 &= ~VAR_2;
 }
 FUNC_2(VAR_3, VAR_1, VAR_6 & ~VAR_4);
}
