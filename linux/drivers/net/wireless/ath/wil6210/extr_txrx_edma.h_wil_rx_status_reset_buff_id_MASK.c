
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_status_ring {int elem_size; int swhead; scalar_t__ va; } ;
struct wil_rx_status_compressed {scalar_t__ buff_id; } ;



__attribute__((used)) static inline void FUNC_0(struct wil_status_ring *VAR_0)
{
 ((struct wil_rx_status_compressed *)
  (VAR_0->va + (VAR_0->elem_size * VAR_0->swhead)))->buff_id = 0;
}
