
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct atl2_hw {int dummy; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static u32 FUNC_1(struct atl2_hw *VAR_0, u8 *VAR_1)
{
 u32 VAR_2, VAR_3;
 int VAR_4;

 VAR_3 = 0;
 VAR_2 = FUNC_0(6, VAR_1);

 for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
  VAR_3 |= (((VAR_2 >> VAR_4) & 1) << (31 - VAR_4));

 return VAR_3;
}
