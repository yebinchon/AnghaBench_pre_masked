
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_rq {int dummy; } ;
struct hinic_qp {struct hinic_rq rq; } ;
struct hinic_func_to_io {struct hinic_qp* qps; } ;
struct hinic_hwdev {struct hinic_func_to_io func_to_io; } ;


 int FUNC_0 (struct hinic_hwdev*) ;

struct hinic_rq *FUNC_1(struct hinic_hwdev *VAR_0, int VAR_1)
{
 struct hinic_func_to_io *VAR_2 = &VAR_0->func_to_io;
 struct hinic_qp *VAR_3 = &VAR_2->qps[VAR_1];

 if (VAR_1 >= FUNC_0(VAR_0))
  return ((void*)0);

 return &VAR_3->rq;
}
