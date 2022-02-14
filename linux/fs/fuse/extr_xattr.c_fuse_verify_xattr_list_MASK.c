
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (char*,size_t) ;

__attribute__((used)) static int FUNC_1(char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_2;

 while (VAR_2) {
  size_t VAR_4 = FUNC_0(VAR_1, VAR_2);

  if (!VAR_4 || VAR_4 == VAR_2)
   return -VAR_0;

  VAR_2 -= VAR_4 + 1;
  VAR_1 += VAR_4 + 1;
 }

 return VAR_3;
}
