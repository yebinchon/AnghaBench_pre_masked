
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct ql3_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ql3_adapter*,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct ql3_adapter *VAR_3 = FUNC_1(VAR_2);





 while (!FUNC_3(VAR_0, &VAR_3->flags))
  FUNC_0(50);

 FUNC_2(VAR_3, VAR_1);
 return 0;
}
