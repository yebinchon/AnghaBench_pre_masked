
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2x {int panic; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct bnx2x*,int) ;
 int FUNC_2 (struct bnx2x*,int ,int ) ;
 struct bnx2x* FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_1)
{
 struct bnx2x *VAR_2 = FUNC_3(VAR_1);




 if (!VAR_2->panic)

  FUNC_1(VAR_2, 0);





 FUNC_2(VAR_2, VAR_0, 0);
}
