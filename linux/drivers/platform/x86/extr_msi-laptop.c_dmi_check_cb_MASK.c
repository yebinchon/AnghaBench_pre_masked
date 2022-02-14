
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_system_id {int driver_data; int ident; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct dmi_system_id *VAR_1)
{
 FUNC_0("Identified laptop model '%s'\n", VAR_1->ident);

 VAR_0 = VAR_1->driver_data;

 return 1;
}
