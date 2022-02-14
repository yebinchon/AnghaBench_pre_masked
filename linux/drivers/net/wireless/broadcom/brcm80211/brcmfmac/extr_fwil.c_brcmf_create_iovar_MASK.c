
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static u32
FUNC_2(char *VAR_0, const char *VAR_1, u32 VAR_2,
     char *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_0) + 1;

 if ((VAR_5 + VAR_2) > VAR_4)
  return 0;

 FUNC_0(VAR_3, VAR_0, VAR_5);


 if (VAR_1 && VAR_2)
  FUNC_0(&VAR_3[VAR_5], VAR_1, VAR_2);

 return VAR_5 + VAR_2;
}
