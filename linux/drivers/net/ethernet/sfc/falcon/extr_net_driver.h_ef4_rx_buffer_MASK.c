
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_rx_queue {struct ef4_rx_buffer* buffer; } ;
struct ef4_rx_buffer {int dummy; } ;



__attribute__((used)) static inline struct ef4_rx_buffer *FUNC_0(struct ef4_rx_queue *VAR_0,
        unsigned int VAR_1)
{
 return &VAR_0->buffer[VAR_1];
}
