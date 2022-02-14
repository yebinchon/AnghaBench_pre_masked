
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfar_priv_rx_q {scalar_t__ next_to_clean; scalar_t__ next_to_use; int rx_ring_size; } ;



__attribute__((used)) static inline int FUNC_0(struct gfar_priv_rx_q *VAR_0)
{
 if (VAR_0->next_to_clean > VAR_0->next_to_use)
  return VAR_0->next_to_clean - VAR_0->next_to_use - 1;

 return VAR_0->rx_ring_size + VAR_0->next_to_clean - VAR_0->next_to_use - 1;
}
