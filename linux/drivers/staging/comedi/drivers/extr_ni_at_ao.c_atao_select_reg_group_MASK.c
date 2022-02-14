
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; struct atao_private* private; } ;
struct atao_private {int cfg1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_2, int VAR_3)
{
 struct atao_private *VAR_4 = VAR_2->private;

 if (VAR_3)
  VAR_4->cfg1 |= VAR_0;
 else
  VAR_4->cfg1 &= ~VAR_0;
 FUNC_0(VAR_4->cfg1, VAR_2->iobase + VAR_1);
}
