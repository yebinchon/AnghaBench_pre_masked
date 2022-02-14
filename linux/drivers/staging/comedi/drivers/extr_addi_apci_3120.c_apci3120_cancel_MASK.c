
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct apci3120_private* private; } ;
struct apci3120_private {scalar_t__ cur_dmabuf; scalar_t__ mode; scalar_t__ ctrl; scalar_t__ amcc; scalar_t__ addon; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct comedi_device*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5,
      struct comedi_subdevice *VAR_6)
{
 struct apci3120_private *VAR_7 = VAR_5->private;


 FUNC_4(0, VAR_7->addon + 4);


 FUNC_0(VAR_5, 0, VAR_0);


 FUNC_3(0, VAR_7->amcc + VAR_1);


 VAR_7->ctrl = 0;
 FUNC_4(VAR_7->ctrl, VAR_5->iobase + VAR_2);


 VAR_7->mode = 0;
 FUNC_2(VAR_7->mode, VAR_5->iobase + VAR_3);

 FUNC_1(VAR_5->iobase + VAR_4);
 VAR_7->cur_dmabuf = 0;

 return 0;
}
