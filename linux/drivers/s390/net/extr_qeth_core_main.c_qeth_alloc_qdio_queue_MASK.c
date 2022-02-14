
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_qdio_q {int * qdio_bufs; TYPE_1__* bufs; } ;
struct TYPE_2__ {int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct qeth_qdio_q**,int) ;
 int VAR_2 ;
 int FUNC_1 (struct qeth_qdio_q*) ;
 struct qeth_qdio_q* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static struct qeth_qdio_q *FUNC_4(void)
{
 struct qeth_qdio_q *VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 int VAR_4;

 if (!VAR_3)
  return ((void*)0);

 if (FUNC_3(VAR_3->qdio_bufs, VAR_1)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
  VAR_3->bufs[VAR_4].buffer = VAR_3->qdio_bufs[VAR_4];

 FUNC_0(VAR_2, 2, &VAR_3, sizeof(void *));
 return VAR_3;
}
