
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nidio96_private {int mite_channel_lock; scalar_t__ di_mite_chan; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int spinlock; struct nidio96_private* private; } ;


 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (scalar_t__,struct comedi_subdevice*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1)
{
 struct nidio96_private *VAR_2 = VAR_0->private;
 unsigned long VAR_3;
 int VAR_4;

 FUNC_3(&VAR_0->spinlock, VAR_3);
 FUNC_2(&VAR_2->mite_channel_lock);
 if (VAR_2->di_mite_chan)
  FUNC_1(VAR_2->di_mite_chan, VAR_1);
 FUNC_4(&VAR_2->mite_channel_lock);
 VAR_4 = FUNC_0(VAR_1);
 FUNC_5(&VAR_0->spinlock, VAR_3);
 return VAR_4;
}
