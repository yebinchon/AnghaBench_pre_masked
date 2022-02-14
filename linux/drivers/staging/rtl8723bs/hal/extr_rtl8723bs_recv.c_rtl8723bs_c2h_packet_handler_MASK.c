
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int*,int ) ;
 int FUNC_2 (struct adapter*,int*,int ) ;
 int* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_0,
      u8 *VAR_1, u16 VAR_2)
{
 u8 *VAR_3 = ((void*)0);
 u8 VAR_4 = 0;

 if (VAR_2 == 0)
  return;



 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
  return;

 FUNC_1(VAR_3, VAR_1, VAR_2);

 VAR_4 = FUNC_2(VAR_0, VAR_3, VAR_2);

 if (!VAR_4)
  FUNC_0(VAR_3);



 return;
}
