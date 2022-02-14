
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0)
{
 unsigned char VAR_1[] = "EXECOMBAT", *VAR_2;

 for (VAR_2 = VAR_1; *VAR_2; VAR_2 += 3)
  if (!FUNC_0(VAR_0, VAR_2, 3))
   return 1;
 return 0;
}
