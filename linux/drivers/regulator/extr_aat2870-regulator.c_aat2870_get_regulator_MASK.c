
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct aat2870_regulator {int enable_shift; int enable_mask; int voltage_shift; int voltage_mask; int voltage_addr; int enable_addr; TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aat2870_regulator*) ;
 struct aat2870_regulator* VAR_4 ;

__attribute__((used)) static struct aat2870_regulator *FUNC_1(int VAR_5)
{
 struct aat2870_regulator *VAR_6 = ((void*)0);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
  VAR_6 = &VAR_4[VAR_7];
  if (VAR_6->desc.id == VAR_5)
   break;
 }

 if (VAR_7 == FUNC_0(VAR_4))
  return ((void*)0);

 VAR_6->enable_addr = VAR_3;
 VAR_6->enable_shift = VAR_5 - VAR_0;
 VAR_6->enable_mask = 0x1 << VAR_6->enable_shift;

 VAR_6->voltage_addr = (VAR_5 - VAR_0) / 2 ?
      VAR_2 : VAR_1;
 VAR_6->voltage_shift = (VAR_5 - VAR_0) % 2 ? 0 : 4;
 VAR_6->voltage_mask = 0xF << VAR_6->voltage_shift;

 return VAR_6;
}
