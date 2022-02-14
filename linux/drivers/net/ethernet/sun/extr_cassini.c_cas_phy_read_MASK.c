
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cas {int phy_addr; scalar_t__ regs; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static u16 FUNC_4(struct cas *VAR_9, int VAR_10)
{
 u32 VAR_11;
 int VAR_12 = VAR_8;

 VAR_11 = VAR_4 | VAR_1;
 VAR_11 |= FUNC_0(VAR_2, VAR_9->phy_addr);
 VAR_11 |= FUNC_0(VAR_3, VAR_10);
 VAR_11 |= VAR_6;
 FUNC_3(VAR_11, VAR_9->regs + VAR_7);


 while (VAR_12-- > 0) {
  FUNC_2(10);
  VAR_11 = FUNC_1(VAR_9->regs + VAR_7);
  if (VAR_11 & VAR_5)
   return VAR_11 & VAR_0;
 }
 return 0xFFFF;
}
