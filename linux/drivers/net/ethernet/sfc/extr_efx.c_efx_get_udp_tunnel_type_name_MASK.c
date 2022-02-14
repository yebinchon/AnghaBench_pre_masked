
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;


 size_t FUNC_0 (char**) ;
 char** VAR_0 ;
 int FUNC_1 (char*,size_t,char*,...) ;

void FUNC_2(u16 VAR_1, char *VAR_2, size_t VAR_3)
{
 if (VAR_1 < FUNC_0(VAR_0) &&
     VAR_0[VAR_1] != ((void*)0))
  FUNC_1(VAR_2, VAR_3, "%s", VAR_0[VAR_1]);
 else
  FUNC_1(VAR_2, VAR_3, "type %d", VAR_1);
}
