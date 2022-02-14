
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (struct ath_hw*,int,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct ath_hw *VAR_0, int VAR_1,
        u8 *VAR_2)
{
 u16 VAR_3;

 if (FUNC_1(!FUNC_0(VAR_0, VAR_1 / 2, &VAR_3)))
  return 0;

 VAR_2[0] = VAR_3 >> 8;
 VAR_2[1] = VAR_3 & 0xff;

 return 1;
}
