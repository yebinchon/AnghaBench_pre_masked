
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int paused; scalar_t__ nr_pages; } ;



__attribute__((used)) static inline void FUNC_0(struct ring_buffer *VAR_0, bool VAR_1)
{
 if (!VAR_1 && VAR_0->nr_pages)
  VAR_0->paused = 0;
 else
  VAR_0->paused = 1;
}
