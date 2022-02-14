
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igc_adapter {int state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct igc_adapter*) ;
 int FUNC_2 (struct igc_adapter*) ;
 int FUNC_3 (struct igc_adapter*) ;
 int FUNC_4 (struct igc_adapter*) ;
 int FUNC_5 (struct igc_adapter*) ;
 struct igc_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1, bool VAR_2)
{
 struct igc_adapter *VAR_3 = FUNC_6(VAR_1);

 FUNC_0(FUNC_7(VAR_0, &VAR_3->state));

 FUNC_1(VAR_3);

 FUNC_5(VAR_3);

 FUNC_4(VAR_3);

 FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 return 0;
}
