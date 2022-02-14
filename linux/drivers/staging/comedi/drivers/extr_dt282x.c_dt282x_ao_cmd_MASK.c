
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dt282x_private {int supcsr; int ntrig; int nread; int divisor; int dacsr; int dma_dir; struct comedi_isadma* dma; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_isadma {scalar_t__ cur_dma; } ;
struct comedi_device {scalar_t__ iobase; struct dt282x_private* private; } ;
struct comedi_cmd {int stop_arg; int chanlist_len; } ;
struct TYPE_2__ {int inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_16, struct comedi_subdevice *VAR_17)
{
 struct dt282x_private *VAR_18 = VAR_16->private;
 struct comedi_isadma *VAR_19 = VAR_18->dma;
 struct comedi_cmd *VAR_20 = &VAR_17->async->cmd;

 FUNC_0(VAR_16);

 VAR_18->supcsr = VAR_12 |
     VAR_11 |
     VAR_10;
 FUNC_1(VAR_18->supcsr |
      VAR_8 |
      VAR_7 |
      VAR_9,
      VAR_16->iobase + VAR_13);

 VAR_18->ntrig = VAR_20->stop_arg * VAR_20->chanlist_len;
 VAR_18->nread = VAR_18->ntrig;

 VAR_18->dma_dir = VAR_0;
 VAR_19->cur_dma = 0;

 FUNC_1(VAR_18->divisor, VAR_16->iobase + VAR_14);


 VAR_18->dacsr &= (VAR_4 | VAR_2);

 VAR_18->dacsr |= (VAR_6 |
      VAR_1 |
      VAR_3);
 FUNC_1(VAR_18->dacsr, VAR_16->iobase + VAR_5);

 VAR_17->async->inttrig = VAR_15;

 return 0;
}
