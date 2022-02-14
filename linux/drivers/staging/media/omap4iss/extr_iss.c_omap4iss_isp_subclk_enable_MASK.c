
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_device {int isp_subclk_resources; } ;
typedef enum iss_isp_subclk_resource { ____Placeholder_iss_isp_subclk_resource } iss_isp_subclk_resource ;


 int FUNC_0 (struct iss_device*) ;

void FUNC_1(struct iss_device *VAR_0,
    enum iss_isp_subclk_resource VAR_1)
{
 VAR_0->isp_subclk_resources |= VAR_1;

 FUNC_0(VAR_0);
}
