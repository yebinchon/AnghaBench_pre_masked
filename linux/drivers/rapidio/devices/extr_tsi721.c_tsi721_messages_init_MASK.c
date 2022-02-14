
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi721_device {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct tsi721_device *VAR_9)
{
 int VAR_10;

 FUNC_4(0, VAR_9->regs + VAR_7);
 FUNC_4(0, VAR_9->regs + VAR_2);
 FUNC_4(0, VAR_9->regs + VAR_3);


 FUNC_4(VAR_5, VAR_9->regs + VAR_4);


 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {

  FUNC_4(VAR_0,
   VAR_9->regs + FUNC_0(VAR_10));

  FUNC_4(0, VAR_9->regs + FUNC_1(VAR_10));

  FUNC_4(VAR_6,
    VAR_9->regs + FUNC_2(VAR_10));
  FUNC_4(VAR_8,
    VAR_9->regs + FUNC_3(VAR_10));
 }

 return 0;
}
