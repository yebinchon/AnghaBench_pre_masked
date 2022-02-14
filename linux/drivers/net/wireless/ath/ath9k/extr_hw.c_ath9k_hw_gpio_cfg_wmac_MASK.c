
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ,int,int) ;
 int FUNC_3 (struct ath_hw*,int,int) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_8, u32 VAR_9, bool VAR_10,
       u32 VAR_11)
{
 u32 VAR_12, VAR_13 = VAR_9;

 if (FUNC_0(VAR_8)) {
  VAR_12 = VAR_10 ?
   VAR_2 : VAR_1;
  FUNC_2(VAR_8, VAR_0, VAR_12 << VAR_13,
   VAR_3 << VAR_13);
 } else if (FUNC_1(VAR_8)) {
  VAR_12 = VAR_10 ? 1 : 0;
  FUNC_2(VAR_8, VAR_4, VAR_12 << VAR_13,
   VAR_12 << VAR_13);
 } else {
  VAR_13 = VAR_9 << 1;
  VAR_12 = VAR_10 ?
   VAR_6 : VAR_7;
  FUNC_2(VAR_8, VAR_4, VAR_12 << VAR_13,
   VAR_5 << VAR_13);

  if (VAR_10)
   FUNC_3(VAR_8, VAR_9, VAR_11);
 }
}
