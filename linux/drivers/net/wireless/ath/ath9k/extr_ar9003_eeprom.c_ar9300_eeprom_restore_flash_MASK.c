
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct ath_hw *VAR_1, u8 *VAR_2,
           int VAR_3)
{
 u16 *VAR_4 = (u16 *) VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3 / 2; VAR_5++, VAR_4++)
  if (!FUNC_0(VAR_1, VAR_5, VAR_4))
   return -VAR_0;

 return 0;
}
