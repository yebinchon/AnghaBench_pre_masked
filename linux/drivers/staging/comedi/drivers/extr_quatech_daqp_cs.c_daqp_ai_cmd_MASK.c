
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct daqp_private {int pacer_div; scalar_t__ stop; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct daqp_private* private; } ;
struct comedi_cmd {scalar_t__ convert_src; int chanlist_len; scalar_t__ stop_src; unsigned long long scan_end_arg; scalar_t__ stop_arg; int * chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned long long FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,int ,int) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_15, struct comedi_subdevice *VAR_16)
{
 struct daqp_private *VAR_17 = VAR_15->private;
 struct comedi_cmd *VAR_18 = &VAR_16->async->cmd;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;

 if (VAR_17->stop)
  return -VAR_12;

 FUNC_4(0, VAR_15->iobase + VAR_1);


 FUNC_4(VAR_6, VAR_15->iobase + VAR_4);
 FUNC_3(VAR_15, VAR_17->pacer_div);

 if (VAR_18->convert_src == VAR_14)
  VAR_19 = 1;
 else
  VAR_19 = 0;


 for (VAR_22 = 0; VAR_22 < VAR_18->chanlist_len; VAR_22++) {
  int VAR_23 = (VAR_22 == 0 || VAR_19);

  FUNC_1(VAR_15, VAR_18->chanlist[VAR_22], VAR_23);
 }
 if (VAR_18->stop_src == VAR_13) {
  unsigned long long VAR_24;
  unsigned long long VAR_25;

  VAR_24 = (unsigned long long)VAR_18->stop_arg *
      VAR_18->scan_end_arg;
  VAR_25 = VAR_24 * FUNC_0(VAR_16);
  while (VAR_25 > VAR_11 * 3 / 4)
   VAR_25 /= 2;
  VAR_20 = VAR_25;
 } else {
  VAR_20 = VAR_11 / 2;
 }



 FUNC_4(VAR_5, VAR_15->iobase + VAR_4);
 FUNC_4(0x00, VAR_15->iobase + VAR_0);
 FUNC_4(0x00, VAR_15->iobase + VAR_0);

 FUNC_4((VAR_11 - VAR_20) & 0xff,
      VAR_15->iobase + VAR_0);
 FUNC_4((VAR_11 - VAR_20) >> 8, VAR_15->iobase + VAR_0);


 FUNC_4(VAR_10 | VAR_8 |
      VAR_7, VAR_15->iobase + VAR_9);

 VAR_21 = FUNC_2(VAR_15, 100);
 if (VAR_21)
  return VAR_21;


 FUNC_4(VAR_2 | VAR_3, VAR_15->iobase + VAR_4);

 return 0;
}
