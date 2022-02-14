
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_flctl {int * chan_fifo0_tx; int * chan_fifo0_rx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sh_flctl *VAR_0)
{
 if (VAR_0->chan_fifo0_rx) {
  FUNC_0(VAR_0->chan_fifo0_rx);
  VAR_0->chan_fifo0_rx = ((void*)0);
 }
 if (VAR_0->chan_fifo0_tx) {
  FUNC_0(VAR_0->chan_fifo0_tx);
  VAR_0->chan_fifo0_tx = ((void*)0);
 }
}
