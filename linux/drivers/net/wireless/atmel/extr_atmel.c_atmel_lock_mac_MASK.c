
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 scalar_t__ FUNC_1 (struct atmel_private*,int ) ;
 int FUNC_2 (struct atmel_private*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct atmel_private *VAR_2)
{
 int VAR_3, VAR_4 = 20;
 retry:
 for (VAR_3 = 5000; VAR_3; VAR_3--) {
  if (!FUNC_1(VAR_2, FUNC_0(VAR_2, VAR_0)))
   break;
  FUNC_3(20);
 }

 if (!VAR_3)
  return 0;

 FUNC_2(VAR_2, FUNC_0(VAR_2, VAR_1), 1);
 if (FUNC_1(VAR_2, FUNC_0(VAR_2, VAR_0))) {
  FUNC_2(VAR_2, FUNC_0(VAR_2, VAR_1), 0);
  if (!VAR_4--)
   return 0;
  goto retry;
 }

 return 1;
}
