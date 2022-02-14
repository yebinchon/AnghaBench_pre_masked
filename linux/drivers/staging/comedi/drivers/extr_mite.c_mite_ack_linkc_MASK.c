
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mite_channel {int channel; struct mite* mite; } ;
struct mite {scalar_t__ mmio; } ;
struct comedi_subdevice {TYPE_1__* async; TYPE_2__* device; } ;
struct TYPE_4__ {int class_dev; } ;
struct TYPE_3__ {int events; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (struct mite_channel*) ;
 int FUNC_3 (struct mite_channel*,struct comedi_subdevice*) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(struct mite_channel *VAR_4,
      struct comedi_subdevice *VAR_5,
      bool VAR_6)
{
 struct mite *VAR_7 = VAR_4->mite;
 unsigned int VAR_8;

 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8 & VAR_1) {
  FUNC_4(VAR_0, VAR_7->mmio + FUNC_0(VAR_4->channel));
  VAR_6 = 1;
 }
 if (VAR_6)
  FUNC_3(VAR_4, VAR_5);

 if (VAR_8 & VAR_2) {
  FUNC_1(VAR_5->device->class_dev,
   "mite: transfer error %08x\n", VAR_8);
  VAR_5->async->events |= VAR_3;
 }
}
