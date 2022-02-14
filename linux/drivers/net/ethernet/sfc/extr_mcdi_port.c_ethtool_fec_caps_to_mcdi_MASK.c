
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


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

__attribute__((used)) static u32 FUNC_0(u32 VAR_10)
{
 u32 VAR_11 = 0;

 if (VAR_10 & VAR_2)
  return 0;

 if (VAR_10 & VAR_0)
  VAR_11 |= (1 << VAR_6) |
         (1 << VAR_4) |
         (1 << VAR_8);
 if (VAR_10 & VAR_3)
  VAR_11 |= (1 << VAR_8) |
         (1 << VAR_9);
 if (VAR_10 & VAR_1)
  VAR_11 |= (1 << VAR_6) |
         (1 << VAR_4) |
         (1 << VAR_7) |
         (1 << VAR_5);
 return VAR_11;
}
