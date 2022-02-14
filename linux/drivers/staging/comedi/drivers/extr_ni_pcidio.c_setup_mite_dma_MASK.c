
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nidio96_private {int mite_channel_lock; scalar_t__ di_mite_chan; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct nidio96_private* private; } ;
struct TYPE_2__ {int prealloc_bufsz; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_subdevice*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 struct nidio96_private *VAR_3 = VAR_1->private;
 int VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)
  return VAR_4;


 FUNC_0(VAR_2, VAR_2->async->prealloc_bufsz);

 FUNC_4(&VAR_3->mite_channel_lock, VAR_5);
 if (VAR_3->di_mite_chan) {
  FUNC_2(VAR_3->di_mite_chan, 32, 32);
  FUNC_1(VAR_3->di_mite_chan);
 } else {
  VAR_4 = -VAR_0;
 }
 FUNC_5(&VAR_3->mite_channel_lock, VAR_5);

 return VAR_4;
}
