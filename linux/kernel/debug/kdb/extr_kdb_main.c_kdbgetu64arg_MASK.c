
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (char const*,char**,int) ;

int FUNC_1(const char *VAR_1, u64 *VAR_2)
{
 char *VAR_3;
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3, 0);

 if (VAR_3 == VAR_1) {

  VAR_4 = FUNC_0(VAR_1, &VAR_3, 16);
  if (VAR_3 == VAR_1)
   return VAR_0;
 }

 *VAR_2 = VAR_4;

 return 0;
}
