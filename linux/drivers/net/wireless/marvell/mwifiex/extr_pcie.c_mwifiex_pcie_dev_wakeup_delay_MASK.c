
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_adapter *VAR_0)
{
 int VAR_1 = 0;

 while (FUNC_0(VAR_0)) {
  VAR_1++;
  FUNC_1(10, 20);

  if (VAR_1 == 5000)
   break;
 }

 return;
}
