
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {void* data; } ;
struct qeth_qdio_out_buffer {int next_element_to_fill; int* is_header; int skb_list; struct qdio_buffer* buffer; } ;
struct qeth_hdr {int dummy; } ;
struct qdio_buffer {TYPE_1__* element; } ;
struct TYPE_2__ {unsigned int length; int eflags; struct qeth_hdr* addr; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct sk_buff*,struct qeth_qdio_out_buffer*,int,unsigned int) ;
 int FUNC_1 (int *,struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_2(struct qeth_qdio_out_buffer *VAR_1,
         struct sk_buff *VAR_2, struct qeth_hdr *VAR_3,
         unsigned int VAR_4, unsigned int VAR_5)
{
 struct qdio_buffer *VAR_6 = VAR_1->buffer;
 bool VAR_7 = 1;

 FUNC_1(&VAR_1->skb_list, VAR_2);


 if (VAR_5) {
  int VAR_8 = VAR_1->next_element_to_fill;
  VAR_7 = 0;

  VAR_6->element[VAR_8].addr = VAR_3;
  VAR_6->element[VAR_8].length = VAR_5;
  VAR_6->element[VAR_8].eflags = VAR_0;

  VAR_1->is_header[VAR_8] = ((void *)VAR_3 != VAR_2->data);
  VAR_1->next_element_to_fill++;
 }

 return FUNC_0(VAR_2, VAR_1, VAR_7, VAR_4);
}
