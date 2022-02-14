
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, int *VAR_1)
{
 char *VAR_2 = VAR_0;

 while ((VAR_2 = FUNC_0(VAR_2, '%')) != ((void*)0)) {
  if (VAR_2[1] == 'k' || VAR_2[1] == 'K' || VAR_2[1] == 'h' || VAR_2[1] == 't' ||
      VAR_2[1] == 'z' || VAR_2[1] == 'b' || VAR_2[1] == 'y' || VAR_2[1] == 'a') {
   *VAR_1 = VAR_2[1];
   break;
  }
  VAR_2++;
 }
 return VAR_2;
}
