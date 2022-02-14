
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ tx; scalar_t__ rx; } ;
struct rt2x00_dev {void* rssi_offset; int cap_flags; int led_qual; int led_radio; TYPE_1__ default_ant; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_24 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*,int *,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,char*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct rt2x00_dev *VAR_25)
{
 u16 VAR_26;
 u16 VAR_27;
 u16 VAR_28;




 VAR_28 = FUNC_3(VAR_25, VAR_3);




 VAR_27 = FUNC_5(VAR_28, VAR_6);
 VAR_26 = FUNC_2(VAR_25, VAR_17);
 FUNC_7(VAR_25, VAR_24, VAR_27, VAR_26);

 if (((VAR_26 & 0xfff0) != 0) || ((VAR_26 & 0x0000000f) == 0)) {
  FUNC_4(VAR_25, "Invalid RT chipset detected\n");
  return -VAR_11;
 }

 if (!FUNC_6(VAR_25, VAR_18) &&
     !FUNC_6(VAR_25, VAR_19) &&
     !FUNC_6(VAR_25, VAR_20) &&
     !FUNC_6(VAR_25, VAR_21) &&
     !FUNC_6(VAR_25, VAR_22) &&
     !FUNC_6(VAR_25, VAR_23)) {
  FUNC_4(VAR_25, "Invalid RF chipset detected\n");
  return -VAR_11;
 }




 VAR_25->default_ant.tx =
     FUNC_5(VAR_28, VAR_8);
 VAR_25->default_ant.rx =
     FUNC_5(VAR_28, VAR_7);







 if (VAR_25->default_ant.tx == VAR_1)
  VAR_25->default_ant.tx = VAR_0;
 if (VAR_25->default_ant.rx == VAR_1)
  VAR_25->default_ant.rx = VAR_0;
 if (FUNC_5(VAR_28, VAR_4))
  FUNC_0(VAR_2, &VAR_25->cap_flags);




 VAR_28 = FUNC_3(VAR_25, VAR_9);
 VAR_25->rssi_offset =
     FUNC_5(VAR_28, VAR_10);

 return 0;
}
