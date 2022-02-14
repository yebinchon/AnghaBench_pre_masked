
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl1c_adapter {int common_task; int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct atl1c_adapter*) ;
 int FUNC_2 (struct atl1c_adapter*) ;
 int FUNC_3 (int *) ;
 struct atl1c_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 struct atl1c_adapter *VAR_3 = FUNC_4(VAR_2);

 FUNC_0(FUNC_6(VAR_1, &VAR_3->flags));
 FUNC_5(VAR_0, &VAR_3->flags);
 FUNC_3(&VAR_3->common_task);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 return 0;
}
