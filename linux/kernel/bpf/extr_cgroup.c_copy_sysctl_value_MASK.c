
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,char,size_t) ;
 int FUNC_2 (size_t,size_t) ;

__attribute__((used)) static int FUNC_3(char *VAR_2, size_t VAR_3, char *VAR_4,
        size_t VAR_5)
{
 if (!VAR_2)
  return -VAR_1;

 if (!VAR_3)
  return -VAR_0;

 if (!VAR_4 || !VAR_5) {
  FUNC_1(VAR_2, 0, VAR_3);
  return -VAR_1;
 }

 FUNC_0(VAR_2, VAR_4, FUNC_2(VAR_3, VAR_5));

 if (VAR_3 > VAR_5) {
  FUNC_1(VAR_2 + VAR_5, '\0', VAR_3 - VAR_5);
  return VAR_5;
 }

 VAR_2[VAR_3 - 1] = '\0';

 return -VAR_0;
}
