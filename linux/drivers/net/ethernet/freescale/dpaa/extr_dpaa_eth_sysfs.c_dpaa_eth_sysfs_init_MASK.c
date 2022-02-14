
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,int *) ;
 int * VAR_0 ;

void FUNC_4(struct device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (FUNC_2(VAR_1, &VAR_0[VAR_2])) {
   FUNC_1(VAR_1, "Error creating sysfs file\n");
   while (VAR_2 > 0)
    FUNC_3(VAR_1, &VAR_0[--VAR_2]);
   return;
  }
}
