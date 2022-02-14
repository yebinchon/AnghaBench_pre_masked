
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rx_mod {scalar_t__ rx_free_count; scalar_t__ rxp_free_count; int rxq_free_count; } ;
struct bna_rx_config {scalar_t__ rxp_type; scalar_t__ num_paths; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct bna_rx_mod *VAR_1, struct bna_rx_config *VAR_2)
{
 if ((VAR_1->rx_free_count == 0) ||
  (VAR_1->rxp_free_count == 0) ||
  (VAR_1->rxq_free_count == 0))
  return 0;

 if (VAR_2->rxp_type == VAR_0) {
  if ((VAR_1->rxp_free_count < VAR_2->num_paths) ||
   (VAR_1->rxq_free_count < VAR_2->num_paths))
    return 0;
 } else {
  if ((VAR_1->rxp_free_count < VAR_2->num_paths) ||
   (VAR_1->rxq_free_count < (2 * VAR_2->num_paths)))
   return 0;
 }

 return 1;
}
