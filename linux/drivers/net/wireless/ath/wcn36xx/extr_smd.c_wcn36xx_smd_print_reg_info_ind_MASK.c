
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wcn36xx_hal_print_reg_info_ind {int count; TYPE_1__* regs; int reason; int scenario; } ;
struct wcn36xx {int dummy; } ;
struct TYPE_2__ {int value; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct wcn36xx *VAR_2,
       void *VAR_3,
       size_t VAR_4)
{
 struct wcn36xx_hal_print_reg_info_ind *VAR_5 = VAR_3;
 int VAR_6;

 if (VAR_4 < sizeof(*VAR_5)) {
  FUNC_1("Corrupted print reg info indication\n");
  return -VAR_0;
 }

 FUNC_0(VAR_1,
      "reginfo indication, scenario: 0x%x reason: 0x%x\n",
      VAR_5->scenario, VAR_5->reason);

 for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++) {
  FUNC_0(VAR_1, "\t0x%x: 0x%x\n",
       VAR_5->regs[VAR_6].addr, VAR_5->regs[VAR_6].value);
 }

 return 0;
}
