
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zfcp_qdio_req {size_t sbal_first; } ;
struct zfcp_qdio {TYPE_1__** req_q; } ;
struct qdio_buffer_element {int length; } ;
struct TYPE_2__ {struct qdio_buffer_element* element; } ;



__attribute__((used)) static inline
void FUNC_0(struct zfcp_qdio *VAR_0,
       struct zfcp_qdio_req *VAR_1, u32 VAR_2)
{
 struct qdio_buffer_element *VAR_3;

 VAR_3 = VAR_0->req_q[VAR_1->sbal_first]->element;
 VAR_3->length = VAR_2;
}
