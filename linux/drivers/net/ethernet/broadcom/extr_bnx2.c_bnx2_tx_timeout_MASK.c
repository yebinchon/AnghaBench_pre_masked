
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2 {int reset_task; } ;


 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*) ;
 struct bnx2* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_0)
{
 struct bnx2 *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);


 FUNC_4(&VAR_1->reset_task);
}
