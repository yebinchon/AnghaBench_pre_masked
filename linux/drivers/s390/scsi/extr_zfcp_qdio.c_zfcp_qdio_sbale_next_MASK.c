
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_qdio_req {int sbale_curr; } ;
struct zfcp_qdio {int max_sbale_per_sbal; } ;
struct qdio_buffer_element {int dummy; } ;


 struct qdio_buffer_element* FUNC_0 (struct zfcp_qdio*,struct zfcp_qdio_req*) ;
 struct qdio_buffer_element* FUNC_1 (struct zfcp_qdio*,struct zfcp_qdio_req*) ;

__attribute__((used)) static struct qdio_buffer_element *
FUNC_2(struct zfcp_qdio *VAR_0, struct zfcp_qdio_req *VAR_1)
{
 if (VAR_1->sbale_curr == VAR_0->max_sbale_per_sbal - 1)
  return FUNC_0(VAR_0, VAR_1);
 VAR_1->sbale_curr++;
 return FUNC_1(VAR_0, VAR_1);
}
