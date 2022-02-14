
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_660x_private {int * io_cfg; int interrupt_lock; int mite_channel_lock; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct ni_660x_private* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3)
{
 struct ni_660x_private *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->mite_channel_lock);
 FUNC_1(&VAR_4->interrupt_lock);
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  VAR_4->io_cfg[VAR_5] = VAR_2;

 return 0;
}
