
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

int FUNC_1(char *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return -VAR_0;
 if (VAR_4 < VAR_3)
  VAR_2[VAR_4] = '\0';
 return VAR_4;
}
