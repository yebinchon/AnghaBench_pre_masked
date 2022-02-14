
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_adapter {int hw; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;

__attribute__((used)) static int FUNC_2(struct ixgbevf_adapter *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);

 if (VAR_1)
  FUNC_0(&VAR_0->hw, "request_irq failed, Error %d\n", VAR_1);

 return VAR_1;
}
