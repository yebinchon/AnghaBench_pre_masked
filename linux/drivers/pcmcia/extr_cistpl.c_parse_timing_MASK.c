
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {void* reserved; void* rsvscale; void* ready; void* rdyscale; void* wait; void* waitscale; } ;
typedef TYPE_1__ cistpl_timing_t ;


 void* FUNC_0 (int) ;
 void** VAR_0 ;

__attribute__((used)) static u_char *FUNC_1(u_char *VAR_1, u_char *VAR_2, cistpl_timing_t *VAR_3)
{
 u_char VAR_4;

 if (VAR_1 == VAR_2)
  return ((void*)0);
 VAR_4 = *VAR_1;
 if ((VAR_4 & 3) != 3) {
  if (++VAR_1 == VAR_2)
   return ((void*)0);
  VAR_3->wait = FUNC_0(*VAR_1);
  VAR_3->waitscale = VAR_0[VAR_4 & 3];
 } else
  VAR_3->wait = 0;
 VAR_4 >>= 2;
 if ((VAR_4 & 7) != 7) {
  if (++VAR_1 == VAR_2)
   return ((void*)0);
  VAR_3->ready = FUNC_0(*VAR_1);
  VAR_3->rdyscale = VAR_0[VAR_4 & 7];
 } else
  VAR_3->ready = 0;
 VAR_4 >>= 3;
 if (VAR_4 != 7) {
  if (++VAR_1 == VAR_2)
   return ((void*)0);
  VAR_3->reserved = FUNC_0(*VAR_1);
  VAR_3->rsvscale = VAR_0[VAR_4];
 } else
  VAR_3->reserved = 0;
 VAR_1++;
 return VAR_1;
}
