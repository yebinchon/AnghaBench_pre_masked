
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ams_delta_nand {scalar_t__ data_in; } ;


 int FUNC_0 (struct ams_delta_nand*,int const) ;
 int FUNC_1 (struct ams_delta_nand*,int const) ;

__attribute__((used)) static void FUNC_2(struct ams_delta_nand *VAR_0, const u8 *VAR_1,
    int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 > 0 && VAR_0->data_in)
  FUNC_0(VAR_0, VAR_1[VAR_3++]);

 while (VAR_3 < VAR_2)
  FUNC_1(VAR_0, VAR_1[VAR_3++]);
}
