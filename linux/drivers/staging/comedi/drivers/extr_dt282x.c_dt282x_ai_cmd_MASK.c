
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dt282x_private {int divisor; int supcsr; int ntrig; int nread; int adcsr; int dma_dir; struct comedi_isadma* dma; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_isadma {scalar_t__ cur_dma; } ;
struct comedi_device {scalar_t__ iobase; struct dt282x_private* private; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; int stop_arg; int scan_end_arg; int chanlist; int chanlist_len; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int *,int ,int ) ;
 int VAR_18 ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_19, struct comedi_subdevice *VAR_20)
{
 struct dt282x_private *VAR_21 = VAR_19->private;
 struct comedi_isadma *VAR_22 = VAR_21->dma;
 struct comedi_cmd *VAR_23 = &VAR_20->async->cmd;
 int VAR_24;

 FUNC_1(VAR_19);

 FUNC_4(VAR_21->divisor, VAR_19->iobase + VAR_16);

 VAR_21->supcsr = VAR_11;
 if (VAR_23->scan_begin_src == VAR_17)
  VAR_21->supcsr = VAR_9;
 else
  VAR_21->supcsr = VAR_10;
 FUNC_4(VAR_21->supcsr |
      VAR_7 |
      VAR_6 |
      VAR_5,
      VAR_19->iobase + VAR_13);

 VAR_21->ntrig = VAR_23->stop_arg * VAR_23->scan_end_arg;
 VAR_21->nread = VAR_21->ntrig;

 VAR_21->dma_dir = VAR_0;
 VAR_22->cur_dma = 0;
 FUNC_3(VAR_19, 0, 0);
 if (VAR_21->ntrig) {
  FUNC_3(VAR_19, 1, 0);
  VAR_21->supcsr |= VAR_8;
  FUNC_4(VAR_21->supcsr, VAR_19->iobase + VAR_13);
 }

 VAR_21->adcsr = 0;

 FUNC_2(VAR_19, VAR_23->chanlist_len, VAR_23->chanlist);

 VAR_21->adcsr = VAR_1 | VAR_2;
 FUNC_4(VAR_21->adcsr, VAR_19->iobase + VAR_4);

 FUNC_4(VAR_21->supcsr | VAR_12,
      VAR_19->iobase + VAR_13);
 VAR_24 = FUNC_0(VAR_19, VAR_20, ((void*)0),
        VAR_18, VAR_3);
 if (VAR_24)
  return VAR_24;

 if (VAR_23->scan_begin_src == VAR_17) {
  FUNC_4(VAR_21->supcsr | VAR_14,
       VAR_19->iobase + VAR_13);
 } else {
  VAR_21->supcsr |= VAR_15;
  FUNC_4(VAR_21->supcsr, VAR_19->iobase + VAR_13);
 }

 return 0;
}
