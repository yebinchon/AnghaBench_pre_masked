
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {int ai_do; int ai_ctrl; int ai_cfg; int int_ctrl; } ;
struct comedi_device {scalar_t__ iobase; struct pci9118_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct comedi_device*,int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_4)
{
 struct pci9118_private *VAR_5 = VAR_4->private;

 FUNC_0(VAR_5->int_ctrl, VAR_4->iobase + VAR_3);
 FUNC_0(VAR_5->ai_cfg, VAR_4->iobase + VAR_0);
 if (VAR_5->ai_do != 3) {
  FUNC_1(VAR_4, VAR_5->ai_do);
  VAR_5->ai_ctrl |= VAR_2;
 }
 FUNC_0(VAR_5->ai_ctrl, VAR_4->iobase + VAR_1);
}
