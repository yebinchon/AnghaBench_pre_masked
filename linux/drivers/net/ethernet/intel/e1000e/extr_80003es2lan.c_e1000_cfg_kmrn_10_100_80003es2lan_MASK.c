
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_9, u16 VAR_10)
{
 s32 VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0;
 u16 VAR_14, VAR_15;

 VAR_14 = VAR_1;
 VAR_11 =
     FUNC_0(VAR_9,
          VAR_2,
          VAR_14);
 if (VAR_11)
  return VAR_11;


 VAR_12 = FUNC_3(VAR_8);
 VAR_12 &= ~VAR_3;
 VAR_12 |= VAR_0;
 FUNC_4(VAR_8, VAR_12);

 do {
  VAR_11 = FUNC_1(VAR_9, VAR_6, &VAR_14);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_1(VAR_9, VAR_6, &VAR_15);
  if (VAR_11)
   return VAR_11;
  VAR_13++;
 } while ((VAR_14 != VAR_15) && (VAR_13 < VAR_5));

 if (VAR_10 == VAR_7)
  VAR_14 |= VAR_4;
 else
  VAR_14 &= ~VAR_4;

 return FUNC_2(VAR_9, VAR_6, VAR_14);
}
