
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wrb_handle {int * pio_handle; } ;
struct hwi_wrb_context {size_t free_index; int wrb_lock; int wrb_handles_available; struct wrb_handle** pwrb_handle_base; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_2(struct hwi_wrb_context *VAR_0,
         struct wrb_handle *VAR_1,
         unsigned int VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->wrb_lock, VAR_3);
 VAR_0->pwrb_handle_base[VAR_0->free_index] = VAR_1;
 VAR_0->wrb_handles_available++;
 if (VAR_0->free_index == (VAR_2 - 1))
  VAR_0->free_index = 0;
 else
  VAR_0->free_index++;
 VAR_1->pio_handle = ((void*)0);
 FUNC_1(&VAR_0->wrb_lock, VAR_3);
}
