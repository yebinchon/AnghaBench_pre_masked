
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int firstep_level; } ;
struct ath5k_hw {TYPE_1__ ani_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ,int const) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (struct ath5k_hw*,int ,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct ath5k_hw*,char*,int) ;

void
FUNC_4(struct ath5k_hw *VAR_3, int VAR_4)
{
 static const int VAR_5[] = { 0, 4, 8 };

 if (VAR_4 < 0 || VAR_4 >= FUNC_1(VAR_5)) {
  FUNC_3(VAR_3, "firstep level %d out of range", VAR_4);
  return;
 }

 FUNC_0(VAR_3, VAR_0,
    VAR_1, VAR_5[VAR_4]);

 VAR_3->ani_state.firstep_level = VAR_4;
 FUNC_2(VAR_3, VAR_2, "new level %d", VAR_4);
}
