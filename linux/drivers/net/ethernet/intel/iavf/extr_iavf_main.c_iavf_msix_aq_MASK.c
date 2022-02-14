
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iavf_hw {int dummy; } ;
struct iavf_adapter {int adminq_task; struct iavf_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iavf_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct iavf_hw*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct iavf_adapter *VAR_7 = FUNC_0(VAR_6);
 struct iavf_hw *VAR_8 = &VAR_7->hw;


 FUNC_2(VAR_8, VAR_0);
 FUNC_2(VAR_8, VAR_1);


 FUNC_1(VAR_3, &VAR_7->adminq_task);

 return VAR_2;
}
