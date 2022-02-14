
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_qdio {int req_q; int res_q; int req_q_wq; } ;
struct qdio_initialize {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qdio_initialize*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct qdio_initialize*,struct zfcp_qdio*) ;

__attribute__((used)) static int FUNC_5(struct zfcp_qdio *VAR_2)
{
 struct qdio_initialize VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->req_q, VAR_1);
 if (VAR_4)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2->res_q, VAR_1);
 if (VAR_4)
  goto free_req_q;

 FUNC_4(&VAR_3, VAR_2);
 FUNC_0(&VAR_2->req_q_wq);

 VAR_4 = FUNC_2(&VAR_3);
 if (VAR_4)
  goto free_res_q;

 return 0;

free_res_q:
 FUNC_3(VAR_2->res_q, VAR_1);
free_req_q:
 FUNC_3(VAR_2->req_q, VAR_1);
 return VAR_4;
}
