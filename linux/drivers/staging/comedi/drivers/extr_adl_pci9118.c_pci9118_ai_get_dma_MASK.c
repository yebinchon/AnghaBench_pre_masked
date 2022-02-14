
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci9118_private {size_t dma_actbuf; int ai_do; scalar_t__ dma_doublebuf; int ai_neverending; struct pci9118_dmabuf* dmabuf; } ;
struct pci9118_dmabuf {int virt; int use_size; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pci9118_private* private; } ;
struct comedi_cmd {scalar_t__ stop_arg; } ;
struct TYPE_2__ {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,int ) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int ,unsigned int) ;
 int FUNC_3 (struct comedi_device*,int) ;
 unsigned int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_5 (struct comedi_device*,int) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3)
{
 struct pci9118_private *VAR_4 = VAR_2->private;
 struct comedi_cmd *VAR_5 = &VAR_3->async->cmd;
 struct pci9118_dmabuf *VAR_6 = &VAR_4->dmabuf[VAR_4->dma_actbuf];
 unsigned int VAR_7 = FUNC_0(VAR_3, VAR_6->use_size);
 unsigned int VAR_8;
 bool VAR_9;


 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_7);
 VAR_9 = VAR_8 < FUNC_1(VAR_3, VAR_8 + 1);


 if (VAR_9 && VAR_4->dma_doublebuf) {
  VAR_4->dma_actbuf = 1 - VAR_4->dma_actbuf;
  FUNC_5(VAR_2, VAR_4->dma_actbuf);
  if (VAR_4->ai_do == 4)
   FUNC_3(VAR_2, VAR_4->dma_actbuf);
 }

 if (VAR_7)
  FUNC_2(VAR_2, VAR_3, VAR_6->virt, VAR_7);

 if (!VAR_4->ai_neverending) {
  if (VAR_3->async->scans_done >= VAR_5->stop_arg)
   VAR_3->async->events |= VAR_1;
 }

 if (VAR_3->async->events & VAR_0)
  VAR_9 = 0;


 if (VAR_9 && !VAR_4->dma_doublebuf) {
  FUNC_5(VAR_2, 0);
  if (VAR_4->ai_do == 4)
   FUNC_3(VAR_2, 0);
 }
}
