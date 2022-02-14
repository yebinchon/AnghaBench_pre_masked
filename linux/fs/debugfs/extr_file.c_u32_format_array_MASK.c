
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 size_t FUNC_0 (char*,size_t,char*,int ,char) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_0, size_t VAR_1,
          u32 *VAR_2, int VAR_3)
{
 size_t VAR_4 = 0;

 while (--VAR_3 >= 0) {
  size_t VAR_5;
  char VAR_6 = VAR_3 ? ' ' : '\n';

  VAR_5 = FUNC_0(VAR_0, VAR_1, "%u%c", *VAR_2++, VAR_6);
  VAR_4 += VAR_5;

  VAR_0 += VAR_5;
  VAR_1 -= VAR_5;
 }
 return VAR_4;
}
