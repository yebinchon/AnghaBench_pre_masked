
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct device *VAR_2)
{
 char *VAR_3;
 ssize_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2, ((void*)0), 0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = FUNC_1(VAR_4 + 1, VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_2(VAR_2, VAR_3, VAR_4);
 VAR_3[VAR_4] = '\0';
 VAR_5 = FUNC_3(VAR_3);
 FUNC_0(VAR_3);

 return VAR_5;
}
