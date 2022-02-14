
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ cur_rx; scalar_t__ cur_tx; scalar_t__ dirty_tx; } ;



__attribute__((used)) static void FUNC_0(struct rtl8169_private *VAR_0)
{
 VAR_0->dirty_tx = VAR_0->cur_tx = VAR_0->cur_rx = 0;
}
