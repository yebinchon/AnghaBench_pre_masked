
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {int ai_cfg; struct pci9118_dmabuf* dmabuf; } ;
struct pci9118_dmabuf {int hw; } ;
struct comedi_device {scalar_t__ iobase; int pacer; struct pci9118_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_7,
        unsigned int VAR_8)
{
 struct pci9118_private *VAR_9 = VAR_7->private;
 struct pci9118_dmabuf *VAR_10 = &VAR_9->dmabuf[VAR_8];

 VAR_9->ai_cfg = VAR_3 | VAR_4 |
     VAR_2;
 FUNC_1(VAR_9->ai_cfg, VAR_7->iobase + VAR_5);
 FUNC_0(VAR_7->pacer, 0, VAR_10->hw >> 1,
    VAR_1 | VAR_0);
 VAR_9->ai_cfg |= VAR_6;
 FUNC_1(VAR_9->ai_cfg, VAR_7->iobase + VAR_5);
}
