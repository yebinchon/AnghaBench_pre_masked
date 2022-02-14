
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_q {int qdio_bufs; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_qdio_q*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct qeth_qdio_q *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_1(VAR_1->qdio_bufs, VAR_0);
 FUNC_0(VAR_1);
}
