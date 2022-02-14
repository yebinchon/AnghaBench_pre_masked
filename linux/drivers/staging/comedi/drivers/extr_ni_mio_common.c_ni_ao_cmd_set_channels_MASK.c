
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int is_6xxx; unsigned int ao_mode1; int is_m_series; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct ni_private* private; } ;
struct comedi_cmd {unsigned int chanlist_len; int scan_end_arg; int * chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int *,unsigned int,int) ;
 int FUNC_3 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_4 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_9,
       struct comedi_subdevice *VAR_10)
{
 struct ni_private *VAR_11 = VAR_9->private;
 const struct comedi_cmd *VAR_12 = &VAR_10->async->cmd;
 unsigned int VAR_13 = 0;

 FUNC_4(VAR_9, VAR_7, VAR_8);

 if (VAR_11->is_6xxx) {
  unsigned int VAR_14;

  VAR_13 = 0;
  for (VAR_14 = 0; VAR_14 < VAR_12->chanlist_len; ++VAR_14) {
   int VAR_15 = FUNC_0(VAR_12->chanlist[VAR_14]);

   VAR_13 |= 1 << VAR_15;
   FUNC_3(VAR_9, VAR_15, VAR_1);
  }
  FUNC_3(VAR_9, VAR_13, VAR_0);
 }

 FUNC_2(VAR_9, VAR_10, VAR_12->chanlist, VAR_12->chanlist_len, 1);

 if (VAR_12->scan_end_arg > 1) {
  VAR_11->ao_mode1 |= VAR_2;
  VAR_13 = FUNC_1(VAR_12->scan_end_arg - 1)
     | VAR_5;

 } else {
  VAR_11->ao_mode1 &= ~VAR_2;
  VAR_13 = VAR_5;
  if (VAR_11->is_m_series | VAR_11->is_6xxx)
   VAR_13 |= FUNC_1(0);
  else
   VAR_13 |= FUNC_1(
     FUNC_0(VAR_12->chanlist[0]));
 }

 FUNC_4(VAR_9, VAR_11->ao_mode1, VAR_3);
 FUNC_4(VAR_9, VAR_13, VAR_4);

 FUNC_4(VAR_9, VAR_6, VAR_8);
}
