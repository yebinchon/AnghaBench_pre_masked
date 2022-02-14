
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ regs; } ;
typedef TYPE_1__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(adapter_t *VAR_4, int VAR_5)
{
 FUNC_3(1, VAR_4->regs + VAR_0);
 if (VAR_5 == 4) {
  if (FUNC_2(VAR_4)) {
   FUNC_3(0xf00, VAR_4->regs + VAR_2);
   FUNC_3(0x3c0, VAR_4->regs + VAR_1);
  } else {
   FUNC_3(0x7ff, VAR_4->regs + VAR_2);
   FUNC_3(0x1ff, VAR_4->regs + VAR_1);
  }
 } else {
  FUNC_3(0x1fff, VAR_4->regs + VAR_2);
  FUNC_3(0x7ff, VAR_4->regs + VAR_1);
 }
 FUNC_3(FUNC_0(VAR_5) | FUNC_1(VAR_5), VAR_4->regs + VAR_3);

}
