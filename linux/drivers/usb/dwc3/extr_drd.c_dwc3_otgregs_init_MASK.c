
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int regs; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct dwc3*) ;
 int FUNC_1 (struct dwc3*,int ) ;
 int FUNC_2 (struct dwc3*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct dwc3 *VAR_12)
{
 u32 VAR_13;







 VAR_13 = FUNC_3(VAR_12->regs, VAR_2);
 VAR_13 |= VAR_4;
 FUNC_4(VAR_12->regs, VAR_2, VAR_13);


 VAR_13 = FUNC_3(VAR_12->regs, VAR_0);
 VAR_13 &= ~VAR_1;
 FUNC_4(VAR_12->regs, VAR_0, VAR_13);






 VAR_13 = FUNC_3(VAR_12->regs, VAR_2);
 VAR_13 &= ~(VAR_5 | VAR_3);
 FUNC_4(VAR_12->regs, VAR_2, VAR_13);

 FUNC_0(VAR_12);

 FUNC_1(VAR_12, VAR_11);

 FUNC_2(VAR_12, VAR_11);




 VAR_13 = FUNC_3(VAR_12->regs, VAR_6);
 VAR_13 |= VAR_10;
 VAR_13 &= ~(VAR_7 | VAR_9 |
   VAR_8);
 FUNC_4(VAR_12->regs, VAR_6, VAR_13);
}
