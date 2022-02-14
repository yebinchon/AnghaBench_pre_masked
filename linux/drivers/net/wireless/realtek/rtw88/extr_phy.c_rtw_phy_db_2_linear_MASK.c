
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static u64 FUNC_0(u8 VAR_2)
{
 u8 VAR_3, VAR_4;
 u64 VAR_5;

 if (VAR_2 > 96)
  VAR_2 = 96;
 else if (VAR_2 < 1)
  return 1;


 VAR_3 = (VAR_2 - 1) >> 3;
 VAR_4 = (VAR_2 - 1) - (VAR_3 << 3);

 VAR_5 = VAR_1[VAR_3][VAR_4];
 VAR_5 = VAR_3 > 2 ? VAR_5 << VAR_0 : VAR_5;

 return VAR_5;
}
