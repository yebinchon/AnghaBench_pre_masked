
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1760_device {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct isp1760_device *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_2->regs, VAR_1,
   VAR_3 ? VAR_0 : VAR_0 << 16);
}
