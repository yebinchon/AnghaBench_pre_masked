
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct niu_link_config {scalar_t__ loopback_mode; } ;
struct niu {int port; int flags; int dev; struct niu_link_config link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
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
 scalar_t__ VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_0 (struct niu*,unsigned long,int*) ;
 int FUNC_1 (struct niu*,unsigned long,int*) ;
 int FUNC_2 (struct niu*) ;
 int FUNC_3 (struct niu*,unsigned long,int) ;
 int FUNC_4 (struct niu*,unsigned long,int) ;
 int FUNC_5 (int ,char*,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned long,int) ;

__attribute__((used)) static int FUNC_8(struct niu *VAR_54)
{
 struct niu_link_config *VAR_55 = &VAR_54->link_config;
 unsigned long VAR_56, VAR_57, VAR_58;
 u64 VAR_59, VAR_60, VAR_61, VAR_62, VAR_63;
 int VAR_64;

 switch (VAR_54->port) {
 case 0:
  VAR_56 = VAR_2;
  VAR_57 = VAR_3;
  break;
 case 1:
  VAR_56 = VAR_4;
  VAR_57 = VAR_5;
  break;

 default:
  return -VAR_1;
 }
 VAR_59 = (VAR_14 |
      VAR_15 |
      VAR_16 |
      VAR_17 |
      (0x5 << VAR_6) |
      (0x5 << VAR_7) |
      (0x5 << VAR_8) |
      (0x5 << VAR_9) |
      (0x1 << VAR_10) |
      (0x1 << VAR_11) |
      (0x1 << VAR_12) |
      (0x1 << VAR_13));
 VAR_60 = 0;

 if (VAR_55->loopback_mode == VAR_51) {
  VAR_60 |= ((VAR_22 <<
      VAR_18) |
     (VAR_22 <<
      VAR_19) |
     (VAR_22 <<
      VAR_20) |
     (VAR_22 <<
      VAR_21));
 }

 FUNC_7(VAR_56, VAR_59);
 FUNC_7(VAR_57, VAR_60);


 for (VAR_58 = 0; VAR_58 < 4; VAR_58++) {
  u32 VAR_65, VAR_66;

  VAR_64 = FUNC_1(VAR_54, VAR_58, &VAR_65);
  if (VAR_64)
   return VAR_64;
  VAR_64 = FUNC_0(VAR_54, VAR_58, &VAR_66);
  if (VAR_64)
   return VAR_64;

  VAR_65 &= ~(VAR_49);
  VAR_65 |= (VAR_48 |
         (2 << VAR_50));

  VAR_66 &= ~(VAR_27 |
      VAR_29 |
      VAR_24);
  VAR_66 |= (VAR_26 |
     (0xf << VAR_28) |
     (0xff << VAR_30) |
     (VAR_0 <<
      VAR_25));

  VAR_64 = FUNC_4(VAR_54, VAR_58, VAR_65);
  if (VAR_64)
   return VAR_64;
  VAR_64 = FUNC_3(VAR_54, VAR_58, VAR_66);
  if (VAR_64)
   return VAR_64;
 }

 VAR_64 = FUNC_2(VAR_54);
 if (VAR_64)
  return VAR_64;

 VAR_61 = FUNC_6(VAR_33);
 switch (VAR_54->port) {
 case 0:
  VAR_62 = VAR_34;
  VAR_63 = (VAR_36 |
         VAR_31 |
         VAR_46 |
         VAR_41 |
         VAR_40 |
         VAR_39 |
         VAR_38);
  break;

 case 1:
  VAR_62 = VAR_35;
  VAR_63 = (VAR_37 |
         VAR_32 |
         VAR_47 |
         VAR_45 |
         VAR_44 |
         VAR_43 |
         VAR_42);
  break;

 default:
  return -VAR_1;
 }

 if ((VAR_61 & VAR_62) != VAR_63) {
  if (VAR_54->flags & VAR_52) {
   VAR_54->flags &= ~VAR_53;
   return 0;
  }
  FUNC_5(VAR_54->dev, "Port %u signal bits [%08x] are not [%08x]\n",
      VAR_54->port, (int)(VAR_61 & VAR_62), (int)VAR_63);
  return -VAR_23;
 }
 if (VAR_54->flags & VAR_52)
  VAR_54->flags |= VAR_53;
 return 0;
}
