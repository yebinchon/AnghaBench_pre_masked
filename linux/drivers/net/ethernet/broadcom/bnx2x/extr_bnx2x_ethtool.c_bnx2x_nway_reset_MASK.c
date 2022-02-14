
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int pmf; } ;
struct bnx2x {TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*,int ) ;
 struct bnx2x* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct bnx2x *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2->port.pmf)
  return 0;

 if (FUNC_4(VAR_1)) {
  FUNC_2(VAR_2, VAR_0);
  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 }

 return 0;
}
