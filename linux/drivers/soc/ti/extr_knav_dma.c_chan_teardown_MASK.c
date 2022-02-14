
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knav_dma_chan {TYPE_1__* reg_chan; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int control; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_4 ;
 TYPE_2__* VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct knav_dma_chan *VAR_6)
{
 unsigned long VAR_7, VAR_8;

 if (!VAR_6->reg_chan)
  return 0;


 FUNC_4(VAR_1, &VAR_6->reg_chan->control);


 VAR_7 = VAR_4 + FUNC_1(VAR_2);
 do {
  VAR_8 = FUNC_2(&VAR_6->reg_chan->control);
  if ((VAR_8 & VAR_0) == 0)
   break;
 } while (FUNC_3(VAR_7, VAR_4));

 if (FUNC_2(&VAR_6->reg_chan->control) & VAR_0) {
  FUNC_0(VAR_5->dev, "timeout waiting for teardown\n");
  return -VAR_3;
 }

 return 0;
}
