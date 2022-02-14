
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int netdev_features_t ;
typedef int __le64 ;


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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static __le64 FUNC_1(netdev_features_t VAR_32)
{
 u64 VAR_33 = 0;

 if (VAR_32 & VAR_25)
  VAR_33 |= VAR_15;
 if (VAR_32 & VAR_24)
  VAR_33 |= VAR_14;
 if (VAR_32 & VAR_23)
  VAR_33 |= VAR_13;
 if (VAR_32 & VAR_27)
  VAR_33 |= VAR_1;
 if (VAR_32 & VAR_26)
  VAR_33 |= VAR_0;
 if (VAR_32 & VAR_28)
  VAR_33 |= VAR_12;
 if (VAR_32 & VAR_22)
  VAR_33 |= VAR_11;
 if (VAR_32 & VAR_29)
  VAR_33 |= VAR_2;
 if (VAR_32 & VAR_30)
  VAR_33 |= VAR_6;
 if (VAR_32 & VAR_31)
  VAR_33 |= VAR_3;
 if (VAR_32 & VAR_16)
  VAR_33 |= VAR_4;
 if (VAR_32 & VAR_17)
  VAR_33 |= VAR_5;
 if (VAR_32 & VAR_18)
  VAR_33 |= VAR_7;
 if (VAR_32 & VAR_19)
  VAR_33 |= VAR_8;
 if (VAR_32 & VAR_20)
  VAR_33 |= VAR_9;
 if (VAR_32 & VAR_21)
  VAR_33 |= VAR_10;

 return FUNC_0(VAR_33);
}
