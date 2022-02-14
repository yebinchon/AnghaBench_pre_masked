
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_sqi {scalar_t__ regs; int base_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pic32_sqi *VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;


 VAR_7 = FUNC_0(VAR_4->base_clk) / (2 * VAR_5);
 VAR_7 &= VAR_0;

 VAR_6 = FUNC_1(VAR_4->regs + VAR_2);

 VAR_6 &= ~(VAR_3 | (VAR_0 << VAR_1));
 VAR_6 |= VAR_7 << VAR_1;
 FUNC_3(VAR_6, VAR_4->regs + VAR_2);


 return FUNC_2(VAR_4->regs + VAR_2, VAR_6,
      VAR_6 & VAR_3, 1, 5000);
}
