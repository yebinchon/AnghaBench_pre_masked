
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi721_bdma_chan {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct tsi721_bdma_chan *VAR_3, int VAR_4)
{
 if (VAR_4) {

  FUNC_1(VAR_2,
   VAR_3->regs + VAR_0);
  FUNC_0(VAR_3->regs + VAR_0);

  FUNC_1(VAR_2,
   VAR_3->regs + VAR_1);
 } else {

  FUNC_1(0, VAR_3->regs + VAR_1);

  FUNC_1(VAR_2,
   VAR_3->regs + VAR_0);
 }

}
