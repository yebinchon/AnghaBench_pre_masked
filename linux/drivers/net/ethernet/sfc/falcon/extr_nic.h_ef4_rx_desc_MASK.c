
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ addr; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;
struct ef4_rx_queue {TYPE_2__ rxd; } ;
typedef int ef4_qword_t ;



__attribute__((used)) static inline ef4_qword_t *
FUNC_0(struct ef4_rx_queue *VAR_0, unsigned int VAR_1)
{
 return ((ef4_qword_t *) (VAR_0->rxd.buf.addr)) + VAR_1;
}
