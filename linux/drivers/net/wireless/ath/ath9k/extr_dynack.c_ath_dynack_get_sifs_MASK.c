
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int curchan; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline u32 FUNC_2(struct ath_hw *VAR_5, int VAR_6)
{
 u32 VAR_7 = VAR_0;

 if (VAR_6 == VAR_4) {
  if (FUNC_1(VAR_5->curchan))
   VAR_7 = VAR_3;
  else if (FUNC_0(VAR_5->curchan))
   VAR_7 = VAR_2;
  else
   VAR_7 = VAR_1;
 }
 return VAR_7;
}
