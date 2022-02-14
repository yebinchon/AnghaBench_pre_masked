
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_private {scalar_t__ tx_tail; scalar_t__ tx_head; scalar_t__ rx_tail; } ;



__attribute__((used)) static void FUNC_0 (struct cp_private *VAR_0)
{
 VAR_0->rx_tail = 0;
 VAR_0->tx_head = VAR_0->tx_tail = 0;
}
