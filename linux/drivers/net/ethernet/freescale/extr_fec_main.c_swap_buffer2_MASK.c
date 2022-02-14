
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned int *VAR_4 = VAR_1;
 unsigned int *VAR_5 = VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 4, VAR_4++, VAR_5++)
  *VAR_5 = FUNC_0(VAR_4);
}
