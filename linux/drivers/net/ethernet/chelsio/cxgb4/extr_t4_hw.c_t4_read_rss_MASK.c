
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*,int,int *) ;
 int FUNC_3 (struct adapter*) ;

int FUNC_4(struct adapter *VAR_0, u16 *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_3(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_4 / 2; ++VAR_2) {
  VAR_3 = FUNC_2(VAR_0, VAR_2, &VAR_5);
  if (VAR_3)
   return VAR_3;
  *VAR_1++ = FUNC_0(VAR_5);
  *VAR_1++ = FUNC_1(VAR_5);
 }
 return 0;
}
