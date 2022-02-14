
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl1e_adapter {int hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct atl1e_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, int VAR_2,
        int VAR_3, int VAR_4)
{
 struct atl1e_adapter *VAR_5 = FUNC_2(VAR_1);

 if (FUNC_0(&VAR_5->hw,
    VAR_3 & VAR_0, VAR_4))
  FUNC_1(VAR_1, "write phy register failed\n");
}
