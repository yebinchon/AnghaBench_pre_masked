
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgb_hw {int dummy; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (struct ixgb_hw*,int ) ;
 int FUNC_2 (struct ixgb_hw*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;

__attribute__((used)) static u16
FUNC_4(struct ixgb_hw *VAR_12,
  u32 VAR_13,
  u32 VAR_14,
  u32 VAR_15)
{
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18 = 0;

 FUNC_0(VAR_13 <= VAR_2);
 FUNC_0(VAR_14 <= VAR_0);
 FUNC_0(VAR_15 <= VAR_1);


 VAR_18 = ((VAR_13 << VAR_6) |
     (VAR_15 << VAR_4) |
     (VAR_14 << VAR_7) |
     (VAR_3 | VAR_5));

 FUNC_2(VAR_12, VAR_10, VAR_18);
 for (VAR_16 = 0; VAR_16 < 10; VAR_16++)
 {
  FUNC_3(10);

  VAR_18 = FUNC_1(VAR_12, VAR_10);

  if ((VAR_18 & VAR_5) == 0)
   break;
 }

 FUNC_0((VAR_18 & VAR_5) == 0);


 VAR_18 = ((VAR_13 << VAR_6) |
     (VAR_15 << VAR_4) |
     (VAR_14 << VAR_7) |
     (VAR_8 | VAR_5));

 FUNC_2(VAR_12, VAR_10, VAR_18);
 for (VAR_16 = 0; VAR_16 < 10; VAR_16++)
 {
  FUNC_3(10);

  VAR_18 = FUNC_1(VAR_12, VAR_10);

  if ((VAR_18 & VAR_5) == 0)
   break;
 }

 FUNC_0((VAR_18 & VAR_5) == 0);




 VAR_17 = FUNC_1(VAR_12, VAR_11);
 VAR_17 >>= VAR_9;
 return((u16) VAR_17);
}
