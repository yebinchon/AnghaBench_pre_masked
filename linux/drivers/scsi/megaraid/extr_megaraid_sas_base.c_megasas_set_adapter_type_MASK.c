
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {void* adapter_type; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ vendor; int device; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static inline void FUNC_0(struct megasas_instance *VAR_7)
{
 if ((VAR_7->pdev->vendor == VAR_4) &&
     (VAR_7->pdev->device == VAR_3)) {
  VAR_7->adapter_type = VAR_2;
 } else {
  switch (VAR_7->pdev->device) {
  case 145:
  case 144:
  case 143:
  case 142:
   VAR_7->adapter_type = VAR_0;
   break;
  case 129:
  case 141:
  case 135:
  case 130:
  case 128:
  case 140:
   VAR_7->adapter_type = VAR_6;
   break;
  case 136:
  case 131:
   VAR_7->adapter_type = VAR_5;
   break;
  case 132:
  case 134:
  case 133:
  case 139:
  case 138:
  case 137:
   VAR_7->adapter_type = VAR_1;
   break;
  default:
   VAR_7->adapter_type = VAR_2;
   break;
  }
 }
}
