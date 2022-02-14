
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ad_type; TYPE_1__* nvram; } ;
struct TYPE_3__ {int* adapter_order; } ;
typedef TYPE_1__ IPS_NVRAM_P5 ;
 TYPE_2__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_2, VAR_3, VAR_4, VAR_5 = 0;
 IPS_NVRAM_P5 *VAR_6;
 if (!VAR_0[0])
  return;
 VAR_6 = VAR_0[0]->nvram;

 if (VAR_6->adapter_order[0]) {
  for (VAR_2 = 1; VAR_2 <= VAR_6->adapter_order[0]; VAR_2++) {
   for (VAR_3 = VAR_5; VAR_3 < VAR_1; VAR_3++) {
    switch (VAR_0[VAR_3]->ad_type) {
    case 130:
    case 129:
     if (VAR_6->adapter_order[VAR_2] == 'M') {
      FUNC_0(VAR_5,
              VAR_3);
      VAR_5++;
     }
     break;
    case 137:
    case 135:
    case 134:
    case 136:
     if (VAR_6->adapter_order[VAR_2] == 'N') {
      FUNC_0(VAR_5,
              VAR_3);
      VAR_5++;
     }
     break;
    case 131:
    case 132:
    case 133:
    case 128:
     if (VAR_6->adapter_order[VAR_2] == 'S') {
      FUNC_0(VAR_5,
              VAR_3);
      VAR_5++;
     }
     break;
    case 142:
    case 141:
    case 143:
    case 144:
    case 139:
    case 140:
    case 138:
     if (VAR_6->adapter_order[VAR_2] == 'A') {
      FUNC_0(VAR_5,
              VAR_3);
      VAR_5++;
     }
     break;
    default:
     break;
    }
   }
  }

  return;
 }

 VAR_4 = 0;
 for (VAR_2 = VAR_5; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2]->ad_type == 132 ||
      VAR_0[VAR_2]->ad_type == 133) {
   FUNC_0(VAR_5, VAR_2);
   VAR_5++;
   VAR_4 = 1;
  }
 }

 if (!VAR_4)
  return;
 for (VAR_2 = VAR_5; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2]->ad_type == 137 ||
      VAR_0[VAR_2]->ad_type == 135 ||
      VAR_0[VAR_2]->ad_type == 136 ||
      VAR_0[VAR_2]->ad_type == 134) {
   FUNC_0(VAR_5, VAR_2);
   VAR_5++;
  }
 }

 return;
}
