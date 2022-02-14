
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_q {int do_pack; int card; int used_buffers; } ;


 int FUNC_0 (int ,int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct qeth_qdio_out_q*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct qeth_qdio_out_q *VAR_2)
{
 if (!VAR_2->do_pack) {
  if (FUNC_2(&VAR_2->used_buffers)
      >= VAR_0){

   FUNC_0(VAR_2->card, 6, "np->pack");
   FUNC_1(VAR_2, VAR_1);
   VAR_2->do_pack = 1;
  }
 }
}
