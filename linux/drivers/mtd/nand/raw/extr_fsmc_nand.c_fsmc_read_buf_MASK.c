
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fsmc_nand_data {int data_va; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct fsmc_nand_data *VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3;

 if (FUNC_0((uintptr_t)VAR_1, sizeof(u32)) &&
     FUNC_0(VAR_2, sizeof(u32))) {
  u32 *VAR_4 = (u32 *)VAR_1;

  VAR_2 = VAR_2 >> 2;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   VAR_4[VAR_3] = FUNC_2(VAR_0->data_va);
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   VAR_1[VAR_3] = FUNC_1(VAR_0->data_va);
 }
}
