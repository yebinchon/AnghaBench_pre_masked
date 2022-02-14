
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,unsigned int) ;
 unsigned int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0,unsigned int VAR_1,
      const char *VAR_2)
{
 unsigned int VAR_3;
 if (!VAR_2) return 0;
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 != VAR_1) return 0;
 return !FUNC_0(VAR_0,VAR_2,VAR_3);
}
