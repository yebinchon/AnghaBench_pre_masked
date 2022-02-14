
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vendor_pn; int vendor_name; } ;
struct be_adapter {size_t phy_state; int flags; TYPE_2__ phy; int port_name; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*) ;
 int * VAR_1 ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3) {
  FUNC_1(&VAR_2->pdev->dev,
   "Port %c: %s Vendor: %s part no: %s",
   VAR_2->port_name,
   VAR_1[VAR_2->phy_state],
   VAR_2->phy.vendor_name,
   VAR_2->phy.vendor_pn);
 }
 VAR_2->flags &= ~VAR_0;
}
