
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (VAR_2 == VAR_1[VAR_3])
   return VAR_3;
 }

 return -VAR_0;
}
