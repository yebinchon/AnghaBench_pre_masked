
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl2_hw {int dummy; } ;


 int FUNC_0 (struct atl2_hw*,int ) ;
 int FUNC_1 (struct atl2_hw*,int ,int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct atl2_hw *VAR_22, u32 VAR_23, u32 *VAR_24)
{
 int VAR_25;
 u32 VAR_26;

 FUNC_1(VAR_22, VAR_6, 0);
 FUNC_1(VAR_22, VAR_5, VAR_23);

 VAR_26 = VAR_21 |
  (VAR_4 & VAR_16) <<
   VAR_17 |
  (VAR_0 & VAR_8) <<
   VAR_9 |
  (VAR_1 & VAR_10) <<
   VAR_11 |
  (VAR_3 & VAR_14) <<
   VAR_15 |
  (VAR_2 & VAR_12) <<
   VAR_13 |
  (0x1 & VAR_18) << VAR_19;

 FUNC_1(VAR_22, VAR_7, VAR_26);

 VAR_26 |= VAR_20;

 FUNC_1(VAR_22, VAR_7, VAR_26);

 for (VAR_25 = 0; VAR_25 < 10; VAR_25++) {
  FUNC_2(1);
  VAR_26 = FUNC_0(VAR_22, VAR_7);
  if (!(VAR_26 & VAR_20))
   break;
 }

 if (VAR_26 & VAR_20)
  return 0;

 *VAR_24 = FUNC_0(VAR_22, VAR_6);

 return 1;
}
