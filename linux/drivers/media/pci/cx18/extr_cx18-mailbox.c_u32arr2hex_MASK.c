
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static char *FUNC_1(u32 VAR_0[], int VAR_1, char *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_2; VAR_4 < VAR_1; VAR_4++, VAR_3 += 11) {

  FUNC_0(VAR_3, 12, " %#010x", VAR_0[VAR_4]);
 }
 *VAR_3 = '\0';
 return VAR_2;
}
