
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_hw {int dummy; } ;
struct pch_gbe_adapter {struct pch_gbe_hw hw; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct pch_gbe_hw*,int,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
          int VAR_2, int VAR_3, int VAR_4)
{
 struct pch_gbe_adapter *VAR_5 = FUNC_0(VAR_1);
 struct pch_gbe_hw *VAR_6 = &VAR_5->hw;

 FUNC_1(VAR_6, VAR_2, VAR_0, VAR_3, VAR_4);
}
