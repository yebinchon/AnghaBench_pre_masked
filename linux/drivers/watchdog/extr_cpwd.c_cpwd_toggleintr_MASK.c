
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpwd {scalar_t__ regs; TYPE_1__* devs; } ;
struct TYPE_2__ {unsigned char intr_mask; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cpwd *VAR_5, int VAR_6, int VAR_7)
{
 unsigned char VAR_8 = FUNC_0(VAR_5->regs + VAR_0);
 unsigned char VAR_9 =
  (VAR_6 == -1) ?
  (VAR_1 | VAR_2 | VAR_3) :
  (VAR_5->devs[VAR_6].intr_mask);

 if (VAR_7 == VAR_4)
  VAR_8 &= ~VAR_9;
 else
  VAR_8 |= VAR_9;

 FUNC_1(VAR_8, VAR_5->regs + VAR_0);
}
