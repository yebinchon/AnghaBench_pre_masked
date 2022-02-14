
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_device {int subclk_resources; } ;
typedef enum iss_subclk_resource { ____Placeholder_iss_subclk_resource } iss_subclk_resource ;


 int FUNC_0 (struct iss_device*) ;

int FUNC_1(struct iss_device *VAR_0,
       enum iss_subclk_resource VAR_1)
{
 VAR_0->subclk_resources &= ~VAR_1;

 return FUNC_0(VAR_0);
}
