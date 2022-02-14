
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_qdio_req {int dummy; } ;
struct zfcp_qdio {int dummy; } ;
struct qdio_buffer_element {int eflags; } ;


 int VAR_0 ;
 struct qdio_buffer_element* FUNC_0 (struct zfcp_qdio*,struct zfcp_qdio_req*) ;

__attribute__((used)) static inline
void FUNC_1(struct zfcp_qdio *VAR_1,
         struct zfcp_qdio_req *VAR_2)
{
 struct qdio_buffer_element *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_3->eflags |= VAR_0;
}
