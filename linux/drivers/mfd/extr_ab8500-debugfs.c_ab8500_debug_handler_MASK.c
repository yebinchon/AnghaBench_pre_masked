
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct kobject*,int *,char*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 char VAR_6[16];
 struct kobject *VAR_7 = (struct kobject *)VAR_5;
 unsigned int VAR_8 = VAR_4 - VAR_2;

 if (VAR_8 < VAR_3)
  VAR_1[VAR_8]++;




 FUNC_0(VAR_6, "%d", VAR_4);
 FUNC_1(VAR_7, ((void*)0), VAR_6);

 return VAR_0;
}
