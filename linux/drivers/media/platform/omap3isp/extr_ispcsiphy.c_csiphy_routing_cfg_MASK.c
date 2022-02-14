
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp_csiphy {TYPE_1__* isp; } ;
typedef enum isp_interface_type { ____Placeholder_isp_interface_type } isp_interface_type ;
struct TYPE_2__ {scalar_t__ phy_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void FUNC_0 (struct isp_csiphy*,int,int,int) ;
 void FUNC_1 (struct isp_csiphy*,int,int) ;

__attribute__((used)) static void FUNC_2(struct isp_csiphy *VAR_2,
          enum isp_interface_type VAR_3, bool VAR_4,
          bool VAR_5)
{
 if (VAR_2->isp->phy_type == VAR_1 && VAR_4)
  return FUNC_1(VAR_2, VAR_3, VAR_5);
 if (VAR_2->isp->phy_type == VAR_0)
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
