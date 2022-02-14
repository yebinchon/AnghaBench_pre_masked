
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dt282x_private {int supcsr; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct dt282x_private* private; } ;
struct comedi_cmd {unsigned int start_src; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
        struct comedi_subdevice *VAR_5,
        unsigned int VAR_6)
{
 struct dt282x_private *VAR_7 = VAR_4->private;
 struct comedi_cmd *VAR_8 = &VAR_5->async->cmd;

 if (VAR_6 != VAR_8->start_src)
  return -VAR_2;

 if (!FUNC_0(VAR_4, VAR_5, 0))
  return -VAR_3;

 if (!FUNC_0(VAR_4, VAR_5, 1))
  return -VAR_3;

 FUNC_1(VAR_7->supcsr | VAR_1,
      VAR_4->iobase + VAR_0);
 VAR_5->async->inttrig = ((void*)0);

 return 1;
}
