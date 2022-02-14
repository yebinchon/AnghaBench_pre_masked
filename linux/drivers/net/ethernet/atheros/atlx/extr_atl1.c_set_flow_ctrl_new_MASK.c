
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1_hw {scalar_t__ hw_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct atl1_hw *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15;


 VAR_15 = FUNC_0(VAR_12->hw_addr + VAR_3);
 VAR_14 = VAR_15 / 16;
 if (VAR_14 < 192)
  VAR_14 = 192;
 VAR_13 = VAR_15 * 7 / 8;
 if (VAR_13 < VAR_14)
  VAR_13 = VAR_14 + 16;
 VAR_15 = ((VAR_13 & VAR_8) << VAR_9) |
  ((VAR_14 & VAR_10) << VAR_11);
 FUNC_1(VAR_15, VAR_12->hw_addr + VAR_1);


 VAR_15 = FUNC_0(VAR_12->hw_addr + VAR_2);
 VAR_14 = VAR_15 / 8;
 VAR_13 = VAR_15 * 7 / 8;
 if (VAR_14 < 2)
  VAR_14 = 2;
 if (VAR_13 < VAR_14)
  VAR_13 = VAR_14 + 3;
 VAR_15 = ((VAR_13 & VAR_4) << VAR_5) |
  ((VAR_14 & VAR_6) << VAR_7);
 FUNC_1(VAR_15, VAR_12->hw_addr + VAR_0);
}
