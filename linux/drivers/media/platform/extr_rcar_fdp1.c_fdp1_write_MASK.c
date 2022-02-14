
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fdp1_dev {scalar_t__ regs; } ;


 int VAR_0 ;
 int FUNC_0 (struct fdp1_dev*,char*,int ,unsigned int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fdp1_dev *VAR_1, u32 VAR_2, unsigned int VAR_3)
{
 if (VAR_0 >= 2)
  FUNC_0(VAR_1, "Write 0x%08x to 0x%04x\n", VAR_2, VAR_3);

 FUNC_1(VAR_2, VAR_1->regs + VAR_3);
}
