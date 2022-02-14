
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_system_id {int ident; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(const struct dmi_system_id *VAR_0)
{
 FUNC_0("Blacklisted intel_ips for %s\n", VAR_0->ident);
 return 1;
}
