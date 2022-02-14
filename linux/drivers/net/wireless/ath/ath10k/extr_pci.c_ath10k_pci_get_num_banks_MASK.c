
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath10k_pci {TYPE_1__* pdev; } ;
struct TYPE_4__ {int chip_id; } ;
struct ath10k {TYPE_2__ bus_param; } ;
struct TYPE_3__ {int device; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct ath10k_pci* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_1)
{
 struct ath10k_pci *VAR_2 = FUNC_1(VAR_1);

 switch (VAR_2->pdev->device) {
 case 130:
 case 131:
 case 128:
 case 132:
 case 129:
 case 133:
  return 1;
 case 144:
 case 143:
  switch (FUNC_0(VAR_1->bus_param.chip_id, VAR_0)) {
  case 142:
  case 141:
  case 139:
  case 138:
   return 3;
  case 140:
   return 2;
  case 137:
  case 136:
  case 135:
   return 9;
  }
  break;
 case 134:
  return 9;
 }

 FUNC_2(VAR_1, "unknown number of banks, assuming 1\n");
 return 1;
}
