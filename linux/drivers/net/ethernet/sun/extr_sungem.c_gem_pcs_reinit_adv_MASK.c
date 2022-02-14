
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gem {scalar_t__ phy_type; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gem *VAR_15)
{
 u32 VAR_16;




 VAR_16 = FUNC_0(VAR_15->regs + VAR_0);
 VAR_16 &= ~(VAR_1 | VAR_2);
 FUNC_1(VAR_16, VAR_15->regs + VAR_0);




 VAR_16 = FUNC_0(VAR_15->regs + VAR_3);
 VAR_16 |= (VAR_5 | VAR_6 |
  VAR_7 | VAR_4);
 FUNC_1(VAR_16, VAR_15->regs + VAR_3);




 VAR_16 = FUNC_0(VAR_15->regs + VAR_8);
 VAR_16 |= (VAR_10 | VAR_9);
 VAR_16 &= ~VAR_11;
 FUNC_1(VAR_16, VAR_15->regs + VAR_8);

 VAR_16 = FUNC_0(VAR_15->regs + VAR_0);
 VAR_16 |= VAR_1;
 FUNC_1(VAR_16, VAR_15->regs + VAR_0);





 VAR_16 = FUNC_0(VAR_15->regs + VAR_12);
 if (VAR_15->phy_type == VAR_14)
  VAR_16 &= ~VAR_13;
 else
  VAR_16 |= VAR_13;
 FUNC_1(VAR_16, VAR_15->regs + VAR_12);
}
