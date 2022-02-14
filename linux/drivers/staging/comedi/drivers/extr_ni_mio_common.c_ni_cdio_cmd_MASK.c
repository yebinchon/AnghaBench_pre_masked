
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int cdo_mite_ring; int routing_tables; } ;
struct comedi_subdevice {int io_bits; unsigned int state; TYPE_1__* async; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;
struct comedi_cmd {int scan_begin_arg; } ;
struct TYPE_2__ {int prealloc_bufsz; int inttrig; struct comedi_cmd cmd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_subdevice*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_12 ;
 int FUNC_4 (int ,struct comedi_subdevice*,struct comedi_cmd const*,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_13, struct comedi_subdevice *VAR_14)
{
 struct ni_private *VAR_15 = VAR_13->private;
 const struct comedi_cmd *VAR_16 = &VAR_14->async->cmd;
 unsigned int VAR_17;
 int VAR_18;

 FUNC_7(VAR_13, VAR_4, VAR_3);




 VAR_17 = VAR_8 |
   VAR_9 |
   FUNC_1(
    FUNC_5(FUNC_0(VAR_16->scan_begin_arg),
       VAR_2,
       &VAR_15->routing_tables));
 if (VAR_16->scan_begin_arg & VAR_0)
  VAR_17 |= VAR_10;
 FUNC_7(VAR_13, VAR_17, VAR_11);
 if (VAR_14->io_bits) {
  FUNC_7(VAR_13, VAR_14->state, VAR_6);
  FUNC_7(VAR_13, VAR_5, VAR_3);
  FUNC_7(VAR_13, VAR_14->io_bits, VAR_7);
 } else {
  FUNC_3(VAR_13->class_dev,
   "attempted to run digital output command with no lines configured as outputs\n");
  return -VAR_1;
 }
 VAR_18 = FUNC_6(VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_4(VAR_15->cdo_mite_ring, VAR_14, VAR_16,
     VAR_14->async->prealloc_bufsz /
     FUNC_2(VAR_14));

 VAR_14->async->inttrig = VAR_12;

 return 0;
}
