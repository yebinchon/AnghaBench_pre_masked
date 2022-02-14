
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fdp1_dev {scalar_t__ regs; } ;


 int VAR_0 ;
 int FUNC_0 (struct fdp1_dev*,char*,int ,unsigned int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct fdp1_dev *VAR_1, unsigned int VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_1->regs + VAR_2);

 if (VAR_0 >= 2)
  FUNC_0(VAR_1, "Read 0x%08x from 0x%04x\n", VAR_3, VAR_2);

 return VAR_3;
}
