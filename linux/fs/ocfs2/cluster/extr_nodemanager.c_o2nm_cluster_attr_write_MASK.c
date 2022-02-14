
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (char*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_1(const char *VAR_2, ssize_t VAR_3,
                                       unsigned int *VAR_4)
{
 unsigned long VAR_5;
 char *VAR_6 = (char *)VAR_2;

 VAR_5 = FUNC_0(VAR_6, &VAR_6, 0);
 if (!VAR_6 || (*VAR_6 && (*VAR_6 != '\n')))
  return -VAR_0;

 if (VAR_5 == 0)
  return -VAR_0;
 if (VAR_5 >= (u32)-1)
  return -VAR_1;

 *VAR_4 = VAR_5;

 return VAR_3;
}
