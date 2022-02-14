
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct alx_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int const*) ;

__attribute__((used)) static void FUNC_2(struct alx_hw *VAR_1, const u8 *VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_1(VAR_0, VAR_2);
 VAR_6 = (VAR_4 >> 31) & 0x1;
 VAR_5 = (VAR_4 >> 26) & 0x1F;

 VAR_3[VAR_6] |= FUNC_0(VAR_5);
}
