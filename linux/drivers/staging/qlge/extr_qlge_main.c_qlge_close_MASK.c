
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int flags; int ndev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct ql_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_4 (struct ql_adapter*) ;
 int FUNC_5 (struct ql_adapter*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3)
{
 struct ql_adapter *VAR_4 = FUNC_2(VAR_3);





 if (FUNC_6(VAR_1, &VAR_4->flags)) {
  FUNC_3(VAR_4, VAR_2, VAR_4->ndev, "EEH fatal did unload.\n");
  FUNC_0(VAR_1, &VAR_4->flags);
  return 0;
 }





 while (!FUNC_6(VAR_0, &VAR_4->flags))
  FUNC_1(1);
 FUNC_4(VAR_4);
 FUNC_5(VAR_4);
 return 0;
}
