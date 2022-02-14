
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (int*,int*,int) ;

void FUNC_2(struct adapter *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 VAR_4 = VAR_1 << 3;


 for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
  VAR_5 = FUNC_0(VAR_0, VAR_4+VAR_3);

  if (VAR_3 > 1)
   FUNC_1(VAR_2+(VAR_3-2)*4, &VAR_5, 4);
 }

}
