
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_spilib {scalar_t__ op_timeout; scalar_t__ last_xfer_size; scalar_t__ tx_xfer_offset; scalar_t__ rx_xfer_offset; int * last_xfer; int * first_xfer; } ;



__attribute__((used)) static void FUNC_0(struct gb_spilib *VAR_0)
{
 VAR_0->first_xfer = ((void*)0);
 VAR_0->last_xfer = ((void*)0);
 VAR_0->rx_xfer_offset = 0;
 VAR_0->tx_xfer_offset = 0;
 VAR_0->last_xfer_size = 0;
 VAR_0->op_timeout = 0;
}
