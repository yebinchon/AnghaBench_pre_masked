
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2 {int dev; scalar_t__ link_up; int timer; } ;


 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*) ;
 int FUNC_3 (struct bnx2*) ;
 int FUNC_4 (struct bnx2*) ;
 int FUNC_5 (struct bnx2*) ;
 int FUNC_6 (struct bnx2*) ;
 int FUNC_7 (int *) ;
 struct bnx2* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int
FUNC_11(struct net_device *VAR_0)
{
 struct bnx2 *VAR_1 = FUNC_8(VAR_0);

 FUNC_1(VAR_1);
 FUNC_5(VAR_1);
 FUNC_10(VAR_0);
 FUNC_7(&VAR_1->timer);
 FUNC_6(VAR_1);
 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_0(VAR_1);
 VAR_1->link_up = 0;
 FUNC_9(VAR_1->dev);
 return 0;
}
