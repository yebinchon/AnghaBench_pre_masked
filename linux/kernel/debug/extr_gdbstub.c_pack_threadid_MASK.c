
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,unsigned char) ;

__attribute__((used)) static char *FUNC_1(char *VAR_1, unsigned char *VAR_2)
{
 unsigned char *VAR_3;
 int VAR_4 = 1;

 VAR_3 = VAR_2 + (VAR_0 / 2);
 while (VAR_2 < VAR_3) {
  if (!VAR_4 || *VAR_2 != 0) {
   VAR_1 = FUNC_0(VAR_1, *VAR_2);
   VAR_4 = 0;
  }
  VAR_2++;
 }

 if (VAR_4)
  VAR_1 = FUNC_0(VAR_1, 0);

 return VAR_1;
}
