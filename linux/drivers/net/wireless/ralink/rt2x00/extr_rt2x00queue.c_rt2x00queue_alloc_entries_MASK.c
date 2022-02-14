
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_entry {unsigned int entry_idx; int priv_data; int * skb; struct data_queue* queue; scalar_t__ flags; } ;
struct data_queue {int priv_size; unsigned int limit; struct queue_entry* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct queue_entry*,unsigned int,unsigned int,int,int) ;
 struct queue_entry* FUNC_1 (unsigned int,unsigned int,int ) ;
 int FUNC_2 (struct data_queue*) ;

__attribute__((used)) static int FUNC_3(struct data_queue *VAR_2)
{
 struct queue_entry *VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 FUNC_2(VAR_2);




 VAR_4 = sizeof(*VAR_3) + VAR_2->priv_size;
 VAR_3 = FUNC_1(VAR_2->limit, VAR_4, VAR_1);
 if (!VAR_3)
  return -VAR_0;





 for (VAR_5 = 0; VAR_5 < VAR_2->limit; VAR_5++) {
  VAR_3[VAR_5].flags = 0;
  VAR_3[VAR_5].queue = VAR_2;
  VAR_3[VAR_5].skb = ((void*)0);
  VAR_3[VAR_5].entry_idx = VAR_5;
  VAR_3[VAR_5].priv_data =
      (((char *)(VAR_3)) + ((VAR_2->limit) * (sizeof(*VAR_3))) + ((VAR_5) * (VAR_2->priv_size)));

 }



 VAR_2->entries = VAR_3;

 return 0;
}
