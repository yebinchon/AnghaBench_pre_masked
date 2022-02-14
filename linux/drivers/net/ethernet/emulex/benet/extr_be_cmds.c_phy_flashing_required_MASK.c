
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ phy_type; scalar_t__ interface_type; } ;
struct be_adapter {TYPE_1__ phy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct be_adapter *VAR_2)
{
 return (VAR_2->phy.phy_type == VAR_1 &&
  VAR_2->phy.interface_type == VAR_0);
}
