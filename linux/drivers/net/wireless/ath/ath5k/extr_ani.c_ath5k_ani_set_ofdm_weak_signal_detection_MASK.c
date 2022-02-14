
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ofdm_weak_sig; } ;
struct ath5k_hw {TYPE_1__ ani_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ) ;
 int FUNC_2 (struct ath5k_hw*,int ,int ,int const) ;
 int FUNC_3 (struct ath5k_hw*,int ,char*,char*) ;
 int VAR_9 ;

void
FUNC_4(struct ath5k_hw *VAR_10, bool VAR_11)
{
 static const int VAR_12[] = { 127, 50 };
 static const int VAR_13[] = { 127, 40 };
 static const int VAR_14[] = { 127, 0x4d };
 static const int VAR_15[] = { 127, 0x40 };
 static const int VAR_16[] = { 31, 16 };
 static const int VAR_17[] = { 63, 48 };

 FUNC_2(VAR_10, VAR_4,
    VAR_5, VAR_12[VAR_11]);
 FUNC_2(VAR_10, VAR_4,
    VAR_6, VAR_13[VAR_11]);
 FUNC_2(VAR_10, VAR_0,
    VAR_1, VAR_14[VAR_11]);
 FUNC_2(VAR_10, VAR_0,
    VAR_2, VAR_15[VAR_11]);
 FUNC_2(VAR_10, VAR_0,
   VAR_3, VAR_16[VAR_11]);
 FUNC_2(VAR_10, VAR_4,
   VAR_7, VAR_17[VAR_11]);

 if (VAR_11)
  FUNC_1(VAR_10, VAR_4,
    VAR_8);
 else
  FUNC_0(VAR_10, VAR_4,
    VAR_8);

 VAR_10->ani_state.ofdm_weak_sig = VAR_11;
 FUNC_3(VAR_10, VAR_9, "turned %s",
     VAR_11 ? "on" : "off");
}
