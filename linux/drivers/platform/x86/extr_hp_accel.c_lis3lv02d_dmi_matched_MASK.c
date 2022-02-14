
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union axis_conversion {int dummy; } axis_conversion ;
struct dmi_system_id {int ident; scalar_t__ driver_data; } ;
struct TYPE_2__ {union axis_conversion ac; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(const struct dmi_system_id *VAR_1)
{
 VAR_0.ac = *((union axis_conversion *)VAR_1->driver_data);
 FUNC_0("hardware type %s found\n", VAR_1->ident);

 return 1;
}
