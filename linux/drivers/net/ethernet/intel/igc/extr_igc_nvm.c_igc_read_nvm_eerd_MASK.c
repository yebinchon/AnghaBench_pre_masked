
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct igc_nvm_info {scalar_t__ word_size; } ;
struct igc_hw {struct igc_nvm_info nvm; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct igc_hw*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

s32 FUNC_4(struct igc_hw *VAR_6, u16 VAR_7, u16 VAR_8, u16 *VAR_9)
{
 struct igc_nvm_info *VAR_10 = &VAR_6->nvm;
 u32 VAR_11, VAR_12 = 0;
 s32 VAR_13 = 0;




 if (VAR_7 >= VAR_10->word_size || (VAR_8 > (VAR_10->word_size - VAR_7)) ||
     VAR_8 == 0) {
  FUNC_0("nvm parameter(s) out of bounds\n");
  VAR_13 = -VAR_1;
  goto out;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_12 = ((VAR_7 + VAR_11) << VAR_3) +
   VAR_5;

  FUNC_3(VAR_0, VAR_12);
  VAR_13 = FUNC_1(VAR_6, VAR_2);
  if (VAR_13)
   break;

  VAR_9[VAR_11] = (FUNC_2(VAR_0) >> VAR_4);
 }

out:
 return VAR_13;
}
