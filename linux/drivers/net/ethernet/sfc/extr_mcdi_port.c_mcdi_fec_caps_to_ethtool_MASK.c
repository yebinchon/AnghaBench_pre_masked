
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

__attribute__((used)) static u32 FUNC_0(u32 VAR_10, bool VAR_11)
{
 bool VAR_12 = VAR_10 & (1 << VAR_8),
      VAR_13 = VAR_10 & (1 << VAR_9),
      VAR_14 = VAR_11 ? VAR_10 & (1 << VAR_4)
       : VAR_10 & (1 << VAR_6),
      VAR_15 = VAR_11 ? VAR_10 & (1 << VAR_5)
    : VAR_10 & (1 << VAR_7);

 if (!VAR_14 && !VAR_12)
  return VAR_2;
 return (VAR_13 ? VAR_3 : 0) |
        (VAR_15 ? VAR_1 : 0) |
        (VAR_14 == VAR_15 && VAR_12 == VAR_13 ? 0 : VAR_0);
}
