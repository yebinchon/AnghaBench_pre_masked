
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cck_weak_sig; } ;
struct ath5k_hw {TYPE_1__ ani_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ,int const) ;
 int FUNC_1 (struct ath5k_hw*,int ,char*,char*) ;
 int VAR_2 ;

void
FUNC_2(struct ath5k_hw *VAR_3, bool VAR_4)
{
 static const int VAR_5[] = { 8, 6 };
 FUNC_0(VAR_3, VAR_0,
    VAR_1, VAR_5[VAR_4]);
 VAR_3->ani_state.cck_weak_sig = VAR_4;
 FUNC_1(VAR_3, VAR_2, "turned %s",
     VAR_4 ? "on" : "off");
}
