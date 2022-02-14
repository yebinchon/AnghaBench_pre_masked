
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,unsigned long*) ;
 char* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(substring_t VAR_1[], unsigned long *VAR_2)
{
 int VAR_3;
 char *VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 VAR_3 = FUNC_1(VAR_4, 10, VAR_2);
 FUNC_0(VAR_4);

 return VAR_3;
}
