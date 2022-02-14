
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;


 int FUNC_0 (char**) ;
 char** VAR_0 ;
 int FUNC_1 (char*,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_2(enum pci_bus_speed VAR_1, char *VAR_2)
{
 const char *VAR_3;

 if (VAR_1 < FUNC_0(VAR_0))
  VAR_3 = VAR_0[VAR_1];
 else
  VAR_3 = "Unknown";

 return FUNC_1(VAR_2, "%s\n", VAR_3);
}
