
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct __vxge_hw_channel {size_t reserve_ptr; scalar_t__ reserve_top; scalar_t__ length; scalar_t__ free_ptr; TYPE_1__* stats; int free_arr; void** reserve_arr; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_2__ {int full_cnt; int reserve_free_swaps_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,int ) ;

__attribute__((used)) static enum vxge_hw_status
FUNC_1(struct __vxge_hw_channel *VAR_2, void **VAR_3)
{
 if (VAR_2->reserve_ptr - VAR_2->reserve_top > 0) {
_alloc_after_swap:
  *VAR_3 = VAR_2->reserve_arr[--VAR_2->reserve_ptr];

  return VAR_1;
 }







 if (VAR_2->length - VAR_2->free_ptr > 0) {
  FUNC_0(VAR_2->reserve_arr, VAR_2->free_arr);
  VAR_2->reserve_ptr = VAR_2->length;
  VAR_2->reserve_top = VAR_2->free_ptr;
  VAR_2->free_ptr = VAR_2->length;

  VAR_2->stats->reserve_free_swaps_cnt++;

  goto _alloc_after_swap;
 }

 VAR_2->stats->full_cnt++;

 *VAR_3 = ((void*)0);
 return VAR_0;
}
