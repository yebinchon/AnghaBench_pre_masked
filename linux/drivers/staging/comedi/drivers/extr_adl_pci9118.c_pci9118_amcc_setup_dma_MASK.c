
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {scalar_t__ iobase_a; struct pci9118_dmabuf* dmabuf; } ;
struct pci9118_dmabuf {int use_size; int hw; } ;
struct comedi_device {struct pci9118_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_2, unsigned int VAR_3)
{
 struct pci9118_private *VAR_4 = VAR_2->private;
 struct pci9118_dmabuf *VAR_5 = &VAR_4->dmabuf[VAR_3];


 FUNC_0(VAR_5->hw, VAR_4->iobase_a + VAR_0);
 FUNC_0(VAR_5->use_size, VAR_4->iobase_a + VAR_1);
}
