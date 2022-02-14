
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int,char*) ;

int FUNC_1(int VAR_1, char *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_4 = VAR_1 - (VAR_1 & ~0x7);
 if (VAR_4 == 0)
  return 0;

 VAR_3 = VAR_0[VAR_4];
 FUNC_0(VAR_3, VAR_2);

 return VAR_3;
}
