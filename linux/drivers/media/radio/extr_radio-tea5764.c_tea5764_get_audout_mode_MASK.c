
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5764_regs {int tnctrl; } ;
struct tea5764_device {struct tea5764_regs regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct tea5764_device *VAR_3)
{
 struct tea5764_regs *VAR_4 = &VAR_3->regs;

 if (VAR_4->tnctrl & VAR_0)
  return VAR_1;
 else
  return VAR_2;
}
