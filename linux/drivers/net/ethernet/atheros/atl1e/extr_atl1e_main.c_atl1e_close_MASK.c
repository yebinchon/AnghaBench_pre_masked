
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl1e_adapter {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct atl1e_adapter*) ;
 int FUNC_2 (struct atl1e_adapter*) ;
 int FUNC_3 (struct atl1e_adapter*) ;
 struct atl1e_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct atl1e_adapter *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(FUNC_5(VAR_0, &VAR_2->flags));
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_3(VAR_2);

 return 0;
}
