
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct _adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct _adapter*,int) ;
 int FUNC_2 (struct _adapter*,scalar_t__,int ) ;

u8 FUNC_3(struct _adapter *VAR_1, u32 VAR_2)
{
 int VAR_3 = 50;

 FUNC_2(VAR_1, VAR_0, VAR_2);
 FUNC_0(100);
 while ((FUNC_1(VAR_1, VAR_0 != 0)) &&
        (VAR_3 > 0)) {
  VAR_3--;
  FUNC_0(20);
 }
 if (VAR_3 == 0)
  return 0;
 return 1;
}
