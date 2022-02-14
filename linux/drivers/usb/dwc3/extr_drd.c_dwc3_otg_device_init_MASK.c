
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int regs; int dis_u2_susphy_quirk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct dwc3*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dwc3 *VAR_10)
{
 u32 VAR_11;







 VAR_11 = FUNC_2(VAR_10->regs, VAR_1);

 VAR_11 |= VAR_2;
 FUNC_3(VAR_10->regs, VAR_1, VAR_11);





 VAR_11 = FUNC_2(VAR_10->regs, VAR_3);
 VAR_11 |= VAR_7;
 VAR_11 &= ~(VAR_8 | VAR_5 |
   VAR_4 | VAR_6);
 FUNC_3(VAR_10->regs, VAR_3, VAR_11);

 FUNC_1(VAR_10, VAR_9);

 if (!VAR_10->dis_u2_susphy_quirk) {
  VAR_11 = FUNC_2(VAR_10->regs, FUNC_0(0));
  VAR_11 |= VAR_0;
  FUNC_3(VAR_10->regs, FUNC_0(0), VAR_11);
 }

}
