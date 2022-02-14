
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipaq_micro {int dev; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ipaq_micro*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ipaq_micro *VAR_6)
{
 u32 VAR_7, VAR_8;

 while ((VAR_7 = FUNC_2(VAR_6->base + VAR_1)) & VAR_4) {
  VAR_8 = FUNC_2(VAR_6->base + VAR_0);
  if (VAR_7 & VAR_3)
   FUNC_0(VAR_6->dev, "rx: parity error\n");
  else if (VAR_7 & VAR_2)
   FUNC_0(VAR_6->dev, "rx: framing error\n");
  else if (VAR_7 & VAR_5)
   FUNC_0(VAR_6->dev, "rx: overrun error\n");
  FUNC_1(VAR_6, VAR_8);
 }
}
