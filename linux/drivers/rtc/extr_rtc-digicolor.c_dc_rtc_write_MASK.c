
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u32 ;
struct dc_rtc {scalar_t__ regs; } ;


 int FUNC_0 (int const*) ;



 scalar_t__ VAR_0 ;
 int FUNC_1 (struct dc_rtc*,int const*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dc_rtc *VAR_1, u32 VAR_2)
{
 static const u8 VAR_3[] = {128, 130, 129, 130};

 FUNC_2(VAR_2, VAR_1->regs + VAR_0);
 return FUNC_1(VAR_1, VAR_3, FUNC_0(VAR_3));
}
