
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_window_iter {scalar_t__ index; int offset; } ;
struct scif_window {int offset; } ;



__attribute__((used)) static inline void
FUNC_0(struct scif_window *VAR_0, struct scif_window_iter *VAR_1)
{
 VAR_1->offset = VAR_0->offset;
 VAR_1->index = 0;
}
