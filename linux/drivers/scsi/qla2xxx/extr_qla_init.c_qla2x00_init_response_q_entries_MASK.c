
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct rsp_que {scalar_t__ length; TYPE_1__* ring_ptr; int * status_srb; scalar_t__ ring_index; TYPE_1__* ring; } ;
struct TYPE_2__ {int signature; } ;
typedef TYPE_1__ response_t ;


 int VAR_0 ;

void
FUNC_0(struct rsp_que *VAR_1)
{
 uint16_t VAR_2;
 response_t *VAR_3;

 VAR_1->ring_ptr = VAR_1->ring;
 VAR_1->ring_index = 0;
 VAR_1->status_srb = ((void*)0);
 VAR_3 = VAR_1->ring_ptr;
 for (VAR_2 = 0; VAR_2 < VAR_1->length; VAR_2++) {
  VAR_3->signature = VAR_0;
  VAR_3++;
 }
}
