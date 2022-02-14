
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16_private_struct {int dma; int timer; } ;
struct comedi_device {struct das16_private_struct* private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0)
{
 struct das16_private_struct *VAR_1 = VAR_0->private;

 if (VAR_1) {
  FUNC_1(&VAR_1->timer);
  FUNC_0(VAR_1->dma);
 }
}
