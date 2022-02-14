
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {unsigned int tv_nsec; scalar_t__ tv_sec; } ;
struct comedi_subdevice {scalar_t__ type; void* lock; int (* busy ) (struct comedi_device*,struct comedi_insn*,unsigned int*,void*) ;int (* insn_read ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;size_t index; unsigned int* maxdata_list; unsigned int maxdata; int (* insn_write ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;int n_chan; int (* insn_bits ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;int (* insn_config ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;TYPE_1__* async; } ;
struct comedi_insn {int insn; int n; size_t subdev; int chanspec; } ;
struct comedi_device {size_t n_subdevices; int (* insn_device_config ) (struct comedi_device*,struct comedi_insn*,unsigned int*) ;int class_dev; struct comedi_subdevice* subdevices; int mutex; } ;
struct TYPE_2__ {int (* inttrig ) (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;} ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 unsigned int VAR_7 ;


 int VAR_8 ;



 unsigned int VAR_9 ;
 int FUNC_1 (struct comedi_insn*,unsigned int*) ;
 int FUNC_2 (struct comedi_insn*,unsigned int*) ;
 int FUNC_3 (struct comedi_subdevice*,int,int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct comedi_device*,unsigned int*) ;
 int FUNC_6 (struct timespec64*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_9 (struct comedi_device*,struct comedi_insn*,unsigned int*) ;
 int FUNC_10 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_11 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_12 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_13 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_14 (unsigned int) ;

__attribute__((used)) static int FUNC_15(struct comedi_device *VAR_10, struct comedi_insn *VAR_11,
        unsigned int *VAR_12, void *VAR_13)
{
 struct comedi_subdevice *VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 FUNC_7(&VAR_10->mutex);
 if (VAR_11->insn & VAR_8) {


  switch (VAR_11->insn) {
  case 132:
   {
    struct timespec64 VAR_17;

    if (VAR_11->n != 2) {
     VAR_15 = -VAR_4;
     break;
    }

    FUNC_6(&VAR_17);

    VAR_12[0] = (unsigned int)VAR_17.tv_sec;
    VAR_12[1] = VAR_17.tv_nsec / VAR_9;
    VAR_15 = 2;

    break;
   }
  case 129:
   if (VAR_11->n != 1 || VAR_12[0] >= 100000) {
    VAR_15 = -VAR_4;
    break;
   }
   FUNC_14(VAR_12[0] / 1000);
   VAR_15 = 1;
   break;
  case 131:
   if (VAR_11->n != 1) {
    VAR_15 = -VAR_4;
    break;
   }
   if (VAR_11->subdev >= VAR_10->n_subdevices) {
    FUNC_4(VAR_10->class_dev,
     "%d not usable subdevice\n",
     VAR_11->subdev);
    VAR_15 = -VAR_4;
    break;
   }
   VAR_14 = &VAR_10->subdevices[VAR_11->subdev];
   if (!VAR_14->async) {
    FUNC_4(VAR_10->class_dev, "no async\n");
    VAR_15 = -VAR_4;
    break;
   }
   if (!VAR_14->async->inttrig) {
    FUNC_4(VAR_10->class_dev, "no inttrig\n");
    VAR_15 = -VAR_2;
    break;
   }
   VAR_15 = VAR_14->async->inttrig(VAR_10, VAR_14, VAR_12[0]);
   if (VAR_15 >= 0)
    VAR_15 = 1;
   break;
  case 133:
   VAR_15 = FUNC_2(VAR_11, VAR_12);
   if (VAR_15)
    break;

   if (VAR_12[0] == VAR_7) {




    VAR_12[1] = (VAR_11->n - 2) / 2;
    VAR_15 = FUNC_5(VAR_10, VAR_12);
    break;
   }


   VAR_15 = VAR_10->insn_device_config(VAR_10, VAR_11, VAR_12);
   break;
  default:
   FUNC_4(VAR_10->class_dev, "invalid insn\n");
   VAR_15 = -VAR_4;
   break;
  }
 } else {

  unsigned int VAR_18;

  if (VAR_11->subdev >= VAR_10->n_subdevices) {
   FUNC_4(VAR_10->class_dev, "subdevice %d out of range\n",
    VAR_11->subdev);
   VAR_15 = -VAR_4;
   goto out;
  }
  VAR_14 = &VAR_10->subdevices[VAR_11->subdev];

  if (VAR_14->type == VAR_0) {
   FUNC_4(VAR_10->class_dev, "%d not usable subdevice\n",
    VAR_11->subdev);
   VAR_15 = -VAR_5;
   goto out;
  }


  if (VAR_14->lock && VAR_14->lock != VAR_13) {
   FUNC_4(VAR_10->class_dev, "device locked\n");
   VAR_15 = -VAR_1;
   goto out;
  }

  VAR_15 = FUNC_3(VAR_14, 1, &VAR_11->chanspec);
  if (VAR_15 < 0) {
   VAR_15 = -VAR_4;
   FUNC_4(VAR_10->class_dev, "bad chanspec\n");
   goto out;
  }

  if (VAR_14->busy) {
   VAR_15 = -VAR_3;
   goto out;
  }

  VAR_14->busy = FUNC_15;
  switch (VAR_11->insn) {
  case 130:
   VAR_15 = VAR_14->insn_read(VAR_10, VAR_14, VAR_11, VAR_12);
   if (VAR_15 == -VAR_6) {
    FUNC_4(VAR_10->class_dev,
     "subdevice %d read instruction timed out\n",
     VAR_14->index);
   }
   break;
  case 128:
   VAR_18 = VAR_14->maxdata_list
       ? VAR_14->maxdata_list[FUNC_0(VAR_11->chanspec)]
       : VAR_14->maxdata;
   for (VAR_16 = 0; VAR_16 < VAR_11->n; ++VAR_16) {
    if (VAR_12[VAR_16] > VAR_18) {
     VAR_15 = -VAR_4;
     FUNC_4(VAR_10->class_dev,
      "bad data value(s)\n");
     break;
    }
   }
   if (VAR_15 == 0) {
    VAR_15 = VAR_14->insn_write(VAR_10, VAR_14, VAR_11, VAR_12);
    if (VAR_15 == -VAR_6) {
     FUNC_4(VAR_10->class_dev,
      "subdevice %d write instruction timed out\n",
      VAR_14->index);
    }
   }
   break;
  case 135:
   if (VAR_11->n != 2) {
    VAR_15 = -VAR_4;
   } else {





    unsigned int VAR_19 = VAR_12[0];
    unsigned int VAR_20 = 0;

    if (VAR_14->n_chan <= 32) {
     VAR_20 = FUNC_0(VAR_11->chanspec);
     if (VAR_20 > 0) {
      VAR_11->chanspec = 0;
      VAR_12[0] <<= VAR_20;
      VAR_12[1] <<= VAR_20;
     }
    }
    VAR_15 = VAR_14->insn_bits(VAR_10, VAR_14, VAR_11, VAR_12);
    VAR_12[0] = VAR_19;
    if (VAR_20 > 0)
     VAR_12[1] >>= VAR_20;
   }
   break;
  case 134:
   VAR_15 = FUNC_1(VAR_11, VAR_12);
   if (VAR_15)
    break;
   VAR_15 = VAR_14->insn_config(VAR_10, VAR_14, VAR_11, VAR_12);
   break;
  default:
   VAR_15 = -VAR_4;
   break;
  }

  VAR_14->busy = ((void*)0);
 }

out:
 return VAR_15;
}
