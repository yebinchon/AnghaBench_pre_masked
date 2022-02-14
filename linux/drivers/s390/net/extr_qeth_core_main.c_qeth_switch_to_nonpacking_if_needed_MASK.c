
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_q {scalar_t__ do_pack; int card; int used_buffers; } ;


 int FUNC_0 (int ,int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct qeth_qdio_out_q*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct qeth_qdio_out_q*) ;

__attribute__((used)) static int FUNC_4(struct qeth_qdio_out_q *VAR_2)
{
 if (VAR_2->do_pack) {
  if (FUNC_2(&VAR_2->used_buffers)
      <= VAR_0) {

   FUNC_0(VAR_2->card, 6, "pack->np");
   FUNC_1(VAR_2, VAR_1);
   VAR_2->do_pack = 0;
   return FUNC_3(VAR_2);
  }
 }
 return 0;
}
