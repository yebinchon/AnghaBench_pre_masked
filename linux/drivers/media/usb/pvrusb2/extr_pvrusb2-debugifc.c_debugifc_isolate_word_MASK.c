
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const*,unsigned int) ;
 unsigned int FUNC_1 (char const*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(const char *VAR_0,unsigned int VAR_1,
       const char **VAR_2,
       unsigned int *VAR_3)
{
 const char *VAR_4;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6;
 unsigned int VAR_7;

 VAR_4 = ((void*)0);
 VAR_6 = 0;
 VAR_7 = FUNC_1(VAR_0,VAR_1);
 VAR_5 += VAR_7; VAR_1 -= VAR_7; VAR_0 += VAR_7;
 if (!VAR_1) goto done;

 VAR_7 = FUNC_0(VAR_0,VAR_1);
 if (!VAR_7) goto done;
 VAR_4 = VAR_0;
 VAR_6 = VAR_7;
 VAR_5 += VAR_7; VAR_1 -= VAR_7; VAR_0 += VAR_7;

 done:
 *VAR_2 = VAR_4;
 *VAR_3 = VAR_6;
 return VAR_5;
}
