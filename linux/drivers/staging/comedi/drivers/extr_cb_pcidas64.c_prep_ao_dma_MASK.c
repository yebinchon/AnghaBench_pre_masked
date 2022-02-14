
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcidas64_private {scalar_t__ main_iobase; int * ao_bounce_buffer; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_subdevice* write_subdev; struct pcidas64_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct TYPE_2__ {scalar_t__ scans_done; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int *,int ) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_cmd const*) ;
 unsigned int FUNC_3 (struct comedi_device*,struct comedi_cmd const*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5, const struct comedi_cmd *VAR_6)
{
 struct pcidas64_private *VAR_7 = VAR_5->private;
 struct comedi_subdevice *VAR_8 = VAR_5->write_subdev;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;





 FUNC_4(0, VAR_7->main_iobase + VAR_0);
 FUNC_4(0, VAR_7->main_iobase + VAR_1);

 VAR_9 = FUNC_0(VAR_5, VAR_8,
           VAR_7->ao_bounce_buffer,
           VAR_3);
 if (VAR_9 == 0)
  return -1;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  FUNC_4(VAR_7->ao_bounce_buffer[VAR_11],
         VAR_7->main_iobase + VAR_2);
 }

 if (VAR_6->stop_src == VAR_4 &&
     VAR_8->async->scans_done >= VAR_6->stop_arg)
  return 0;

 VAR_10 = FUNC_3(VAR_5, VAR_6);
 if (VAR_10 == 0)
  return -1;
 FUNC_2(VAR_5, VAR_6);

 FUNC_1(VAR_5, 0);

 return 0;
}
