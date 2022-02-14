
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;


 int FUNC_0 (int ,char**,int) ;
 int FUNC_1 (char*) ;

char *FUNC_2(char *VAR_0, char *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_0(FUNC_1(VAR_0), &VAR_0, 10);
 if (*VAR_0 == ',')
  VAR_0++;
 *VAR_1 = (u_char)VAR_2;
 return VAR_0;
}
