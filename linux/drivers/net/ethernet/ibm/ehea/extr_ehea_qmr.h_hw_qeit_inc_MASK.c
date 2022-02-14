
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_queue {scalar_t__ current_q_offset; scalar_t__ qe_size; scalar_t__ queue_length; int toggle_state; } ;



__attribute__((used)) static inline void FUNC_0(struct hw_queue *VAR_0)
{
 VAR_0->current_q_offset += VAR_0->qe_size;
 if (VAR_0->current_q_offset >= VAR_0->queue_length) {
  VAR_0->current_q_offset = 0;

  VAR_0->toggle_state = (~VAR_0->toggle_state) & 1;
 }
}
