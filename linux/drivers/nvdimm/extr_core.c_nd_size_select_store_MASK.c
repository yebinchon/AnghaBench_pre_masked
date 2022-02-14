
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ driver; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;

ssize_t FUNC_1(struct device *VAR_2, const char *VAR_3,
  unsigned long *VAR_4, const unsigned long *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8;

 if (VAR_2->driver)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3, 0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 for (VAR_8 = 0; VAR_5[VAR_8]; VAR_8++)
  if (VAR_6 == VAR_5[VAR_8])
   break;

 if (VAR_5[VAR_8]) {
  *VAR_4 = VAR_6;
  return 0;
 } else {
  return -VAR_1;
 }
}
