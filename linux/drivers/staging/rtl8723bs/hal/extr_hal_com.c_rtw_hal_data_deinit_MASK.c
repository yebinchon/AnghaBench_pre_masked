
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {scalar_t__ hal_data_sz; int * HalData; } ;


 scalar_t__ FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct adapter *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  if (VAR_0->HalData) {
   FUNC_1(VAR_0);
   FUNC_2(VAR_0->HalData);
   VAR_0->HalData = ((void*)0);
   VAR_0->hal_data_sz = 0;
  }
 }
}
