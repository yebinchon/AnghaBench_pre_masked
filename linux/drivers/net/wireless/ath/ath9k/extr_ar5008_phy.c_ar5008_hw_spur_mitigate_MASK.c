
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* eep_ops; } ;
struct ath9k_channel {int channel; } ;
struct TYPE_2__ {int (* get_spur_channel ) (struct ath_hw*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct ath9k_channel*) ;
 int FUNC_2 (struct ath_hw*,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 int FUNC_4 (int,int) ;
 int VAR_16 ;
 int FUNC_5 (struct ath_hw*,struct ath9k_channel*,int) ;
 int FUNC_6 (struct ath_hw*,int,int) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_17,
        struct ath9k_channel *VAR_18)
{
 int VAR_19 = VAR_1;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24, VAR_25;
 int VAR_26;

 int VAR_27;
 bool VAR_28 = FUNC_1(VAR_18);

 for (VAR_26 = 0; VAR_26 < VAR_0; VAR_26++) {
  VAR_27 = VAR_17->eep_ops->get_spur_channel(VAR_17, VAR_26, VAR_28);
  if (VAR_1 == VAR_27)
   break;
  VAR_27 = VAR_27 - (VAR_18->channel * 10);
  if ((VAR_27 > -95) && (VAR_27 < 95)) {
   VAR_19 = VAR_27;
   break;
  }
 }

 if (VAR_1 == VAR_19)
  return;

 VAR_20 = VAR_19 * 32;

 VAR_24 = FUNC_2(VAR_17, FUNC_0(0));
 VAR_25 = VAR_24 | (VAR_15 |
       VAR_14 |
       VAR_12 |
       VAR_13);

 FUNC_3(VAR_17, FUNC_0(0), VAR_25);

 VAR_25 = (VAR_5 |
        VAR_3 |
        VAR_6 |
        VAR_4 |
        FUNC_4(VAR_16, VAR_7));
 FUNC_3(VAR_17, VAR_2, VAR_25);

 VAR_22 = ((VAR_19 * 524288) / 100) &
  VAR_9;

 VAR_23 = FUNC_1(VAR_18) ? 440 : 400;
 VAR_21 = ((VAR_19 * 2048) / VAR_23) & 0x3ff;

 VAR_25 = (VAR_11 |
        FUNC_4(VAR_21, VAR_10) |
        FUNC_4(VAR_22, VAR_9));
 FUNC_3(VAR_17, VAR_8, VAR_25);

 FUNC_5(VAR_17, VAR_18, VAR_20);
}
