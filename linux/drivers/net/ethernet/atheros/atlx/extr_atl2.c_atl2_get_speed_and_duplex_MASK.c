
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atl2_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct atl2_hw*,int ,int*) ;

__attribute__((used)) static s32 FUNC_1(struct atl2_hw *VAR_10, u16 *VAR_11,
 u16 *VAR_12)
{
 s32 VAR_13;
 u16 VAR_14;


 VAR_13 = FUNC_0(VAR_10, VAR_4, &VAR_14);
 if (VAR_13)
  return VAR_13;

 if (!(VAR_14 & VAR_6))
  return VAR_0;

 switch (VAR_14 & VAR_7) {
 case 129:
  *VAR_11 = VAR_9;
  break;
 case 128:
  *VAR_11 = VAR_8;
  break;
 default:
  return VAR_1;
 }

 if (VAR_14 & VAR_5)
  *VAR_12 = VAR_2;
 else
  *VAR_12 = VAR_3;

 return 0;
}
