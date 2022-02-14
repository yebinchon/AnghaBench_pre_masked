
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {scalar_t__ revision; int regs; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct dwc3 *VAR_11)
{
 u32 VAR_12;


 VAR_12 = (VAR_8 |
   VAR_5 |
   VAR_1 |
   VAR_4 |
   VAR_9 |
   VAR_2 |
   VAR_7 |
   VAR_3);

 if (VAR_11->revision < VAR_10)
  VAR_12 |= VAR_6;

 FUNC_0(VAR_11->regs, VAR_0, VAR_12);
}
