
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macb_queue {void* rx_buffers; TYPE_1__* bp; } ;
struct TYPE_2__ {int rx_buffer_size; } ;


 int FUNC_0 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static void *FUNC_1(struct macb_queue *VAR_0, unsigned int VAR_1)
{
 return VAR_0->rx_buffers + VAR_0->bp->rx_buffer_size *
        FUNC_0(VAR_0->bp, VAR_1);
}
