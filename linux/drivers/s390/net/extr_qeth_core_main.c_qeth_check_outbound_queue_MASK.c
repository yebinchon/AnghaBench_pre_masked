
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_q {int next_buf_to_fill; int do_pack; int state; int set_pci_flags_count; int used_buffers; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qeth_qdio_out_q*,int ,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (struct qeth_qdio_out_q*,int,int) ;
 scalar_t__ FUNC_6 (struct qeth_qdio_out_q*) ;
 scalar_t__ FUNC_7 (struct qeth_qdio_out_q*) ;

__attribute__((used)) static void FUNC_8(struct qeth_qdio_out_q *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;





 if ((FUNC_1(&VAR_4->used_buffers) <= VAR_0) ||
     !FUNC_1(&VAR_4->set_pci_flags_count)) {
  if (FUNC_3(&VAR_4->state, VAR_1) ==
    VAR_2) {





   VAR_5 = VAR_4->next_buf_to_fill;
   VAR_7 = VAR_4->do_pack;

   FUNC_4();
   VAR_6 += FUNC_7(VAR_4);
   if (!VAR_6 &&
       !FUNC_1(&VAR_4->set_pci_flags_count))
    VAR_6 += FUNC_6(VAR_4);
   if (VAR_7)
    FUNC_0(VAR_4, VAR_3, VAR_6);
   if (VAR_6)
    FUNC_5(VAR_4, VAR_5, VAR_6);
   FUNC_2(&VAR_4->state, VAR_2);
  }
 }
}
