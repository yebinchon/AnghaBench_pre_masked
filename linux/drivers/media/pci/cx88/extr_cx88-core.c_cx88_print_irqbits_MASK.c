
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(const char *VAR_0, const char *VAR_1[],
   int VAR_2, u32 VAR_3, u32 VAR_4)
{
 unsigned int VAR_5;

 FUNC_0("%s [0x%x]", VAR_0, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (!(VAR_3 & (1 << VAR_5)))
   continue;
  if (VAR_1[VAR_5])
   FUNC_1(" %s", VAR_1[VAR_5]);
  else
   FUNC_1(" %d", VAR_5);
  if (!(VAR_4 & (1 << VAR_5)))
   continue;
  FUNC_1("*");
 }
 FUNC_1("\n");
}
