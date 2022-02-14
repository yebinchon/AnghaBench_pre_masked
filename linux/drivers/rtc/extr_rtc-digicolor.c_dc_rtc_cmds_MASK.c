
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct dc_rtc {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 scalar_t__ VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (scalar_t__,int const,int,int ,int ) ;
 int FUNC_1 (int const,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct dc_rtc *VAR_5, const u8 *VAR_6, int VAR_7)
{
 u8 VAR_8;
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  FUNC_1((VAR_6[VAR_9] & VAR_2) | VAR_4,
          VAR_5->regs + VAR_3);
  VAR_10 = FUNC_0(
   VAR_5->regs + VAR_3, VAR_8,
   !(VAR_8 & VAR_4), VAR_0, VAR_1);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
