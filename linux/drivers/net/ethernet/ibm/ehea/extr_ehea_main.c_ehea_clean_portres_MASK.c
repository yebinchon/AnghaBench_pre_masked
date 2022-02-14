
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int len; int * arr; } ;
struct TYPE_7__ {int len; int * arr; } ;
struct TYPE_6__ {int len; int * arr; } ;
struct TYPE_5__ {int len; int * arr; } ;
struct ehea_port_res {TYPE_4__ sq_skba; TYPE_3__ rq3_skba; TYPE_2__ rq2_skba; TYPE_1__ rq1_skba; int eq; int recv_cq; int send_cq; scalar_t__ qp; int napi; } ;
struct ehea_port {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ehea_port_res*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ehea_port *VAR_0, struct ehea_port_res *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1->qp)
  FUNC_5(&VAR_1->napi);

 VAR_2 = FUNC_3(VAR_1->qp);

 if (!VAR_2) {
  FUNC_1(VAR_1->send_cq);
  FUNC_1(VAR_1->recv_cq);
  FUNC_2(VAR_1->eq);

  for (VAR_3 = 0; VAR_3 < VAR_1->rq1_skba.len; VAR_3++)
   FUNC_0(VAR_1->rq1_skba.arr[VAR_3]);

  for (VAR_3 = 0; VAR_3 < VAR_1->rq2_skba.len; VAR_3++)
   FUNC_0(VAR_1->rq2_skba.arr[VAR_3]);

  for (VAR_3 = 0; VAR_3 < VAR_1->rq3_skba.len; VAR_3++)
   FUNC_0(VAR_1->rq3_skba.arr[VAR_3]);

  for (VAR_3 = 0; VAR_3 < VAR_1->sq_skba.len; VAR_3++)
   FUNC_0(VAR_1->sq_skba.arr[VAR_3]);

  FUNC_6(VAR_1->rq1_skba.arr);
  FUNC_6(VAR_1->rq2_skba.arr);
  FUNC_6(VAR_1->rq3_skba.arr);
  FUNC_6(VAR_1->sq_skba.arr);
  VAR_2 = FUNC_4(VAR_1);
 }
 return VAR_2;
}
