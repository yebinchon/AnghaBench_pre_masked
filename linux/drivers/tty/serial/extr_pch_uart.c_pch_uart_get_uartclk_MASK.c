
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_system_id {scalar_t__ driver_data; } ;


 unsigned int VAR_0 ;
 struct dmi_system_id* FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
 const struct dmi_system_id *VAR_3;

 if (VAR_2)
  return VAR_2;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return (unsigned long)VAR_3->driver_data;

 return VAR_0;
}
