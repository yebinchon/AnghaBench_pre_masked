
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_info {int tsin_id; } ;
struct c8sectpfei {struct channel_info** channel_data; } ;


 int VAR_0 ;

__attribute__((used)) static struct channel_info *FUNC_0(struct c8sectpfei *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_1->channel_data[VAR_3])
   continue;

  if (VAR_1->channel_data[VAR_3]->tsin_id == VAR_2)
   return VAR_1->channel_data[VAR_3];
 }

 return ((void*)0);
}
