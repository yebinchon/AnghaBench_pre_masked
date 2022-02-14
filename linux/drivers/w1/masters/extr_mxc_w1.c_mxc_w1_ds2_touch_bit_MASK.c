
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxc_w1_device {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned long VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (int) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static u8 FUNC_6(void *VAR_3, u8 VAR_4)
{
 struct mxc_w1_device *VAR_5 = VAR_3;
 unsigned long VAR_6;

 FUNC_5(FUNC_0(VAR_4), VAR_5->regs + VAR_0);


 VAR_6 = VAR_2 + FUNC_4(200);

 FUNC_3(60);

 do {
  u8 VAR_7 = FUNC_1(VAR_5->regs + VAR_0);


  if (!(VAR_7 & FUNC_0(VAR_4)))
   return !!(VAR_7 & VAR_1);
 } while (FUNC_2(VAR_6));

 return 0;
}
