
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,int ,char*) ;

__attribute__((used)) static bool FUNC_2(struct ath_hw *VAR_1,
       s32 VAR_2,
       s32 VAR_3,
       s32 VAR_4,
       s32 VAR_5,
       s32 VAR_6,
       s32 VAR_7,
       s32 VAR_8,
       s32 VAR_9,
       s32 VAR_10[])
{
 s32 VAR_11 = VAR_3 - VAR_5,
     VAR_12 = VAR_2 - VAR_4,
     VAR_13;
 s32 VAR_14, VAR_15, VAR_16, VAR_17;
 const s32 VAR_18 = 1 << 15;
 struct ath_common *VAR_19 = FUNC_0(VAR_1);

 VAR_13 = ((VAR_11 >> 3) * (VAR_11 >> 3) + (VAR_12 >> 3) * (VAR_12 >> 3)) >> 9;

 if (!VAR_13) {
  FUNC_1(VAR_19, VAR_0, "Divide by 0\n");
  return 0;
 }


 VAR_14 = VAR_11 * (VAR_6 - VAR_8) + VAR_12 * (VAR_7 - VAR_9);

 VAR_15 = VAR_12 * (-VAR_6 + VAR_8) + VAR_11 * (VAR_7 - VAR_9);

 VAR_14 = (VAR_14 / VAR_13);
 VAR_15 = (VAR_15 / VAR_13);


 VAR_16 = VAR_6 - (VAR_3 * VAR_14 + VAR_2 * VAR_15) /
   VAR_18;

 VAR_17 = VAR_7 + (VAR_2 * VAR_14 - VAR_3 * VAR_15) /
   VAR_18;

 VAR_10[0] = VAR_14;
 VAR_10[1] = VAR_15;
 VAR_10[2] = VAR_16;
 VAR_10[3] = VAR_17;

 return 1;
}
