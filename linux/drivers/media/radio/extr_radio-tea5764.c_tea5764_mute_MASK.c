
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5764_regs {int tnctrl; } ;
struct tea5764_device {struct tea5764_regs regs; } ;


 int VAR_0 ;
 int FUNC_0 (struct tea5764_device*) ;

__attribute__((used)) static void FUNC_1(struct tea5764_device *VAR_1, int VAR_2)
{
 struct tea5764_regs *VAR_3 = &VAR_1->regs;
 int VAR_4 = VAR_3->tnctrl;

 if (VAR_2)
  VAR_3->tnctrl |= VAR_0;
 else
  VAR_3->tnctrl &= ~VAR_0;
 if (VAR_4 != VAR_3->tnctrl)
  FUNC_0(VAR_1);
}
