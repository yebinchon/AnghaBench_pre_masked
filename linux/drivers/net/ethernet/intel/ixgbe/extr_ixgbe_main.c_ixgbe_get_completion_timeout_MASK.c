
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ixgbe_adapter {int pdev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static unsigned long FUNC_1(struct ixgbe_adapter *VAR_2)
{
 u16 VAR_3;

 FUNC_0(VAR_2->pdev, VAR_1, &VAR_3);

 switch (VAR_3 & VAR_0) {
 case 134:
 case 130:




 case 132:
  return 2000000ul;
 case 131:
  return 520000ul;
 case 128:
  return 130000ul;
 case 136:
  return 32000ul;
 case 133:
  return 2000ul;
 case 129:
  return 100ul;
 case 135:
  return 32000ul;
 default:
  break;
 }




 return 32000ul;
}
