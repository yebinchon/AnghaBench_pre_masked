
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (struct adapter*,int,int ) ;

bool FUNC_2(struct adapter *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 *VAR_6;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4 += 2)
  FUNC_1(VAR_3, VAR_6[VAR_4], (u8)VAR_6[VAR_4 + 1]);

 FUNC_1(VAR_3, VAR_1, VAR_0);
 return 1;
}
