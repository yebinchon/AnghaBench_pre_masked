
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void** VAR_1 ;
 void** VAR_2 ;
 char** VAR_3 ;
 void** VAR_4 ;
 void* FUNC_0 (char*,int *,int ) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int FUNC_2(char *VAR_5)
{
 char *VAR_6;
 int VAR_7 = 0;




 while (VAR_7<VAR_0 && VAR_5 && *VAR_5) {
  if (*VAR_5>='0' && *VAR_5<='9') {
   if ((VAR_6 = FUNC_1(VAR_5, 'x')) || (VAR_6 = FUNC_1(VAR_5, '*'))) {
    VAR_1[VAR_7] = FUNC_0(VAR_5, ((void*)0), 0);
    VAR_4[VAR_7] = FUNC_0(VAR_6+1, ((void*)0), 0);
   } else {
    VAR_2[VAR_7] = FUNC_0(VAR_5, ((void*)0), 0);
   }
  } else {
   VAR_3[VAR_7] = VAR_5;
  }

  if ((VAR_6 = FUNC_1(VAR_5, ',')))
   *VAR_6++ = 0;
  VAR_5 = VAR_6;

  VAR_7++;
 }

 return 1;
}
