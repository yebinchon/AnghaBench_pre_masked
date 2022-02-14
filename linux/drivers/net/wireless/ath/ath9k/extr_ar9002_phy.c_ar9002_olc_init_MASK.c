
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ath_hw {scalar_t__ PDADCdelta; int * originalGain; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct ath_hw*,scalar_t__) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int ,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_11)
{
 u32 VAR_12;

 if (!VAR_9)
  return;

 if (VAR_10) {
  FUNC_2(VAR_11, VAR_7,
    VAR_8);
  FUNC_3(VAR_11, VAR_1,
    VAR_2,
    VAR_3,
    VAR_4);
  FUNC_4(100);
 } else {
  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
   VAR_11->originalGain[VAR_12] =
    FUNC_0(FUNC_1(VAR_11, VAR_6 + VAR_12 * 4),
      VAR_5);
  VAR_11->PDADCdelta = 0;
 }
}
