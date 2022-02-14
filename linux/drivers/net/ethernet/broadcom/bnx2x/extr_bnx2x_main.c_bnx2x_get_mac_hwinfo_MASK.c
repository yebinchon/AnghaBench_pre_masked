
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {int mac_addr; } ;
struct bnx2x {TYPE_5__* dev; TYPE_3__* pdev; TYPE_2__ link_params; int flags; int phys_port_id; } ;
struct TYPE_12__ {TYPE_1__* port_hw_config; } ;
struct TYPE_11__ {int dev_addr; } ;
struct TYPE_10__ {int mac_lower; int mac_upper; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int mac_lower; int mac_upper; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_7 (struct bnx2x*,int ) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *,char*,int ) ;
 TYPE_6__ VAR_4 ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int ) ;
 TYPE_4__* VAR_5 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_15(struct bnx2x *VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9 = FUNC_1(VAR_6);
 int VAR_10 = FUNC_3(VAR_6);


 FUNC_12(VAR_6->dev->dev_addr);

 if (FUNC_2(VAR_6)) {
  FUNC_0("warning: random MAC workaround active\n");
  FUNC_11(VAR_6->dev);
 } else if (FUNC_5(VAR_6)) {
  VAR_8 = FUNC_6(VAR_6, VAR_5[VAR_9].mac_upper);
  VAR_7 = FUNC_6(VAR_6, VAR_5[VAR_9].mac_lower);
  if ((VAR_8 != VAR_2) &&
      (VAR_7 != VAR_1))
   FUNC_9(VAR_6->dev->dev_addr, VAR_7, VAR_8);

  if (FUNC_4(VAR_6))
   FUNC_8(VAR_6);
 } else {

  VAR_8 = FUNC_7(VAR_6, VAR_4.port_hw_config[VAR_10].mac_upper);
  VAR_7 = FUNC_7(VAR_6, VAR_4.port_hw_config[VAR_10].mac_lower);
  FUNC_9(VAR_6->dev->dev_addr, VAR_7, VAR_8);

  if (FUNC_4(VAR_6))
   FUNC_8(VAR_6);
 }

 if (!FUNC_2(VAR_6)) {

  VAR_8 = FUNC_7(VAR_6, VAR_4.port_hw_config[VAR_10].mac_upper);
  VAR_7 = FUNC_7(VAR_6, VAR_4.port_hw_config[VAR_10].mac_lower);
  FUNC_9(VAR_6->phys_port_id, VAR_7, VAR_8);
  VAR_6->flags |= VAR_3;
 }

 FUNC_14(VAR_6->link_params.mac_addr, VAR_6->dev->dev_addr, VAR_0);

 if (!FUNC_13(VAR_6->dev->dev_addr))
  FUNC_10(&VAR_6->pdev->dev,
   "bad Ethernet MAC address configuration: %pM\n"
   "change it manually before bringing up the appropriate network interface\n",
   VAR_6->dev->dev_addr);
}
