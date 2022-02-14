
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp_lun_data {int hold; scalar_t__ num_tagged; struct esp_cmd_entry** tagged_cmds; struct esp_cmd_entry* non_tagged_cmd; } ;
struct esp_cmd_entry {size_t* orig_tag; } ;


 int FUNC_0 (struct esp_cmd_entry*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct esp_cmd_entry *VAR_1,
        struct esp_lun_data *VAR_2)
{
 if (!VAR_1->orig_tag[0]) {

  if (VAR_2->non_tagged_cmd)
   return -VAR_0;

  if (VAR_2->hold) {



   if (VAR_2->num_tagged)
    return -VAR_0;




   VAR_2->hold = 0;
  } else if (VAR_2->num_tagged) {



   VAR_2->hold = 1;
   return -VAR_0;
  }

  VAR_2->non_tagged_cmd = VAR_1;
  return 0;
 }


 if (VAR_2->non_tagged_cmd || VAR_2->hold)
  return -VAR_0;

 FUNC_0(VAR_2->tagged_cmds[VAR_1->orig_tag[1]]);

 VAR_2->tagged_cmds[VAR_1->orig_tag[1]] = VAR_1;
 VAR_2->num_tagged++;

 return 0;
}
