
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long u32 ;
struct dc_rtc {scalar_t__ regs; } ;


 int FUNC_0 (int const*) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct dc_rtc*,int const*,int ) ;
 unsigned long FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dc_rtc *VAR_2, unsigned long *VAR_3)
{
 static const u8 VAR_4[] = {128, 129};
 u32 VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_4, FUNC_0(VAR_4));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_5 = FUNC_2(VAR_2->regs + VAR_0);
 VAR_6 = FUNC_2(VAR_2->regs + VAR_1);

 while (1) {
  VAR_7 = FUNC_2(VAR_2->regs + VAR_1);
  if (VAR_6 == VAR_7)
   break;
  VAR_6 = VAR_7;
 }

 *VAR_3 = VAR_5 + VAR_6;
 return 0;
}
