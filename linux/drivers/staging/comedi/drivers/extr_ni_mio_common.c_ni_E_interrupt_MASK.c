
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_m_series; int mite_channel_lock; scalar_t__ ao_mite_chan; scalar_t__ ai_mite_chan; scalar_t__ mite; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int spinlock; int attached; struct ni_private* private; struct comedi_subdevice* write_subdev; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,unsigned short) ;
 int FUNC_1 (struct comedi_device*,unsigned short) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,unsigned short) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,unsigned short) ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (struct comedi_device*,int) ;
 int FUNC_7 (scalar_t__,struct comedi_subdevice*,int) ;
 unsigned short FUNC_8 (struct comedi_device*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_6, void *VAR_7)
{
 struct comedi_device *VAR_8 = VAR_7;
 struct comedi_subdevice *VAR_9 = VAR_8->read_subdev;
 struct comedi_subdevice *VAR_10 = VAR_8->write_subdev;
 unsigned short VAR_11;
 unsigned short VAR_12;
 unsigned long VAR_13;




 if (!VAR_8->attached)
  return VAR_1;
 FUNC_9();


 FUNC_10(&VAR_8->spinlock, VAR_13);
 VAR_11 = FUNC_8(VAR_8, VAR_3);
 VAR_12 = FUNC_8(VAR_8, VAR_5);
 FUNC_0(VAR_8, VAR_11);
 FUNC_1(VAR_8, VAR_12);
 if (VAR_9) {
  if (VAR_11 & VAR_2)
   FUNC_3(VAR_8, VAR_9, VAR_11);

  FUNC_2(VAR_8, VAR_9);
 }
 if (VAR_10) {
  if (VAR_12 & VAR_4)
   FUNC_4(VAR_8, VAR_10, VAR_12);

  FUNC_2(VAR_8, VAR_10);
 }
 FUNC_6(VAR_8, 0);
 FUNC_6(VAR_8, 1);





 FUNC_11(&VAR_8->spinlock, VAR_13);
 return VAR_0;
}
