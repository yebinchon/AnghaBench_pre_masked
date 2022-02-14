
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_qdio_out_q {int max_elements; int set_pci_flags_count; } ;
struct qeth_qdio_out_buffer {int state; scalar_t__ bytes; scalar_t__ next_element_to_fill; TYPE_2__* buffer; scalar_t__* is_header; } ;
struct TYPE_4__ {TYPE_1__* element; } ;
struct TYPE_3__ {int sflags; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct qeth_qdio_out_buffer*,int,int) ;

__attribute__((used)) static void FUNC_5(struct qeth_qdio_out_q *VAR_3,
         struct qeth_qdio_out_buffer *VAR_4,
         bool VAR_5, int VAR_6)
{
 int VAR_7;


 if (VAR_4->buffer->element[0].sflags & VAR_1)
  FUNC_0(&VAR_3->set_pci_flags_count);

 FUNC_4(VAR_4, VAR_5, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_3->max_elements; ++VAR_7) {
  if (VAR_4->buffer->element[VAR_7].addr && VAR_4->is_header[VAR_7])
   FUNC_2(VAR_2,
    VAR_4->buffer->element[VAR_7].addr);
  VAR_4->is_header[VAR_7] = 0;
 }

 FUNC_3(VAR_4->buffer, VAR_3->max_elements);
 VAR_4->next_element_to_fill = 0;
 VAR_4->bytes = 0;
 FUNC_1(&VAR_4->state, VAR_0);
}
