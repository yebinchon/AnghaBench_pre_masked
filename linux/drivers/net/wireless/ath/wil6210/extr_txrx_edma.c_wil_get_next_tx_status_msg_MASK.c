
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wil_status_ring {int elem_size; int swhead; scalar_t__ va; } ;
struct wil_ring_tx_status {int desc_ready; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void
FUNC_1(struct wil_status_ring *VAR_1, u8 *VAR_2,
      struct wil_ring_tx_status *VAR_3)
{
 struct wil_ring_tx_status *VAR_4 = (struct wil_ring_tx_status *)
  (VAR_1->va + (VAR_1->elem_size * VAR_1->swhead));

 *VAR_2 = VAR_4->desc_ready >> VAR_0;

 FUNC_0();
 *VAR_3 = *VAR_4;
}
