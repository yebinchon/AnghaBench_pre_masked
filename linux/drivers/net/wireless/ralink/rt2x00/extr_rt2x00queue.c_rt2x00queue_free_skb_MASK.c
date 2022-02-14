
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_entry {int * skb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct queue_entry*) ;

void FUNC_2(struct queue_entry *VAR_0)
{
 if (!VAR_0->skb)
  return;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0->skb);
 VAR_0->skb = ((void*)0);
}
