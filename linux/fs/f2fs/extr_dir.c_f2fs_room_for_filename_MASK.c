
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*,int,int) ;
 int FUNC_1 (void const*,int,int) ;

int FUNC_2(const void *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4, VAR_5;
next:
 VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
 if (VAR_4 >= VAR_2)
  return VAR_2;

 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_4);
 if (VAR_5 - VAR_4 >= VAR_1)
  return VAR_4;

 VAR_3 = VAR_5 + 1;

 if (VAR_5 + 1 >= VAR_2)
  return VAR_2;
 goto next;
}
