
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ex_phy {int phy_state; scalar_t__ port; int phy; int attached_sas_addr; } ;
struct TYPE_2__ {int num_phys; struct ex_phy* ex_phy; } ;
struct domain_device {TYPE_1__ ex_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_2(struct domain_device *VAR_2, int VAR_3)
{
 struct ex_phy *VAR_4 = &VAR_2->ex_dev.ex_phy[VAR_3];
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->ex_dev.num_phys; VAR_5++) {
  struct ex_phy *VAR_6 = &VAR_2->ex_dev.ex_phy[VAR_5];

  if (VAR_6 == VAR_4)
   continue;

  if (!FUNC_0(VAR_4->attached_sas_addr, VAR_6->attached_sas_addr,
       VAR_1) && VAR_6->port) {
   FUNC_1(VAR_6->port, VAR_4->phy);
   VAR_4->port = VAR_6->port;
   VAR_4->phy_state = VAR_0;
   return 1;
  }
 }

 return 0;
}
