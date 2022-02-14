
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int features; } ;
struct bnx2x {scalar_t__ recovery_state; int pdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_6 ;
 struct bnx2x* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9(struct net_device *VAR_7, int VAR_8)
{
 struct bnx2x *VAR_9 = FUNC_7(VAR_7);

 if (FUNC_8(VAR_9->pdev)) {
  FUNC_1(VAR_0, "VFs are enabled, can not change MTU\n");
  return -VAR_4;
 }

 if (VAR_9->recovery_state != VAR_1) {
  FUNC_0("Can't perform change MTU during parity recovery\n");
  return -VAR_3;
 }





 VAR_7->mtu = VAR_8;

 if (!FUNC_5(VAR_8))
  VAR_7->features &= ~VAR_5;

 if (FUNC_2(VAR_9) && FUNC_3(VAR_9, VAR_6))
  FUNC_4(VAR_9, VAR_6, VAR_2);

 return FUNC_6(VAR_7);
}
