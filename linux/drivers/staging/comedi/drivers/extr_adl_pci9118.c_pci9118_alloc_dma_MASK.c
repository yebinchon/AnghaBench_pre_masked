
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {int master; int dma_doublebuf; struct pci9118_dmabuf* dmabuf; } ;
struct pci9118_dmabuf {int size; scalar_t__ virt; int hw; } ;
struct comedi_device {int hw_dev; struct pci9118_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_2)
{
 struct pci9118_private *VAR_3 = VAR_2->private;
 struct pci9118_dmabuf *VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_4 = &VAR_3->dmabuf[VAR_6];
  for (VAR_5 = 2; VAR_5 >= 0; VAR_5--) {
   VAR_4->virt =
       FUNC_0(VAR_2->hw_dev, VAR_1 << VAR_5,
            &VAR_4->hw, VAR_0);
   if (VAR_4->virt)
    break;
  }
  if (!VAR_4->virt)
   break;
  VAR_4->size = VAR_1 << VAR_5;

  if (VAR_6 == 0)
   VAR_3->master = 1;
  if (VAR_6 == 1)
   VAR_3->dma_doublebuf = 1;
 }
}
