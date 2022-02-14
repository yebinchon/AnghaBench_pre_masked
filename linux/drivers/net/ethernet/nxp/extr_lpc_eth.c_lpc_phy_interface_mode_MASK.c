
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (scalar_t__,char*,int *) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static phy_interface_t FUNC_2(struct device *VAR_2)
{
 if (VAR_2 && VAR_2->of_node) {
  const char *VAR_3 = FUNC_0(VAR_2->of_node,
         "phy-mode", ((void*)0));
  if (VAR_3 && !FUNC_1(VAR_3, "mii"))
   return VAR_0;
 }
 return VAR_1;
}
