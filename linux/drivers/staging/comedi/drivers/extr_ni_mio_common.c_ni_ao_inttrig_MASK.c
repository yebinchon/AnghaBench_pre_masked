
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int ao_cmd2; scalar_t__ ao_needs_arming; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct ni_private* private; } ;
struct comedi_cmd {unsigned int start_arg; scalar_t__ start_src; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
    struct comedi_subdevice *VAR_5,
    unsigned int VAR_6)
{
 struct ni_private *VAR_7 = VAR_4->private;
 struct comedi_cmd *VAR_8 = &VAR_5->async->cmd;
 int VAR_9;
 if (!(VAR_6 == VAR_8->start_arg ||
       (VAR_6 == 0 && VAR_8->start_src != VAR_3)))
  return -VAR_0;





 VAR_5->async->inttrig = ((void*)0);

 if (VAR_7->ao_needs_arming) {

  VAR_9 = FUNC_0(VAR_4, VAR_5);
  if (VAR_9)
   return VAR_9;
 }

 FUNC_1(VAR_4, VAR_2 | VAR_7->ao_cmd2,
        VAR_1);

 return 0;
}
