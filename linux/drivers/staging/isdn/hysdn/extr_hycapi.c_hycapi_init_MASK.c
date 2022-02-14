
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hycapi_appl ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

int FUNC_1(void)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(&(VAR_1[VAR_2]), 0, sizeof(hycapi_appl));
 }
 return (0);
}
