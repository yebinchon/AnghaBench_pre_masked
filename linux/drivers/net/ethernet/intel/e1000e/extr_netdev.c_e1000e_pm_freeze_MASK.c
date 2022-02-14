
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct e1000_adapter {int hw; int state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 struct net_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct e1000_adapter*,int) ;
 int FUNC_5 (struct e1000_adapter*) ;
 struct e1000_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_1(VAR_2);
 struct e1000_adapter *VAR_4 = FUNC_6(VAR_3);

 FUNC_7(VAR_3);

 if (FUNC_8(VAR_3)) {
  int VAR_5 = VAR_0;

  while (FUNC_9(VAR_1, &VAR_4->state) && VAR_5--)
   FUNC_10(10000, 11000);

  FUNC_0(FUNC_9(VAR_1, &VAR_4->state));


  FUNC_4(VAR_4, 0);
  FUNC_2(VAR_4);
 }
 FUNC_5(VAR_4);


 FUNC_3(&VAR_4->hw);

 return 0;
}
