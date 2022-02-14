
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rtd_private {int fifosz; scalar_t__ ai_count; int xfer_count; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ mmio; int attached; struct rtd_private* private; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_12, void *VAR_13)
{
 struct comedi_device *VAR_14 = VAR_13;
 struct comedi_subdevice *VAR_15 = VAR_14->read_subdev;
 struct rtd_private *VAR_16 = VAR_14->private;
 u32 VAR_17;
 u16 VAR_18;
 u16 VAR_19;

 if (!VAR_14->attached)
  return VAR_7;

 VAR_19 = FUNC_2(VAR_14->mmio + VAR_8);

 if (!(VAR_19 & VAR_4))
  goto xfer_abort;

 VAR_18 = FUNC_3(VAR_14->mmio + VAR_10);

 if (VAR_18 == 0)
  return VAR_6;

 if (VAR_18 & VAR_5) {






  if (!(VAR_19 & VAR_2)) {

   if (FUNC_0(VAR_14, VAR_15, VAR_16->fifosz / 2) < 0)
    goto xfer_abort;

   if (VAR_16->ai_count == 0)
    goto xfer_done;
  } else if (VAR_16->xfer_count > 0) {
   if (VAR_19 & VAR_3) {

    if (FUNC_0(VAR_14, VAR_15, VAR_16->xfer_count) < 0)
     goto xfer_abort;

    if (VAR_16->ai_count == 0)
     goto xfer_done;
   }
  }
 }

 VAR_17 = FUNC_2(VAR_14->mmio + VAR_11) & 0xffff;
 if (VAR_17)
  goto xfer_abort;


 FUNC_4(VAR_18, VAR_14->mmio + VAR_9);
 FUNC_3(VAR_14->mmio + VAR_9);

 FUNC_1(VAR_14, VAR_15);

 return VAR_6;

xfer_abort:
 VAR_15->async->events |= VAR_1;

xfer_done:
 VAR_15->async->events |= VAR_0;


 VAR_18 = FUNC_3(VAR_14->mmio + VAR_10);
 FUNC_4(VAR_18, VAR_14->mmio + VAR_9);
 FUNC_3(VAR_14->mmio + VAR_9);

 VAR_19 = FUNC_2(VAR_14->mmio + VAR_8);
 VAR_17 = FUNC_2(VAR_14->mmio + VAR_11) & 0xffff;

 FUNC_1(VAR_14, VAR_15);

 return VAR_6;
}
