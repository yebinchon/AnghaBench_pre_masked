
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct data_queue {unsigned int limit; TYPE_1__* entries; } ;
struct TYPE_2__ {struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1(struct data_queue *VAR_2)
{
 unsigned int VAR_3;
 struct sk_buff *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->limit; VAR_3++) {
  VAR_4 = FUNC_0(&VAR_2->entries[VAR_3], VAR_1);
  if (!VAR_4)
   return -VAR_0;
  VAR_2->entries[VAR_3].skb = VAR_4;
 }

 return 0;
}
