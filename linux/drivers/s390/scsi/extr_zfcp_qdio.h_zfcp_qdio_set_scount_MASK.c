
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio_req {size_t sbal_first; scalar_t__ sbal_number; } ;
struct zfcp_qdio {TYPE_1__** req_q; } ;
struct qdio_buffer_element {scalar_t__ scount; } ;
struct TYPE_2__ {struct qdio_buffer_element* element; } ;



__attribute__((used)) static inline
void FUNC_0(struct zfcp_qdio *VAR_0, struct zfcp_qdio_req *VAR_1)
{
 struct qdio_buffer_element *VAR_2;

 VAR_2 = VAR_0->req_q[VAR_1->sbal_first]->element;
 VAR_2->scount = VAR_1->sbal_number - 1;
}
