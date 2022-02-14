
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ regs; } ;
typedef TYPE_1__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(adapter_t *VAR_9)
{
 u32 VAR_10 = FUNC_2(VAR_9) ? 0x4000 : 0x3200;

 FUNC_3(0x1f4, VAR_9->regs + VAR_3);
 FUNC_3(0x1f4, VAR_9->regs + VAR_4);
 FUNC_3(0x1f4, VAR_9->regs + VAR_5);
 FUNC_3(0x1f4, VAR_9->regs + VAR_6);
 FUNC_3(0x100, VAR_9->regs + VAR_1);
 FUNC_3(VAR_10, VAR_9->regs + VAR_2);
 FUNC_3(3, VAR_9->regs + VAR_0);
 FUNC_3(0x08000008, VAR_9->regs + VAR_7);
 FUNC_3(FUNC_0(1) | FUNC_1(1), VAR_9->regs + VAR_8);
}
