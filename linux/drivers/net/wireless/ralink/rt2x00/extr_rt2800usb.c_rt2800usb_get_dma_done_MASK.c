
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_entry {unsigned int entry_idx; } ;
struct data_queue {int dummy; } ;


 int VAR_0 ;
 struct queue_entry* FUNC_0 (struct data_queue*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct data_queue *VAR_1)
{
 struct queue_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 return VAR_2->entry_idx;
}
