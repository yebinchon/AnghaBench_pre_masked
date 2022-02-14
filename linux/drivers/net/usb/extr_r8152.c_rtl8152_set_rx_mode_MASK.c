
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int schedule; int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct r8152* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct r8152 *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1)) {
  FUNC_3(VAR_0, &VAR_2->flags);
  FUNC_2(&VAR_2->schedule, 0);
 }
}
