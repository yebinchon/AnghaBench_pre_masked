
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ rx; scalar_t__ tx; } ;
struct rt2x00_dev {int led_mcu_reg; int led_qual; int led_assoc; int led_radio; int cap_flags; scalar_t__ freq_offset; TYPE_1__ default_ant; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ) ;
 int FUNC_8 (struct rt2x00_dev*,int ,scalar_t__,int ) ;
 int FUNC_9 (int *,int ,scalar_t__) ;
 int FUNC_10 (struct rt2x00_dev*,int ) ;
 int FUNC_11 (struct rt2x00_dev*,int *,int ) ;

__attribute__((used)) static int FUNC_12(struct rt2x00_dev *VAR_45)
{
 u32 VAR_46;
 u16 VAR_47;
 u16 VAR_48;




 VAR_48 = FUNC_1(VAR_45, VAR_4);




 VAR_47 = FUNC_3(VAR_48, VAR_7);
 VAR_46 = FUNC_10(VAR_45, VAR_28);
 FUNC_8(VAR_45, FUNC_4(VAR_46, VAR_29),
   VAR_47, FUNC_4(VAR_46, VAR_30));

 if (!FUNC_7(VAR_45, VAR_44) || (FUNC_5(VAR_45) == 0)) {
  FUNC_2(VAR_45, "Invalid RT chipset detected\n");
  return -VAR_23;
 }

 if (!FUNC_6(VAR_45, VAR_43) &&
     !FUNC_6(VAR_45, VAR_41) &&
     !FUNC_6(VAR_45, VAR_42) &&
     !FUNC_6(VAR_45, VAR_40)) {
  FUNC_2(VAR_45, "Invalid RF chipset detected\n");
  return -VAR_23;
 }




 VAR_45->default_ant.tx =
     FUNC_3(VAR_48, VAR_9);
 VAR_45->default_ant.rx =
     FUNC_3(VAR_48, VAR_8);




 if (FUNC_3(VAR_48, VAR_5))
  FUNC_0(VAR_2, &VAR_45->cap_flags);




 if (FUNC_3(VAR_48, VAR_6))
  FUNC_0(VAR_3, &VAR_45->cap_flags);




 VAR_48 = FUNC_1(VAR_45, VAR_10);
 VAR_45->freq_offset = FUNC_3(VAR_48, VAR_11);




 VAR_48 = FUNC_1(VAR_45, VAR_21);

 if (FUNC_3(VAR_48, VAR_22)) {
  FUNC_0(VAR_0, &VAR_45->cap_flags);
  FUNC_0(VAR_1, &VAR_45->cap_flags);
 }
 return 0;
}
