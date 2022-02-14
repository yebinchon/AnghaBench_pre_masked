
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_status_ring {int swhead; int size; scalar_t__ desc_rdy_pol; } ;



__attribute__((used)) static inline void FUNC_0(struct wil_status_ring *VAR_0)
{
 VAR_0->swhead = (VAR_0->swhead + 1) % VAR_0->size;
 if (VAR_0->swhead == 0)
  VAR_0->desc_rdy_pol = 1 - VAR_0->desc_rdy_pol;
}
