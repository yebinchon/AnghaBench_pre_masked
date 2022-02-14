
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zfcp_qdio_req {int sbale_curr; } ;
struct zfcp_qdio {int max_sbale_per_sbal; } ;
struct qdio_buffer_element {int length; void* addr; } ;


 int FUNC_0 (int) ;
 struct qdio_buffer_element* FUNC_1 (struct zfcp_qdio*,struct zfcp_qdio_req*) ;

__attribute__((used)) static inline
void FUNC_2(struct zfcp_qdio *VAR_0, struct zfcp_qdio_req *VAR_1,
    void *VAR_2, u32 VAR_3)
{
 struct qdio_buffer_element *VAR_4;

 FUNC_0(VAR_1->sbale_curr == VAR_0->max_sbale_per_sbal - 1);
 VAR_1->sbale_curr++;
 VAR_4 = FUNC_1(VAR_0, VAR_1);
 VAR_4->addr = VAR_2;
 VAR_4->length = VAR_3;
}
