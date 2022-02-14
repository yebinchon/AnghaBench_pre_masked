
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct virt_plug_params {void* fifo_len; void* fifo_lo; void* fifo_hi; void* status_lo; void* status_hi; } ;
struct TYPE_2__ {int offset; int length; } ;
struct fwtty_port {TYPE_1__ rx_handler; } ;


 void* FUNC_0 (size_t) ;

__attribute__((used)) static inline void FUNC_1(struct virt_plug_params *VAR_0,
        struct fwtty_port *VAR_1)
{
 u64 VAR_2 = VAR_1->rx_handler.offset;
 u64 VAR_3 = VAR_1->rx_handler.offset + 4;
 size_t VAR_4 = VAR_1->rx_handler.length - 4;

 VAR_0->status_hi = FUNC_0(VAR_2 >> 32);
 VAR_0->status_lo = FUNC_0(VAR_2);
 VAR_0->fifo_hi = FUNC_0(VAR_3 >> 32);
 VAR_0->fifo_lo = FUNC_0(VAR_3);
 VAR_0->fifo_len = FUNC_0(VAR_4);
}
