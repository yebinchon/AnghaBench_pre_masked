
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_fifo_head_uv {int lock; int n_entries; struct xpc_fifo_entry_uv* last; struct xpc_fifo_entry_uv* first; } ;
struct xpc_fifo_entry_uv {struct xpc_fifo_entry_uv* next; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct xpc_fifo_head_uv *VAR_0,
        struct xpc_fifo_entry_uv *VAR_1)
{
 unsigned long VAR_2;

 VAR_1->next = ((void*)0);
 FUNC_0(&VAR_0->lock, VAR_2);
 if (VAR_0->last != ((void*)0))
  VAR_0->last->next = VAR_1;
 else
  VAR_0->first = VAR_1;
 VAR_0->last = VAR_1;
 VAR_0->n_entries++;
 FUNC_1(&VAR_0->lock, VAR_2);
}
