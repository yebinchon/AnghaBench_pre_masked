
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {struct pci9118_dmabuf* dmabuf; } ;
struct pci9118_dmabuf {int hw; scalar_t__ virt; int size; } ;
struct comedi_device {int hw_dev; struct pci9118_private* private; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0)
{
 struct pci9118_private *VAR_1 = VAR_0->private;
 struct pci9118_dmabuf *VAR_2;
 int VAR_3;

 if (!VAR_1)
  return;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_2 = &VAR_1->dmabuf[VAR_3];
  if (VAR_2->virt) {
   FUNC_0(VAR_0->hw_dev, VAR_2->size,
       VAR_2->virt, VAR_2->hw);
  }
 }
}
