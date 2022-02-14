
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nidio96_private {int mite_channel_lock; int * di_mite_chan; } ;
struct comedi_device {scalar_t__ mmio; struct nidio96_private* private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_1)
{
 struct nidio96_private *VAR_2 = VAR_1->private;
 unsigned long VAR_3;

 FUNC_3(&VAR_2->mite_channel_lock, VAR_3);
 if (VAR_2->di_mite_chan) {
  FUNC_0(VAR_2->di_mite_chan);
  VAR_2->di_mite_chan = ((void*)0);
  FUNC_5(FUNC_1(0) |
         FUNC_2(0),
         VAR_1->mmio + VAR_0);
 }
 FUNC_4(&VAR_2->mite_channel_lock, VAR_3);
}
