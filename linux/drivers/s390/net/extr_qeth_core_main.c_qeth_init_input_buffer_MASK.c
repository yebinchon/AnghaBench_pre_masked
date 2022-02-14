
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_qdio_buffer {TYPE_3__* buffer; struct qeth_buffer_pool_entry* pool_entry; scalar_t__ rx_skb; } ;
struct TYPE_4__ {scalar_t__ cq; } ;
struct qeth_card {int dev; TYPE_1__ options; } ;
struct qeth_buffer_pool_entry {int * elements; } ;
struct TYPE_6__ {TYPE_2__* element; } ;
struct TYPE_5__ {scalar_t__ sflags; scalar_t__ eflags; int addr; int length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qeth_card*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 struct qeth_buffer_pool_entry* FUNC_2 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_5,
  struct qeth_qdio_buffer *VAR_6)
{
 struct qeth_buffer_pool_entry *VAR_7;
 int VAR_8;

 if ((VAR_5->options.cq == VAR_2) && (!VAR_6->rx_skb)) {
  VAR_6->rx_skb = FUNC_1(VAR_5->dev,
            VAR_3 + VAR_0);
  if (!VAR_6->rx_skb)
   return 1;
 }

 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7)
  return 1;
 VAR_6->pool_entry = VAR_7;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); ++VAR_8) {
  VAR_6->buffer->element[VAR_8].length = VAR_1;
  VAR_6->buffer->element[VAR_8].addr = VAR_7->elements[VAR_8];
  if (VAR_8 == FUNC_0(VAR_5) - 1)
   VAR_6->buffer->element[VAR_8].eflags = VAR_4;
  else
   VAR_6->buffer->element[VAR_8].eflags = 0;
  VAR_6->buffer->element[VAR_8].sflags = 0;
 }
 return 0;
}
