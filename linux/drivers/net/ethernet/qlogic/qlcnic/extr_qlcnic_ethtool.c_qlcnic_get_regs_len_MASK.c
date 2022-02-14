
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int dummy; } ;
struct net_device {int dummy; } ;
typedef int ext_diag_registers ;
typedef int diag_registers ;


 int VAR_0 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;

 if (FUNC_1(VAR_2))
  VAR_3 = FUNC_2(VAR_2);
 else
  VAR_3 = sizeof(ext_diag_registers) + sizeof(diag_registers);

 VAR_3 += ((VAR_0 + 2) * sizeof(u32));
 VAR_3 += FUNC_3(VAR_2);
 return VAR_3;
}
