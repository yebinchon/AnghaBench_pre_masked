
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(u8 *VAR_3)
{
 u32 VAR_4;
 u8 VAR_5;

 VAR_4 = *(u32 *)VAR_3;
 VAR_5 = (u8)((VAR_4 & VAR_0) >> VAR_1);

 return (VAR_5 == VAR_2);
}
