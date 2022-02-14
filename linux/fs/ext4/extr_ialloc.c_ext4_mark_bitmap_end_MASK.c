
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int,int) ;

void FUNC_3(int VAR_0, int VAR_1, char *VAR_2)
{
 int VAR_3;

 if (VAR_0 >= VAR_1)
  return;

 FUNC_0("mark end bits +%d through +%d used\n", VAR_0, VAR_1);
 for (VAR_3 = VAR_0; VAR_3 < ((VAR_0 + 7) & ~7UL); VAR_3++)
  FUNC_1(VAR_3, VAR_2);
 if (VAR_3 < VAR_1)
  FUNC_2(VAR_2 + (VAR_3 >> 3), 0xff, (VAR_1 - VAR_3) >> 3);
}
