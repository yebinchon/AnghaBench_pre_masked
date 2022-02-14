
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


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

__attribute__((used)) static u64 FUNC_0(u64 VAR_15)
{
 u64 VAR_16 = 0;

 if (VAR_15 & VAR_2)
  VAR_16 |= VAR_10;
 if (VAR_15 & VAR_7)
  VAR_16 |= VAR_14;
 if (VAR_15 & VAR_1)
  VAR_16 |= VAR_9;
 if (VAR_15 & VAR_0)
  VAR_16 |= VAR_8;
 if (VAR_15 & VAR_6)
  VAR_16 |= VAR_11;
 if (VAR_15 & (VAR_5 << VAR_3))
  VAR_16 |= VAR_12;
 if (VAR_15 & (VAR_5 << VAR_4))
  VAR_16 |= VAR_13;

 return VAR_16;

}
