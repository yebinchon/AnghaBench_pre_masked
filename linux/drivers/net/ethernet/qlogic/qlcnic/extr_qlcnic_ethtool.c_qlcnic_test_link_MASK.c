
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int pci_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int*) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

__attribute__((used)) static u32 FUNC_5(struct net_device *VAR_3)
{
 struct qlcnic_adapter *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = 0;
 u32 VAR_6;

 if (FUNC_3(VAR_4)) {
  VAR_6 = FUNC_4(VAR_4);
  return (VAR_6 & 1) ? 0 : 1;
 }
 VAR_6 = FUNC_0(VAR_4, VAR_0, &VAR_5);
 if (VAR_5 == -VAR_1)
  return VAR_5;
 VAR_6 = FUNC_1(VAR_4->ahw->pci_func, VAR_6);
 return (VAR_6 == VAR_2) ? 0 : 1;
}
