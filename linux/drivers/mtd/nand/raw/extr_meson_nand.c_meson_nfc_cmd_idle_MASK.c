
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chip_select; } ;
struct meson_nfc {scalar_t__ reg_base; TYPE_1__ param; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct meson_nfc *VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_2->param.chip_select | VAR_0 | (VAR_3 & 0x3ff),
        VAR_2->reg_base + VAR_1);
}
