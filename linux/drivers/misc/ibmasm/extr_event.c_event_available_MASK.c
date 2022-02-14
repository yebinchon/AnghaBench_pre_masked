
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_reader {scalar_t__ next_serial_number; } ;
struct event_buffer {scalar_t__ next_serial_number; } ;



__attribute__((used)) static inline int FUNC_0(struct event_buffer *VAR_0, struct event_reader *VAR_1)
{
 return (VAR_1->next_serial_number < VAR_0->next_serial_number);
}
