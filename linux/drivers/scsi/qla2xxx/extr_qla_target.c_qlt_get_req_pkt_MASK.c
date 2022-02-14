
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req_que {scalar_t__ ring_index; scalar_t__ length; scalar_t__ ring_ptr; scalar_t__ ring; } ;
typedef void cont_entry_t ;



__attribute__((used)) static inline void *FUNC_0(struct req_que *VAR_0)
{

 VAR_0->ring_index++;
 if (VAR_0->ring_index == VAR_0->length) {
  VAR_0->ring_index = 0;
  VAR_0->ring_ptr = VAR_0->ring;
 } else {
  VAR_0->ring_ptr++;
 }
 return (cont_entry_t *)VAR_0->ring_ptr;
}
