
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_1(size_t *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;

 VAR_4 = (size_t) FUNC_0(VAR_2, &VAR_3, 0);
 if (*VAR_3)
  return -VAR_0;

 *VAR_1 = VAR_4;
 return 0;
}
