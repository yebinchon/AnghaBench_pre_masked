
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s64 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char const*,char*,int*,int*,int*,int*) ;

int FUNC_3(const char *VAR_1, unsigned VAR_2, s64 *VAR_3)
{
 s64 VAR_4, VAR_5 = 0;
 int VAR_6 = 0, VAR_7 = 0, VAR_8;

 if (!FUNC_2(VAR_1, "%lld.%n%lld%n", &VAR_4, &VAR_6, &VAR_5, &VAR_7))
  return -VAR_0;
 if (VAR_5 < 0)
  return -VAR_0;

 VAR_8 = VAR_7 > VAR_6 ? VAR_7 - VAR_6 : 0;
 if (VAR_8 < VAR_2)
  VAR_5 *= FUNC_1(VAR_2 - VAR_8);
 else
  VAR_5 = FUNC_0(VAR_5, FUNC_1(VAR_8 - VAR_2));

 *VAR_3 = VAR_4 * FUNC_1(VAR_2) + VAR_5;
 return 0;
}
