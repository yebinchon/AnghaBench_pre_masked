
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_mcast_ramrod_params {TYPE_1__* mcast_obj; } ;
struct TYPE_4__ {int (* clear_pending ) (TYPE_2__*) ;} ;
struct TYPE_3__ {scalar_t__ (* check_pending ) (TYPE_1__*) ;TYPE_2__ raw; } ;
struct bnx2x {int dev; TYPE_1__ mcast_obj; } ;
typedef int rparam ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int ) ;
 int FUNC_2 (struct bnx2x_mcast_ramrod_params*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_1)
{
 struct bnx2x_mcast_ramrod_params VAR_2;
 int VAR_3;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));

 VAR_2.mcast_obj = &VAR_1->mcast_obj;

 FUNC_3(VAR_1->dev);


 VAR_1->mcast_obj.raw.clear_pending(&VAR_1->mcast_obj.raw);


 if (VAR_1->mcast_obj.check_pending(&VAR_1->mcast_obj)) {
  VAR_3 = FUNC_1(VAR_1, &VAR_2, VAR_0);
  if (VAR_3 < 0)
   FUNC_0("Failed to send pending mcast commands: %d\n",
      VAR_3);
 }

 FUNC_4(VAR_1->dev);
}
