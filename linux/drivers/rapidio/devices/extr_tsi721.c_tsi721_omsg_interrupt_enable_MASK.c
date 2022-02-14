
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsi721_device {int flags; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct tsi721_device *VAR_2, int VAR_3,
      u32 VAR_4)
{
 u32 VAR_5;

 if (!VAR_4)
  return;


 FUNC_4(VAR_4, VAR_2->regs + FUNC_1(VAR_3));


 VAR_5 = FUNC_3(VAR_2->regs + FUNC_2(VAR_3));
 FUNC_4(VAR_5 | VAR_4, VAR_2->regs + FUNC_2(VAR_3));

 if (VAR_2->flags & VAR_1)
  return;






 VAR_5 = FUNC_3(VAR_2->regs + VAR_0);
 FUNC_4(VAR_5 | FUNC_0(VAR_3),
    VAR_2->regs + VAR_0);
}
