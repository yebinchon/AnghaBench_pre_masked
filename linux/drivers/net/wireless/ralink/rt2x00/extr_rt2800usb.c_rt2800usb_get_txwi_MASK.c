
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct queue_entry {TYPE_2__* skb; TYPE_1__* queue; } ;
typedef int __le32 ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ qid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __le32 *FUNC_0(struct queue_entry *VAR_2)
{
 if (VAR_2->queue->qid == VAR_0)
  return (__le32 *) (VAR_2->skb->data);
 else
  return (__le32 *) (VAR_2->skb->data + VAR_1);
}
