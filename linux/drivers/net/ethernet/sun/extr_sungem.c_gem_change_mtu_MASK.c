
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct gem {scalar_t__ lstate; int cell_enabled; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct gem*) ;
 int FUNC_2 (struct gem*) ;
 int FUNC_3 (struct gem*) ;
 int FUNC_4 (struct gem*) ;
 scalar_t__ VAR_0 ;
 struct gem* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1, int VAR_2)
{
 struct gem *VAR_3 = FUNC_5(VAR_1);

 VAR_1->mtu = VAR_2;


 if (!FUNC_7(VAR_1) || !FUNC_6(VAR_1))
  return 0;


 if (FUNC_0(!VAR_3->cell_enabled))
  return 0;

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 if (VAR_3->lstate == VAR_0)
  FUNC_4(VAR_3);
 FUNC_1(VAR_3);

 return 0;
}
