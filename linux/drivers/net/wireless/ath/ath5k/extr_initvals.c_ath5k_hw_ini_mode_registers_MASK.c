
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct ath5k_ini_mode {scalar_t__ mode_register; int * mode_value; } ;
struct ath5k_hw {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ath5k_hw *VAR_0,
  unsigned int VAR_1, const struct ath5k_ini_mode *VAR_2,
  u8 VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(VAR_4);
  FUNC_1(VAR_0, VAR_2[VAR_4].mode_value[VAR_3],
   (u32)VAR_2[VAR_4].mode_register);
 }

}
