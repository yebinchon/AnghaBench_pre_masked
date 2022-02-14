
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct fm10k_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct fm10k_hw*,int) ;
 int FUNC_2 (struct fm10k_hw*,int,int) ;

__attribute__((used)) static s32 FUNC_3(struct fm10k_hw *VAR_3, u32 VAR_4, u8 VAR_5, bool VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


 if (VAR_5 > VAR_2)
  return VAR_0;
 VAR_11 = VAR_4 >> 16;
 VAR_4 = (VAR_4 << 17) >> 17;


 if (VAR_11 >= VAR_1 || VAR_4 >= VAR_1)
  return VAR_0;


 for (VAR_8 = FUNC_0(VAR_5, VAR_4 / 32), VAR_10 = VAR_4 % 32;
      VAR_11 < VAR_1;
      VAR_11 -= 32 - VAR_10, VAR_8++, VAR_10 = 0) {

  VAR_7 = FUNC_1(VAR_3, VAR_8);


  VAR_9 = (~(u32)0 >> ((VAR_11 < 31) ? 31 - VAR_11 : 0)) << VAR_10;


  VAR_9 &= VAR_6 ? ~VAR_7 : VAR_7;
  if (VAR_9)
   FUNC_2(VAR_3, VAR_8, VAR_7 ^ VAR_9);
 }

 return 0;
}
