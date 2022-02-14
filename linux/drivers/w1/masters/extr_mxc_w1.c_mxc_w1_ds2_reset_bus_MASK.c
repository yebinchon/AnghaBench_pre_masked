
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxc_w1_device {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static u8 FUNC_5(void *VAR_4)
{
 struct mxc_w1_device *VAR_5 = VAR_4;
 unsigned long VAR_6;

 FUNC_4(VAR_2, VAR_5->regs + VAR_0);


 VAR_6 = VAR_3 + FUNC_3(1500);

 FUNC_2(511 + 512);

 do {
  u8 VAR_7 = FUNC_0(VAR_5->regs + VAR_0);


  if (!(VAR_7 & VAR_2))
   return !(VAR_7 & VAR_1);
 } while (FUNC_1(VAR_6));

 return 1;
}
