
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ica_rsa_modexpo {int inputdatalength; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

unsigned int FUNC_0(struct ica_rsa_modexpo *VAR_4, int *VAR_5)
{

 if (!VAR_4->inputdatalength)
  return -VAR_0;

 if (VAR_4->inputdatalength <= 128)
  *VAR_5 = VAR_1;
 else if (VAR_4->inputdatalength <= 256)
  *VAR_5 = VAR_2;
 else
  *VAR_5 = VAR_3;

 return 0;
}
