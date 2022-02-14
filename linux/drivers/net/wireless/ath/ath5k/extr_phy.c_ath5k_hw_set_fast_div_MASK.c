
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath5k_hw {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ) ;
 int FUNC_2 (struct ath5k_hw*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ath5k_hw *VAR_6, u8 VAR_7, bool VAR_8)
{
 switch (VAR_7) {
 case 128:


 case 130:
  if (VAR_8)
   FUNC_0(VAR_6, VAR_0,
     VAR_1);
  else
   FUNC_1(VAR_6, VAR_0,
     VAR_1);
  break;
 case 129:
  FUNC_1(VAR_6, VAR_0,
     VAR_1);
  break;
 default:
  return;
 }

 if (VAR_8) {
  FUNC_2(VAR_6, VAR_4,
    VAR_5, 4);

  FUNC_1(VAR_6, VAR_2,
     VAR_3);
 } else {
  FUNC_2(VAR_6, VAR_4,
    VAR_5, 0);

  FUNC_0(VAR_6, VAR_2,
     VAR_3);
 }
}
