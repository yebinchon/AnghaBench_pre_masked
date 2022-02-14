
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u32 FUNC_0(u16 VAR_7, u16 VAR_8, int VAR_9)
{
 u32 VAR_10;

 VAR_10 = (VAR_7 << VAR_6) &
  VAR_5;
 VAR_10 |= (VAR_8 << VAR_1) &
  VAR_0;

 if (VAR_9)
  VAR_10 |= VAR_3;
 else
  VAR_10 |= VAR_4;
 VAR_10 |= VAR_2;

 return VAR_10;
}
