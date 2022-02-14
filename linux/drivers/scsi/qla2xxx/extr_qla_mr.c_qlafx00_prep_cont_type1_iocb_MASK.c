
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct req_que {scalar_t__ ring_index; scalar_t__ length; scalar_t__ ring_ptr; scalar_t__ ring; } ;
struct TYPE_4__ {int entry_type; } ;
typedef TYPE_1__ cont_a64_entry_t ;


 int VAR_0 ;

__attribute__((used)) static inline cont_a64_entry_t *
FUNC_0(struct req_que *VAR_1,
        cont_a64_entry_t *VAR_2)
{
 cont_a64_entry_t *VAR_3;


 VAR_1->ring_index++;
 if (VAR_1->ring_index == VAR_1->length) {
  VAR_1->ring_index = 0;
  VAR_1->ring_ptr = VAR_1->ring;
 } else {
  VAR_1->ring_ptr++;
 }

 VAR_3 = (cont_a64_entry_t *)VAR_1->ring_ptr;


 VAR_2->entry_type = VAR_0;

 return VAR_3;
}
