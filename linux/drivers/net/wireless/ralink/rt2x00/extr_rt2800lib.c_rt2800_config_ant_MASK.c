
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int rx; } ;
struct rt2x00_dev {int curr_band; TYPE_1__ default_ant; } ;
struct antenna_setup {int tx_chain_num; int rx_chain_num; } ;


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
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*,int ) ;
 int FUNC_8 (int*,int ,int) ;

void FUNC_9(struct rt2x00_dev *VAR_14, struct antenna_setup *VAR_15)
{
 u8 VAR_16;
 u8 VAR_17;
 u16 VAR_18;

 VAR_16 = FUNC_0(VAR_14, 1);
 VAR_17 = FUNC_0(VAR_14, 3);

 if (FUNC_7(VAR_14, VAR_11) &&
     FUNC_6(VAR_14))
  FUNC_2(VAR_14);




 switch (VAR_15->tx_chain_num) {
 case 1:
  FUNC_8(&VAR_16, VAR_1, 0);
  break;
 case 2:
  if (FUNC_7(VAR_14, VAR_11) &&
      FUNC_6(VAR_14))
   FUNC_8(&VAR_16, VAR_1, 1);
  else
   FUNC_8(&VAR_16, VAR_1, 2);
  break;
 case 3:
  FUNC_8(&VAR_16, VAR_1, 2);
  break;
 }




 switch (VAR_15->rx_chain_num) {
 case 1:
  if (FUNC_7(VAR_14, VAR_7) ||
      FUNC_7(VAR_14, VAR_8) ||
      FUNC_7(VAR_14, VAR_9) ||
      FUNC_7(VAR_14, VAR_10)) {
   VAR_18 = FUNC_3(VAR_14,
          VAR_4);
   if (FUNC_5(VAR_18,
      VAR_5))
    FUNC_4(VAR_14,
      VAR_14->default_ant.rx);
  }
  FUNC_8(&VAR_17, VAR_3, 0);
  break;
 case 2:
  if (FUNC_7(VAR_14, VAR_11) &&
      FUNC_6(VAR_14)) {
   FUNC_8(&VAR_17, VAR_2, 1);
   FUNC_8(&VAR_17, VAR_3,
    VAR_14->curr_band == VAR_6);
   FUNC_4(VAR_14, VAR_0);
  } else {
   FUNC_8(&VAR_17, VAR_3, 1);
  }
  break;
 case 3:
  FUNC_8(&VAR_17, VAR_3, 2);
  break;
 }

 FUNC_1(VAR_14, 3, VAR_17);
 FUNC_1(VAR_14, 1, VAR_16);

 if (FUNC_7(VAR_14, VAR_12) ||
     FUNC_7(VAR_14, VAR_13)) {
  if (VAR_15->rx_chain_num == 1)
   FUNC_1(VAR_14, 86, 0x00);
  else
   FUNC_1(VAR_14, 86, 0x46);
 }
}
