
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio_req {size_t sbal_last; size_t sbale_curr; } ;
struct zfcp_qdio {TYPE_1__** req_q; } ;
struct qdio_buffer_element {int dummy; } ;
struct TYPE_2__ {struct qdio_buffer_element* element; } ;



__attribute__((used)) static inline struct qdio_buffer_element *
FUNC_0(struct zfcp_qdio *VAR_0, struct zfcp_qdio_req *VAR_1)
{
 return &VAR_0->req_q[VAR_1->sbal_last]->element[VAR_1->sbale_curr];
}
