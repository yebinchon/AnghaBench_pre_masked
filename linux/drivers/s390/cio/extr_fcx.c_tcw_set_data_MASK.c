
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct tcw {int flags; void* output; scalar_t__ w; void* input; scalar_t__ r; } ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct tcw *VAR_2, void *VAR_3, int VAR_4)
{
 if (VAR_2->r) {
  VAR_2->input = (u64) ((addr_t) VAR_3);
  if (VAR_4)
   VAR_2->flags |= VAR_0;
 } else if (VAR_2->w) {
  VAR_2->output = (u64) ((addr_t) VAR_3);
  if (VAR_4)
   VAR_2->flags |= VAR_1;
 }
}
