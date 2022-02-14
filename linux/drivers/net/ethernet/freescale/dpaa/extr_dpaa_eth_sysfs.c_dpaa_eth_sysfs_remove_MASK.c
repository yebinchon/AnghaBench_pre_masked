
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int *) ;
 int * VAR_0 ;

void FUNC_2(struct device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  FUNC_1(VAR_1, &VAR_0[VAR_2]);
}
