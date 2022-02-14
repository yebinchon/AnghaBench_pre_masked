
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_dev {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct gsc_dev *VAR_3)
{
 unsigned long VAR_4 = VAR_2 + FUNC_0(50);
 u32 VAR_5;

 while (FUNC_2(VAR_2, VAR_4)) {
  VAR_5 = FUNC_1(VAR_3->regs + VAR_1);
  if (!VAR_5)
   return 0;
  FUNC_3(10, 20);
 }

 return -VAR_0;
}
