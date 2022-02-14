
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vrc4171_socket {int lock; void* io_irq; void* csc_irq; } ;
struct pcmcia_socket {int features; int map_size; unsigned int sock; int pci_irq; scalar_t__ irq_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 struct vrc4171_socket* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct pcmcia_socket *VAR_4)
{
 struct vrc4171_socket *VAR_5;
 unsigned int VAR_6;

 VAR_4->features |= VAR_1 | VAR_0;
 VAR_4->irq_mask = 0;
 VAR_4->map_size = 0x1000;
 VAR_4->pci_irq = VAR_2;

 VAR_6 = VAR_4->sock;
 VAR_5 = &VAR_3[VAR_6];
 VAR_5->csc_irq = FUNC_0();
 VAR_5->io_irq = FUNC_0();
 FUNC_1(&VAR_5->lock);

 return 0;
}
