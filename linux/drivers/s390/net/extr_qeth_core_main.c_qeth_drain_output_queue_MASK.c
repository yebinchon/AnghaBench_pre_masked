
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_q {int ** bufs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct qeth_qdio_out_q*,int,int) ;
 int FUNC_2 (struct qeth_qdio_out_q*,int *,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct qeth_qdio_out_q *VAR_2, bool VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (!VAR_2->bufs[VAR_4])
   continue;
  FUNC_1(VAR_2, VAR_4, 1);
  FUNC_2(VAR_2, VAR_2->bufs[VAR_4], 1, 0);
  if (VAR_3) {
   FUNC_0(VAR_1, VAR_2->bufs[VAR_4]);
   VAR_2->bufs[VAR_4] = ((void*)0);
  }
 }
}
