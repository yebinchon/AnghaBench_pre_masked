
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16_private_struct {int dma; int timer; } ;
struct comedi_device {struct das16_private_struct* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,int,unsigned int,unsigned int,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3, unsigned int VAR_4)
{
 struct das16_private_struct *VAR_5 = VAR_3->private;

 FUNC_1(&VAR_5->timer, VAR_2, 0);


 if (!(VAR_4 == 1 || VAR_4 == 3))
  return;


 VAR_5->dma = FUNC_0(VAR_3, 2, VAR_4, VAR_4,
        VAR_1, VAR_0);
}
