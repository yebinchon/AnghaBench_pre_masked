
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_hw {int dummy; } ;
struct iavf_adapter {struct iavf_hw hw; } ;


 int FUNC_0 (struct iavf_hw*) ;
 int FUNC_1 (struct iavf_adapter*,int ) ;
 int FUNC_2 (struct iavf_adapter*) ;

void FUNC_3(struct iavf_adapter *VAR_0, bool VAR_1)
{
 struct iavf_hw *VAR_2 = &VAR_0->hw;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0, ~0);

 if (VAR_1)
  FUNC_0(VAR_2);
}
