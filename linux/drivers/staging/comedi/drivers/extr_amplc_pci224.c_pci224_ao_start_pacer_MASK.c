
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci224_private {scalar_t__ iobase1; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int pacer; struct pci224_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_5,
      struct comedi_subdevice *VAR_6)
{
 struct pci224_private *VAR_7 = VAR_5->private;






 FUNC_1(FUNC_3(0, VAR_2), VAR_7->iobase1 + VAR_4);


 FUNC_1(FUNC_3(2, VAR_2), VAR_7->iobase1 + VAR_4);

 FUNC_1(FUNC_2(2, VAR_0),
      VAR_7->iobase1 + VAR_3);

 FUNC_1(FUNC_2(0, VAR_1),
      VAR_7->iobase1 + VAR_3);

 FUNC_0(VAR_5->pacer, 2, 0, 0);
}
