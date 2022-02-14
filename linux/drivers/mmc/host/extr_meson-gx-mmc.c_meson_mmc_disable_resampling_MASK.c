
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_host {TYPE_1__* data; scalar_t__ regs; } ;
struct TYPE_2__ {scalar_t__ adjust; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct meson_host *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1->regs + VAR_1->data->adjust);

 VAR_2 &= ~VAR_0;
 FUNC_1(VAR_2, VAR_1->regs + VAR_1->data->adjust);
}
