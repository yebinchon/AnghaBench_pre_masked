
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_qdio_req {int sbal_number; int sbal_first; int sbtype; } ;
struct zfcp_qdio {int req_q; int req_q_full; } ;
struct scatterlist {int length; } ;
struct qdio_buffer_element {int length; int addr; int sflags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;
 struct qdio_buffer_element* FUNC_3 (struct zfcp_qdio*,struct zfcp_qdio_req*) ;
 struct qdio_buffer_element* FUNC_4 (struct zfcp_qdio*,struct zfcp_qdio_req*) ;
 int FUNC_5 (int ,int ,int ) ;

int FUNC_6(struct zfcp_qdio *VAR_1, struct zfcp_qdio_req *VAR_2,
       struct scatterlist *VAR_3)
{
 struct qdio_buffer_element *VAR_4;


 VAR_4 = FUNC_4(VAR_1, VAR_2);
 VAR_4->sflags |= VAR_2->sbtype;

 for (; VAR_3; VAR_3 = FUNC_1(VAR_3)) {
  VAR_4 = FUNC_3(VAR_1, VAR_2);
  if (!VAR_4) {
   FUNC_0(&VAR_1->req_q_full);
   FUNC_5(VAR_1->req_q, VAR_2->sbal_first,
          VAR_2->sbal_number);
   return -VAR_0;
  }
  VAR_4->addr = FUNC_2(VAR_3);
  VAR_4->length = VAR_3->length;
 }
 return 0;
}
