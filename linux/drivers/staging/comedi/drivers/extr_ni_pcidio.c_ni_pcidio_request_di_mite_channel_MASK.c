
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nidio96_private {int mite_channel_lock; TYPE_1__* di_mite_chan; int di_mite_ring; int mite; } ;
struct comedi_device {scalar_t__ mmio; int class_dev; struct nidio96_private* private; } ;
struct TYPE_3__ {int channel; int dir; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_3)
{
 struct nidio96_private *VAR_4 = VAR_3->private;
 unsigned long VAR_5;

 FUNC_5(&VAR_4->mite_channel_lock, VAR_5);
 FUNC_0(VAR_4->di_mite_chan);
 VAR_4->di_mite_chan =
     FUNC_2(VAR_4->mite,
       VAR_4->di_mite_ring, 1, 2);
 if (!VAR_4->di_mite_chan) {
  FUNC_6(&VAR_4->mite_channel_lock, VAR_5);
  FUNC_1(VAR_3->class_dev, "failed to reserve mite dma channel\n");
  return -VAR_2;
 }
 VAR_4->di_mite_chan->dir = VAR_0;
 FUNC_7(FUNC_3(VAR_4->di_mite_chan->channel) |
        FUNC_4(VAR_4->di_mite_chan->channel),
        VAR_3->mmio + VAR_1);
 FUNC_6(&VAR_4->mite_channel_lock, VAR_5);
 return 0;
}
