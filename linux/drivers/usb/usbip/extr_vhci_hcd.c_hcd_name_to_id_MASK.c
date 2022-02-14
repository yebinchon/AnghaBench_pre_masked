
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,long*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
 char *VAR_1;
 long VAR_2;
 int VAR_3;

 VAR_1 = FUNC_1(VAR_0, '.');
 if (VAR_1 == ((void*)0))
  return 0;

 VAR_3 = FUNC_0(VAR_1+1, 10, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return VAR_2;
}
