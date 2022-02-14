
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pic32_sqi {int cur_mode; scalar_t__ cur_speed; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct pic32_sqi*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,unsigned int,int,int,int) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct pic32_sqi *VAR_16)
{
 unsigned long VAR_17;
 u32 VAR_18;





 FUNC_1(VAR_17);


 FUNC_5(VAR_13, VAR_16->regs + VAR_3);


 FUNC_4(VAR_16->regs + VAR_3, VAR_18,
      !(VAR_18 & VAR_13), 1, 5000);


 FUNC_2(VAR_16);


 FUNC_0(VAR_17);


 VAR_18 = FUNC_3(VAR_16->regs + VAR_2);
 VAR_18 &= ~(VAR_14 << VAR_15);
 VAR_18 &= ~(VAR_11 << VAR_12);
 VAR_18 |= (1U << VAR_15) | (1U << VAR_12);
 FUNC_5(VAR_18, VAR_16->regs + VAR_2);

 VAR_18 = FUNC_3(VAR_16->regs + VAR_5);
 VAR_18 &= ~(VAR_14 << VAR_15);
 VAR_18 &= ~(VAR_11 << VAR_12);
 VAR_18 |= (1U << VAR_15) | (1U << VAR_12);
 FUNC_5(VAR_18, VAR_16->regs + VAR_5);


 VAR_18 = FUNC_3(VAR_16->regs + VAR_3);


 VAR_18 &= ~VAR_7;
 VAR_18 |= VAR_8 << VAR_9;
 FUNC_5(VAR_18, VAR_16->regs + VAR_3);


 VAR_18 |= VAR_10 << VAR_6;


 VAR_18 |= VAR_1;


 VAR_18 |= 3U << VAR_4;
 FUNC_5(VAR_18, VAR_16->regs + VAR_3);


 FUNC_5(0, VAR_16->regs + VAR_0);

 VAR_16->cur_speed = 0;
 VAR_16->cur_mode = -1;
}
