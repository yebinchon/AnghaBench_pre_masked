
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;


 struct device_attribute VAR_0 ;
 struct device_attribute VAR_1 ;
 struct device_attribute VAR_2 ;
 struct device_attribute** VAR_3 ;

void FUNC_0(void)
{
 struct device_attribute **VAR_4;


 for (VAR_4 = &VAR_3[0]; *VAR_4; ++VAR_4)
  continue;

 *VAR_4 = &VAR_2;
 VAR_4++;
 *VAR_4 = &VAR_1;
 VAR_4++;
 *VAR_4 = &VAR_0;
}
