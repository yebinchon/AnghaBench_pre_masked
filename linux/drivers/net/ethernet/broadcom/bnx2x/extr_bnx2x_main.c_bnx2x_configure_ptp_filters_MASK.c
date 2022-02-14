
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int tx_type; int rx_filter; int flags; int hwtstamp_ioctl_called; } ;


 int FUNC_0 (char*) ;
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
 int FUNC_1 (struct bnx2x*) ;
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
 int FUNC_2 (struct bnx2x*,int ,int) ;
 int VAR_21 ;
 int FUNC_3 (struct bnx2x*) ;

int FUNC_4(struct bnx2x *VAR_22)
{
 int VAR_23 = FUNC_1(VAR_22);
 u32 VAR_24, VAR_25;
 int VAR_26;

 if (!VAR_22->hwtstamp_ioctl_called)
  return 0;

 VAR_24 = VAR_23 ? VAR_19 :
  VAR_14;
 VAR_25 = VAR_23 ? VAR_20 :
  VAR_15;
 switch (VAR_22->tx_type) {
 case 129:
  VAR_22->flags |= VAR_21;
  FUNC_2(VAR_22, VAR_24, VAR_0);
  FUNC_2(VAR_22, VAR_25, VAR_1);
  break;
 case 128:
  FUNC_0("One-step timestamping is not supported\n");
  return -VAR_10;
 }

 VAR_24 = VAR_23 ? VAR_16 :
  VAR_11;
 VAR_25 = VAR_23 ? VAR_17 :
  VAR_12;
 switch (VAR_22->rx_filter) {
 case 144:
  break;
 case 145:
 case 130:
 case 143:
  VAR_22->rx_filter = 144;
  break;
 case 141:
 case 140:
 case 142:
  VAR_22->rx_filter = 141;

  FUNC_2(VAR_22, VAR_24, VAR_2);
  FUNC_2(VAR_22, VAR_25, VAR_3);
  break;
 case 133:
 case 132:
 case 134:
  VAR_22->rx_filter = 133;

  FUNC_2(VAR_22, VAR_24, VAR_6);
  FUNC_2(VAR_22, VAR_25, VAR_7);
  break;
 case 136:
 case 135:
 case 137:
  VAR_22->rx_filter = 136;

  FUNC_2(VAR_22, VAR_24, VAR_4);
  FUNC_2(VAR_22, VAR_25, VAR_5);

  break;
 case 138:
 case 131:
 case 139:
  VAR_22->rx_filter = 138;

  FUNC_2(VAR_22, VAR_24, VAR_8);
  FUNC_2(VAR_22, VAR_25, VAR_9);
  break;
 }


 VAR_26 = FUNC_3(VAR_22);
 if (VAR_26)
  return VAR_26;


 FUNC_2(VAR_22, VAR_23 ? VAR_18 :
        VAR_13, 0x1);

 return 0;
}
