
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(u8 *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = (VAR_4 < VAR_0) ? VAR_1 : VAR_2;
 while (VAR_5 && !VAR_3[VAR_5 - 1])
  VAR_5--;
 return (VAR_5 == 0);
}
