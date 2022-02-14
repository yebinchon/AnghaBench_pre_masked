
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct enetc_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct enetc_hw*,int ,int ) ;

void FUNC_2(struct enetc_hw *VAR_1, const u8 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0 / 4; VAR_3++)
  FUNC_1(VAR_1, FUNC_0(VAR_3), ((u32 *)VAR_2)[VAR_3]);
}
