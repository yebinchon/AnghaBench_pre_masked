
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_q {int * prev_hdr; scalar_t__ bulk_start; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct qeth_qdio_out_q*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct qeth_qdio_out_q *VAR_0)
{
 FUNC_1(VAR_0, VAR_0->bulk_start, 1);

 VAR_0->bulk_start = FUNC_0(VAR_0->bulk_start + 1);
 VAR_0->prev_hdr = ((void*)0);
}
