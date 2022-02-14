
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long*,int,int) ;
 scalar_t__ FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_2(unsigned long *VAR_0, int VAR_1,
        char *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = -1;

 while ((VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_5 + 1)) < VAR_1)
  VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_3 - VAR_4, "%d ", VAR_5);

 return VAR_4;
}
