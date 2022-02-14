
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x {int dev; } ;
struct TYPE_4__ {TYPE_1__* port_hw_config; } ;
struct TYPE_3__ {int external_phy_config; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6;

 VAR_6 =
  FUNC_1(VAR_4,
    VAR_3.port_hw_config[VAR_5].external_phy_config);

 VAR_6 &= ~VAR_2;
 VAR_6 |= VAR_1;
 FUNC_2(VAR_4, VAR_3.port_hw_config[VAR_5].external_phy_config,
   VAR_6);


 FUNC_4(VAR_4->dev, "Fan Failure on Network Controller has caused the driver to shutdown the card to prevent permanent damage.\n"
       "Please contact OEM Support for assistance\n");





 FUNC_3(VAR_4, VAR_0, 0);
}
