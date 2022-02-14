
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5764_regs {int tnctrl; int frqset; } ;
struct tea5764_device {struct tea5764_regs regs; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct tea5764_device *VAR_1, int VAR_2)
{
 struct tea5764_regs *VAR_3 = &VAR_1->regs;


 if (VAR_3->tnctrl & VAR_0)
  VAR_3->frqset = (VAR_2 + 225000) / 8192;
 else
  VAR_3->frqset = (VAR_2 - 225000) / 8192;
}
