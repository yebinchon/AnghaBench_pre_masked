
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct niu_link_config {scalar_t__ loopback_mode; } ;
struct niu {int port; int dev; struct niu_link_config link_config; } ;


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
 unsigned long VAR_25 ;
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
 unsigned long VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 scalar_t__ VAR_49 ;
 int FUNC_0 (struct niu*,unsigned long,int*) ;
 int FUNC_1 (struct niu*,unsigned long,int*) ;
 int FUNC_2 (struct niu*,unsigned long,int) ;
 int FUNC_3 (struct niu*,unsigned long,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int,int,int) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long,int) ;

__attribute__((used)) static int FUNC_8(struct niu *VAR_50)
{
 struct niu_link_config *VAR_51 = &VAR_50->link_config;
 unsigned long VAR_52, VAR_53, VAR_54, VAR_55;
 u64 VAR_56, VAR_57, VAR_58, VAR_59, VAR_60;
 int VAR_61;
 u64 VAR_62, VAR_63;

 VAR_60 = VAR_21 | VAR_22 |
  VAR_23 | VAR_24 |
  VAR_20;
 switch (VAR_50->port) {
 case 0:
  VAR_62 = VAR_26;
  VAR_52 = VAR_2;
  VAR_53 = VAR_4;
  VAR_54 = VAR_3;
  break;
 case 1:
  VAR_62 = VAR_27;
  VAR_52 = VAR_5;
  VAR_53 = VAR_7;
  VAR_54 = VAR_6;
  break;

 default:
  return -VAR_1;
 }
 VAR_56 = (VAR_16 |
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
 VAR_57 = 0;

 if (VAR_51->loopback_mode == VAR_49) {
  VAR_57 |= ((VAR_32 <<
      VAR_28) |
     (VAR_32 <<
      VAR_29) |
     (VAR_32 <<
      VAR_30) |
     (VAR_32 <<
      VAR_31));
 }

 FUNC_7(VAR_25, VAR_62);
 FUNC_4(20);
 VAR_63 = FUNC_6(VAR_25);
 VAR_63 &= ~VAR_62;
 FUNC_7(VAR_54, VAR_60);
 FUNC_7(VAR_52, VAR_56);
 FUNC_7(VAR_53, VAR_57);
 FUNC_7(VAR_25, VAR_63);
 FUNC_4(2000);


 for (VAR_55 = 0; VAR_55 < 4; VAR_55++) {
  u32 VAR_64, VAR_65;

  VAR_61 = FUNC_1(VAR_50, VAR_55, &VAR_64);
  if (VAR_61)
   return VAR_61;
  VAR_61 = FUNC_0(VAR_50, VAR_55, &VAR_65);
  if (VAR_61)
   return VAR_61;

  VAR_64 &= ~(VAR_47);
  VAR_64 |= (VAR_46 |
         (2 << VAR_48));

  VAR_65 &= ~(VAR_37 |
      VAR_39 |
      VAR_34);
  VAR_65 |= (VAR_36 |
     (0xf << VAR_38) |
     (0xff << VAR_40) |
     (VAR_0 <<
      VAR_35));

  VAR_61 = FUNC_3(VAR_50, VAR_55, VAR_64);
  if (VAR_61)
   return VAR_61;
  VAR_61 = FUNC_2(VAR_50, VAR_55, VAR_65);
  if (VAR_61)
   return VAR_61;
 }


 VAR_58 = FUNC_6(VAR_43);
 switch (VAR_50->port) {
 case 0:
  VAR_60 = (VAR_44 | VAR_41);
  VAR_59 = VAR_60;
  break;

 case 1:
  VAR_60 = (VAR_45 | VAR_42);
  VAR_59 = VAR_60;
  break;

 default:
  return -VAR_1;
 }

 if ((VAR_58 & VAR_59) != VAR_60) {
  FUNC_5(VAR_50->dev, "Port %u signal bits [%08x] are not [%08x]\n",
      VAR_50->port, (int)(VAR_58 & VAR_59), (int)VAR_60);
  return -VAR_33;
 }

 return 0;
}
