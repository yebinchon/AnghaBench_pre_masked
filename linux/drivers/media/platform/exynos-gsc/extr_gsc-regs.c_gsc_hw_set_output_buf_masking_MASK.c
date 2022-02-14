
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_dev {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct gsc_dev *VAR_3, u32 VAR_4,
    bool VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_3->regs + VAR_2);
 u32 VAR_7 = 1 << VAR_4;

 VAR_6 &= ~VAR_7;
 VAR_6 |= VAR_5 << VAR_4;

 FUNC_1(VAR_6, VAR_3->regs + VAR_2);
 FUNC_1(VAR_6, VAR_3->regs + VAR_0);
 FUNC_1(VAR_6, VAR_3->regs + VAR_1);
}
