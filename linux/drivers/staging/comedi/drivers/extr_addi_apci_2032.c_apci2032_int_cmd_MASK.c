
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {struct apci2032_int_private* private; TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {unsigned int chanlist_len; int * chanlist; } ;
struct apci2032_int_private {unsigned char enabled_isns; int active; int spinlock; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2)
{
 struct comedi_cmd *VAR_3 = &VAR_2->async->cmd;
 struct apci2032_int_private *VAR_4 = VAR_2->private;
 unsigned char VAR_5;
 unsigned int VAR_6;
 unsigned long VAR_7;

 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_3->chanlist_len; VAR_6++)
  VAR_5 |= 1 << FUNC_0(VAR_3->chanlist[VAR_6]);

 FUNC_2(&VAR_4->spinlock, VAR_7);

 VAR_4->enabled_isns = VAR_5;
 VAR_4->active = 1;
 FUNC_1(VAR_5, VAR_1->iobase + VAR_0);

 FUNC_3(&VAR_4->spinlock, VAR_7);

 return 0;
}
