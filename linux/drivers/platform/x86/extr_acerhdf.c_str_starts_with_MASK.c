
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,unsigned long) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1)
{
 unsigned long VAR_2 = 0, VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_3 &&
   !FUNC_1(VAR_0, VAR_1, VAR_3))
  return 1;

 return 0;
}
