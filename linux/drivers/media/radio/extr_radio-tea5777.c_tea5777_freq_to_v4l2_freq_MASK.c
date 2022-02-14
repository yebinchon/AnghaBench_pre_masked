
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radio_tea5777 {int band; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct radio_tea5777 *VAR_4, u32 VAR_5)
{
 switch (VAR_4->band) {
 case 128:
  return (VAR_5 * VAR_2 + VAR_3) * 16;
 case 129:
  return (VAR_5 * VAR_0 + VAR_1) * 16;
 }
 return 0;
}
