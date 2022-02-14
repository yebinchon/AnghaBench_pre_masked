
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_qdio_req {int dummy; } ;
struct zfcp_qdio {int dummy; } ;
struct scatterlist {int length; } ;


 int FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct zfcp_qdio*,struct zfcp_qdio_req*,int ,int ) ;
 int FUNC_2 (struct zfcp_qdio*,struct zfcp_qdio_req*) ;

__attribute__((used)) static void FUNC_3(struct zfcp_qdio *VAR_0,
         struct zfcp_qdio_req *VAR_1,
         struct scatterlist *VAR_2,
         struct scatterlist *VAR_3)
{
 FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_2), VAR_2->length);
 FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_3), VAR_3->length);
 FUNC_2(VAR_0, VAR_1);
}
