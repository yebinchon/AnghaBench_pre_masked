
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {scalar_t__ pdev; void* mac_regs; } ;


 int FUNC_0 (scalar_t__,char) ;
 int FUNC_1 (char,void*) ;

__attribute__((used)) static void FUNC_2(struct velocity_info *VAR_0, char VAR_1)
{
 void *VAR_2 = VAR_0->mac_regs;

 if (VAR_0->pdev)
  FUNC_0(VAR_0->pdev, VAR_1);
 else
  FUNC_1(VAR_1, VAR_2 + 0x154);
}
