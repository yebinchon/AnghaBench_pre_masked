
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_q {int qdio_bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_qdio_out_q*) ;
 struct qeth_qdio_out_q* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static struct qeth_qdio_out_q *FUNC_3(void)
{
 struct qeth_qdio_out_q *VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);

 if (!VAR_2)
  return ((void*)0);

 if (FUNC_2(VAR_2->qdio_bufs, VAR_1)) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }
 return VAR_2;
}
