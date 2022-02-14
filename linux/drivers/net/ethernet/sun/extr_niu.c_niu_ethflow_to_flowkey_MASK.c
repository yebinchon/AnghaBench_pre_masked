
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

__attribute__((used)) static int FUNC_0(u64 VAR_15, u64 *VAR_16)
{
 u64 VAR_17 = 0;

 if (VAR_15 & VAR_10)
  VAR_17 |= VAR_2;
 if (VAR_15 & VAR_14)
  VAR_17 |= VAR_7;
 if (VAR_15 & VAR_9)
  VAR_17 |= VAR_1;
 if (VAR_15 & VAR_8)
  VAR_17 |= VAR_0;
 if (VAR_15 & VAR_11)
  VAR_17 |= VAR_6;
 if (VAR_15 & VAR_12)
  VAR_17 |= (VAR_5 << VAR_3);
 if (VAR_15 & VAR_13)
  VAR_17 |= (VAR_5 << VAR_4);

 *VAR_16 = VAR_17;

 return 1;

}
