
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct p54_channel_list {int entries; int max_entries; struct p54_channel_entry* channels; int * band_channel_num; } ;
struct p54_channel_entry {scalar_t__ freq; int band; scalar_t__ data; scalar_t__ max_power; int index; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct p54_channel_entry *FUNC_2(struct p54_channel_list *VAR_0,
         u16 VAR_1, u16 VAR_2)
{
 int VAR_3;
 struct p54_channel_entry *VAR_4 = ((void*)0);






 for (VAR_3 = VAR_0->entries; VAR_3 >= 0; VAR_3--) {
  if (VAR_1 == VAR_0->channels[VAR_3].freq) {
   VAR_4 = &VAR_0->channels[VAR_3];
   break;
  }
 }

 if ((VAR_3 < 0) && (VAR_0->entries < VAR_0->max_entries)) {

  int VAR_5 = FUNC_1(VAR_1);





  if (VAR_5 >= 0) {
   VAR_3 = VAR_0->entries++;
   VAR_0->band_channel_num[VAR_5]++;

   VAR_4 = &VAR_0->channels[VAR_3];
   VAR_4->freq = VAR_1;
   VAR_4->band = VAR_5;
   VAR_4->index = FUNC_0(VAR_1);
   VAR_4->max_power = 0;
   VAR_4->data = 0;
  }
 }

 if (VAR_4)
  VAR_4->data |= VAR_2;

 return VAR_4;
}
