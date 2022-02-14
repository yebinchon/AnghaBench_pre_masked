
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_q {size_t next_buf_to_fill; struct qeth_qdio_out_buffer** bufs; } ;
struct qeth_qdio_out_buffer {scalar_t__ next_element_to_fill; int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct qeth_qdio_out_q *VAR_3)
{
 struct qeth_qdio_out_buffer *VAR_4;

 VAR_4 = VAR_3->bufs[VAR_3->next_buf_to_fill];
 if ((FUNC_0(&VAR_4->state) == VAR_1) &&
     (VAR_4->next_element_to_fill > 0)) {

  FUNC_1(&VAR_4->state, VAR_2);
  VAR_3->next_buf_to_fill =
   (VAR_3->next_buf_to_fill + 1) % VAR_0;
  return 1;
 }
 return 0;
}
