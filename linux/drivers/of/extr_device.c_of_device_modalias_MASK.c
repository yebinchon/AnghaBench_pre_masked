
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;

ssize_t FUNC_1(struct device *VAR_1, char *VAR_2, ssize_t VAR_3)
{
 ssize_t VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3 - 2);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4 > VAR_3 - 2)
  return -VAR_0;

 VAR_2[VAR_4++] = '\n';
 VAR_2[VAR_4] = 0;
 return VAR_4;
}
