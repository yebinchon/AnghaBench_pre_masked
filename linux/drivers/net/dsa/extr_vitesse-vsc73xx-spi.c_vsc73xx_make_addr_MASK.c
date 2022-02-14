
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u8 FUNC_0(u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 u8 VAR_7;

 VAR_7 =
     (VAR_5 & VAR_0) << VAR_1;
 VAR_7 |= (VAR_4 & 1) << VAR_2;
 VAR_7 |= VAR_6 & VAR_3;

 return VAR_7;
}
