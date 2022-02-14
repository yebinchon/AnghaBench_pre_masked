
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ef4_nic {TYPE_2__* phy_op; int phy_mode; int net_dev; int mac_lock; } ;
struct TYPE_6__ {TYPE_1__* type; } ;
struct TYPE_5__ {int (* poll ) (struct ef4_nic*) ;} ;
struct TYPE_4__ {int (* monitor ) (struct ef4_nic*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ef4_nic*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*) ;
 TYPE_3__* FUNC_5 (struct ef4_nic*) ;
 int FUNC_6 (struct ef4_nic*) ;
 int FUNC_7 (struct ef4_nic*) ;
 int FUNC_8 (struct ef4_nic*) ;
 int FUNC_9 (struct ef4_nic*) ;
 int FUNC_10 (struct ef4_nic*) ;
 int FUNC_11 (struct ef4_nic*) ;
 int FUNC_12 (struct ef4_nic*) ;
 int VAR_2 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ef4_nic*,int ,int ,char*,char*) ;
 int FUNC_15 (struct ef4_nic*) ;
 int FUNC_16 (struct ef4_nic*) ;

__attribute__((used)) static void FUNC_17(struct ef4_nic *VAR_3)
{
 bool VAR_4;
 int VAR_5;

 FUNC_0(!FUNC_13(&VAR_3->mac_lock));

 VAR_5 = FUNC_5(VAR_3)->type->monitor(VAR_3);
 if (VAR_5) {
  FUNC_14(VAR_3, VAR_2, VAR_3->net_dev,
     "Board sensor %s; shutting down PHY\n",
     (VAR_5 == -VAR_0) ? "reported fault" : "failed");
  VAR_3->phy_mode |= VAR_1;
  VAR_5 = FUNC_3(VAR_3);
  FUNC_2(VAR_5);
 }

 if (FUNC_1(VAR_3))
  VAR_4 = FUNC_7(VAR_3);
 else
  VAR_4 = VAR_3->phy_op->poll(VAR_3);

 if (VAR_4) {
  FUNC_12(VAR_3);
  FUNC_6(VAR_3);

  FUNC_10(VAR_3);
  VAR_5 = FUNC_9(VAR_3);
  FUNC_0(VAR_5);

  FUNC_11(VAR_3);

  FUNC_4(VAR_3);
 }

 FUNC_8(VAR_3);
}
