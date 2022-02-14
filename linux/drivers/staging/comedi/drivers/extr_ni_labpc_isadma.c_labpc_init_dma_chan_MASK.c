
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int dma; } ;
struct comedi_device {struct labpc_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,int,unsigned int,unsigned int,int ,int ) ;

void FUNC_1(struct comedi_device *VAR_2, unsigned int VAR_3)
{
 struct labpc_private *VAR_4 = VAR_2->private;


 if (VAR_3 != 1 && VAR_3 != 3)
  return;


 VAR_4->dma = FUNC_0(VAR_2, 1, VAR_3, VAR_3,
        VAR_1,
        VAR_0);
}
