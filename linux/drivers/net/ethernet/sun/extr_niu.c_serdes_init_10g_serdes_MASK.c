
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct niu_link_config {scalar_t__ loopback_mode; } ;
struct niu {int port; int dev; int mac_xcvr; int flags; struct niu_link_config link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
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
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 scalar_t__ VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_0 (struct niu*,unsigned long,int*) ;
 int FUNC_1 (struct niu*,unsigned long,int*) ;
 int FUNC_2 (struct niu*) ;
 int FUNC_3 (struct niu*,unsigned long,int) ;
 int FUNC_4 (struct niu*,unsigned long,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned long,int) ;
 int FUNC_8 (struct niu*) ;

__attribute__((used)) static int FUNC_9(struct niu *VAR_57)
{
 struct niu_link_config *VAR_58 = &VAR_57->link_config;
 unsigned long VAR_59, VAR_60, VAR_61, VAR_62;
 u64 VAR_63, VAR_64, VAR_65, VAR_66, VAR_67;

 switch (VAR_57->port) {
 case 0:
  VAR_59 = VAR_2;
  VAR_60 = VAR_4;
  VAR_61 = VAR_3;
  break;
 case 1:
  VAR_59 = VAR_5;
  VAR_60 = VAR_7;
  VAR_61 = VAR_6;
  break;

 default:
  return -VAR_1;
 }
 VAR_63 = (VAR_16 |
      VAR_17 |
      VAR_18 |
      VAR_19 |
      (0x5 << VAR_8) |
      (0x5 << VAR_9) |
      (0x5 << VAR_10) |
      (0x5 << VAR_11) |
      (0x1 << VAR_12) |
      (0x1 << VAR_13) |
      (0x1 << VAR_14) |
      (0x1 << VAR_15));
 VAR_64 = 0;

 if (VAR_58->loopback_mode == VAR_54) {
  VAR_64 |= ((VAR_25 <<
      VAR_21) |
     (VAR_25 <<
      VAR_22) |
     (VAR_25 <<
      VAR_23) |
     (VAR_25 <<
      VAR_24));
 }

 FUNC_2(VAR_57);
 FUNC_7(VAR_61, VAR_20);
 FUNC_7(VAR_59, VAR_63);
 FUNC_7(VAR_60, VAR_64);


 for (VAR_62 = 0; VAR_62 < 4; VAR_62++) {
  u32 VAR_68, VAR_69;
  int VAR_70;

  VAR_70 = FUNC_1(VAR_57, VAR_62, &VAR_68);
  if (VAR_70)
   return VAR_70;
  VAR_70 = FUNC_0(VAR_57, VAR_62, &VAR_69);
  if (VAR_70)
   return VAR_70;

  VAR_68 &= ~(VAR_52);
  VAR_68 |= (VAR_51 |
         (2 << VAR_53));

  VAR_69 &= ~(VAR_30 |
      VAR_32 |
      VAR_27);
  VAR_69 |= (VAR_29 |
     (0xf << VAR_31) |
     (0xff << VAR_33) |
     (VAR_0 <<
      VAR_28));

  VAR_70 = FUNC_4(VAR_57, VAR_62, VAR_68);
  if (VAR_70)
   return VAR_70;
  VAR_70 = FUNC_3(VAR_57, VAR_62, VAR_69);
  if (VAR_70)
   return VAR_70;
 }


 VAR_65 = FUNC_6(VAR_36);
 switch (VAR_57->port) {
 case 0:
  VAR_66 = VAR_37;
  VAR_67 = (VAR_39 |
         VAR_34 |
         VAR_49 |
         VAR_44 |
         VAR_43 |
         VAR_42 |
         VAR_41);
  break;

 case 1:
  VAR_66 = VAR_38;
  VAR_67 = (VAR_40 |
         VAR_35 |
         VAR_50 |
         VAR_48 |
         VAR_47 |
         VAR_46 |
         VAR_45);
  break;

 default:
  return -VAR_1;
 }

 if ((VAR_65 & VAR_66) != VAR_67) {
  int VAR_71;
  VAR_71 = FUNC_8(VAR_57);
  if (!VAR_71) {
   VAR_57->flags &= ~VAR_56;
   VAR_57->mac_xcvr = VAR_55;
  } else {
   FUNC_5(VAR_57->dev, "Port %u 10G/1G SERDES Link Failed\n",
       VAR_57->port);
   return -VAR_26;
  }
 }

 return 0;
}
